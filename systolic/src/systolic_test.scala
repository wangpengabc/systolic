//package systolic

import chisel3._
import chisel3.util._

// ----------------------8----------------8------------------16-----------------16-------------------8------------------------8-----------------------8-------------4------------32------------16-----------16-------
class WSSystolic_Test(in_channel: Int, out_channel: Int, in_slot_num: Int, ker_slot_num: Int, cycle_read_kernel: Int, cycle_read_input: Int, cycle_out_res: Int, max_ks: Int, max_w: Int, batch: Int, width: Int) extends Module {
  val io = IO(new Bundle {
    val inst = DeqIO(new RoCCInstruction()) //指令输入, (output)valid
    val a_in = DeqIO(Vec(cycle_read_kernel, UInt((width).W))) //数据输入
    val b_in = DeqIO(Vec(cycle_read_input, UInt((batch * width).W)))
    val c_out = Output(Valid(Vec(cycle_out_res, UInt((batch * width).W))))
  })
  val total_cycle = RegInit(1000.U(10.W))
  val exec_cycle = RegInit(0.U(10.W))
  val exec_fin = RegInit(VecInit(Seq.fill(out_channel+1)(false.B)))
  val ids = Module(new InstDispatcher()).io
  val a_input = Module(new WSSysIn_Kernel(in_channel, out_channel, ker_slot_num, max_ks * max_ks * in_channel, in_channel, width))
  val b_input = Module(new WSSysIn_Input(in_channel, in_slot_num, max_w, cycle_read_input, batch * width))
  val c_output = Module(new Update_Result(out_channel, in_slot_num, max_w, out_channel, batch*width))

  // 控制conv_exec指令的完成，在最后一行PE开始输出结果之后

  total_cycle := ids.config.ks * ids.config.ks * ids.config.out_w + in_channel.asUInt
  ids.inst <> io.inst

  // Part 1: instruction connection
  a_input.io.in_inst <> ids.wr_filter
  a_input.io.out_inst.bits.id := ids.conv_exec.bits.filter_id
  a_input.io.out_inst.valid := ids.conv_exec.valid
  b_input.io.in_inst <> ids.wr_input
  b_input.io.out_inst.bits.id := ids.conv_exec.bits.input_id
  b_input.io.out_inst.valid := ids.conv_exec.valid
  c_output.io.in_inst.bits.id := ids.conv_exec.bits.output_id
  c_output.io.in_inst.valid := ids.conv_exec.valid
  c_output.io.out_inst <> ids.rd_output
  a_input.io.config:=ids.config
  b_input.io.config:=ids.config
  c_output.io.config:=ids.config


  // Part 2: I/O and Buffer Connection
  io.a_in.ready := a_input.io.data_in.ready
  io.b_in.ready := b_input.io.data_in.ready
  a_input.io.data_in.valid := io.a_in.valid
  b_input.io.data_in.valid := io.b_in.valid
  io.c_out.valid := c_output.io.data_out.valid
  for(i <- 0 until cycle_read_kernel){
    a_input.io.data_in.bits(i).bits := io.a_in.bits(i)
    a_input.io.data_in.bits(i).valid := io.a_in.valid
  }
  for(i <- 0 until cycle_read_input){
    b_input.io.data_in.bits(i).bits := io.b_in.bits(i)
    b_input.io.data_in.bits(i).valid := io.b_in.valid
  }
  io.c_out:=c_output.io.data_out


  // Part 3: Overall Controller
  //如果input buffer的输出指令和filter buffer的输出指令均有效，则视为开始计算
  //exec_cycle对应的是0号PE的cycle情况
  exec_fin(0):= (exec_cycle===total_cycle-1.U)
  for(i <- 1 until out_channel){
    exec_fin(i) := exec_fin(i-1)
  }
  exec_cycle := (exec_cycle + ids.conv_exec.valid)%total_cycle
  ids.conv_exec.ready := exec_fin(out_channel-1) //最后一个cycle，conv指令结束，ready置为真，允许下一条指令进来
  a_input.io.data_out.ready:=(exec_cycle%ids.config.out_w < in_channel.asUInt && exec_cycle < total_cycle - in_channel.asUInt)
  // input的输入：前in_channel个cycle不输入，之后一直输入
  b_input.io.data_out.ready:=(exec_cycle >= in_channel.asUInt)

  // Part 4: PE connection
  val pes = for(i <- 0 until out_channel) yield{
    for(j <- 0 until in_channel) yield{
      Module(new WSPE(j, in_channel, 1, batch, width)).io
    }
  }
  for(i <- 0 until out_channel){
    for(j <- 1 until in_channel){
      pes(i)(j).in_a <> pes(i)(j-1).out_a
      pes(i)(j).in_c <> pes(i)(j-1).out_c
      pes(i)(j).in_stage_cycle := pes(i)(j-1).out_stage_cycle
    }
  }
  for(i <- 1 until out_channel){
    for(j <- 0 until in_channel){
      pes(i)(j).in_b <> pes(i-1)(j).out_b
    }
  }
  for(i <- 0 until out_channel){
    pes(i)(0).in_stage_cycle := ids.config.out_w
    pes(i)(0).in_c.bits := 0.U
    pes(i)(0).in_c.valid := true.B
    pes(i)(0).in_a.bits := a_input.io.data_out.bits(i).bits
    pes(i)(0).in_a.valid := a_input.io.data_out.bits(i).valid
    c_output.io.data_in(i).bits := pes(i)(in_channel-1).out_c.bits
    c_output.io.data_in(i).valid := pes(i)(in_channel-1).out_c.valid
  }
  for(i <- 0 until in_channel){
    pes(0)(i).in_b.bits := b_input.io.data_out.bits(i).bits
    pes(0)(i).in_b.valid := b_input.io.data_out.bits(i).valid
  }

}
