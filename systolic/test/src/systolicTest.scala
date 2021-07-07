package systolic

import chisel3._
//import chiseltest._
import org.scalatest.flatspec._
import org.scalatest.matchers.should._
import chisel3.tester._
import chisel3.tester.RawTester.test

import chiseltest.experimental.TestOptionBuilder._
import chiseltest.internal.WriteVcdAnnotation

import scala.math.pow


//object GCDSpec extends ChiselUtestTester {
//  val tests = Tests {
//    test("GCD") {
//      testCircuit(new WSSystolic_Test(in_channel = 8, out_channel = 8, in_slot_num = 16, ker_slot_num = 16, cycle_read_kernel = 8, cycle_read_input = 8, cycle_out_res = 8, max_ks = 4, max_w = 32, batch = 16, width = 16)) { c =>

// run with mill -i systolic.test.test
//class systolicTest extends FlatSpec with ChiselScalatestTester with Matchers {
class systolicTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  it should "test WSSysIn_Input" in {
    test(new WSSysIn_Input(8, 16, 32, 8, 256)).withAnnotations(Seq(WriteVcdAnnotation)){ c=>
      c.io.config.in_w.poke(14.U)
      c.io.config.out_w.poke(12.U)
      c.io.config.ks.poke(3.U)
      c.io.config.stride.poke(1.U)

      c.clock.step(5)

    }
  }

//  it should "test ram_sdp_1024x256" in {
//    test(new ram_sdp_1024x256){ c=>
////      reset
//      c.reset.poke(false.B)
//      c.clock.step(1)
//      c.reset.poke(true.B)
////      begin test
//      var wr_addr = 0.U(10.W)
//      var rd_addr = 0.U(10.W)
//      var wr_data = 0.U(256.W)
//      var rd_data = 0.U(256.W)
//      var wr_en = Bool()
//      val rand = scala.util.Random
//
//      val addr_bound = pow(2, 10)
//
//      for (i <- 0 until 100) {
//        wr_addr = (rand.nextInt(1024)).U
//        wr_data = (rand.nextInt(0xffffff)).U
//        c.io.wr_addr.poke(wr_addr)
//        c.io.wr_data.poke(wr_data)
//        c.io.wr_en.poke(true.B)
//
//        Console.print(c.io.rd_addr.peek(), '\n')
//        c.io.rd_addr.poke(wr_addr)
//        Console.print(c.io.rd_addr.peek(), '\n')
//
//        c.clock.step(1)
//
////        c.io.wr_en.poke(false.B)
////        c.clock.step(1)
//
//
//        c.io.rd_data.expect(wr_data)
//
//      }
//
//    }
//  }

  it should "test WSSystolic_Test" in {
    test(new WSSystolic_Test(in_channel=8, out_channel=8, in_slot_num=16, ker_slot_num=16, cycle_read_kernel=8,
      cycle_read_input=8, cycle_out_res=8, max_ks=4, max_w=32, batch=16, width=16)).withAnnotations(Seq(WriteVcdAnnotation)){c=>

        val cycle_read_input = 8
        val cycle_read_kernel = 8
        val cycle_out_res = 8

        c.io.a_in.valid.poke(false.B)
        c.io.b_in.valid.poke(false.B)

        c.io.inst.valid.poke(true.B)

        // config rs1=out_w, rs2=ks
        // 3x3 convolution, out_w = 12, in_w = 14
        c.io.inst.bits.rs1.poke(12.U)
        c.io.inst.bits.rs2.poke(3.U)
        c.io.inst.bits.funct.poke(9.U)
        c.clock.step(1)

        // push three input instruction
        c.io.inst.valid.poke(true.B)
        c.io.inst.bits.funct.poke(1.U)
        c.io.inst.bits.rs1.poke(0.U)
        c.clock.step(1)
        c.io.inst.bits.funct.poke(1.U)
        c.io.inst.bits.rs1.poke(1.U)
        c.clock.step(1)
        c.io.inst.bits.funct.poke(1.U)
        c.io.inst.bits.rs1.poke(2.U)
        c.clock.step(1)
        // push filter load inst
        c.io.inst.bits.funct.poke(2.U)
        c.io.inst.bits.rs1.poke(1.U)
        c.clock.step(1)
        // push compute inst
        c.io.inst.bits.funct.poke(3.U)
        c.io.inst.bits.rs1.poke(0.U)
        c.io.inst.bits.rs2.poke(1.U)
        c.clock.step(1)
        c.io.inst.bits.funct.poke(4.U)
        c.io.inst.bits.rs1.poke(0.U)
        c.io.inst.bits.rs2.poke(0.U)
        c.clock.step(1)

        // push free-output inst
        c.io.inst.bits.funct.poke(7.U)
        c.io.inst.bits.rs1.poke(0.U)
        c.io.inst.bits.rs2.poke(1.U)
        c.clock.step(1)

        // push output inst
        c.io.inst.bits.funct.poke(8.U)
        c.io.inst.bits.rs1.poke(0.U)
        c.clock.step(1)
        c.io.inst.valid.poke(false.B)


        val > = Array
        val mat_in = Array.ofDim[Int](5, 4, 12)

        // h=7, c=16, in_w=14
        val mat_pad = Array.fill(7, 8, 14)(0) // Array.fill, the number of elements in the 1st dim is 7, ........
        val mat_fil = Array.fill(8, 8, 9)(0)
        val mat_out = Array.ofDim[Int](5, 16, 12)
        val rand = scala.util.Random
        // input: 2*4*12
        // filter: 8*4*9
        // Console.printf("mat_in\n")
        for (i <- 0 until 7) {
          for (j <- 0 until 8) {
            for (k <- 0 until 14) {
              mat_pad(i)(j)(k) = rand.nextInt(3) //k%3
              Console.printf("%d ", mat_pad(i)(j)(k))
            }
            Console.printf("\n")
          }
          Console.printf("\n")
        }
        // // Console.printf("mat_pad\n")
        // // for(i <- 0 until 5){
        // //   for(j <- 0 until 4){
        // //     for(k <- 0 until 12){
        // //       mat_pad(i+1)(j)(k+1)=mat_in(i)(j)(k)
        // //     }
        // //   }
        // // }
        // // for(i <- 0 until 4){
        // //   for(j <- 0 until 7){
        // //     for(k <- 0 until 14){
        // //       Console.printf("%d ",mat_pad(j)(i)(k))
        // //     }
        // //     Console.printf("\n")
        // //   }
        // //   Console.printf("\n")
        // // }
        Console.printf("mat_filter\n")
        for (i <- 0 until 8) {
          for (j <- 0 until 8) {
            for (k <- 0 until 9) {
              mat_fil(i)(j)(k) = rand.nextInt(3)
              Console.printf("%d ", mat_fil(i)(j)(k))
            }
            Console.printf("\n")
          }
          Console.printf("\n")
        }
        Console.printf("mat_out\n")
        for (i <- 0 until 5) {
          for (j <- 0 until 8) {
            for (k <- 0 until 12) {
              mat_out(i)(j)(k) = 0
              for (l <- 0 until 8) {
                for (m <- 0 until 3) {
                  for (n <- 0 until 3) {
                    mat_out(i)(j)(k) = mat_out(i)(j)(k) + mat_pad(i + m)(l)(k + n) * mat_fil(j)(l)(m * 3 + n)
                  }
                }
              }
              Console.printf("%d ", mat_out(i)(j)(k))
            }
            Console.printf("\n")
          }
          Console.printf("\n")
        }
        var idx_input = 0
        var idx_filter = 0
        var num_cycle = 0
        // input: 7 * 14 cycle
        // input inst: 14 cycles
        // filter inst: 8*9 cycles
        for (i <- 0 until 100) {
          if ((c.io.b_in.ready.peek()) == 1) {
            for (k <- 0 until cycle_read_input) {
              // h c w
              c.io.b_in.bits(k).poke(1.U)
              Console.print("c.ids:", c.ids.peek())
            }
            idx_input = idx_input + 1
          }
          if ((c.io.a_in.ready.peek()) == 1) {
            for (k <- 0 until cycle_read_kernel) {
              c.io.a_in.bits(k).poke((idx_filter / 8 + 1).U)
              Console.print("c.ids:", c.ids.peek())

            }
            idx_filter = idx_filter + 1
          }
          print("input filter index:", idx_input, idx_filter)
          // if(peek(c.io.b_in.ready).intValue==1){
          //   for(k <- 0 until cycle_read_input){
          //     // h c w
          //     poke(c.io.b_in.bits(k),mat_pad(idx_input/48)((idx_input%48)/12)(idx_input%12))
          //     idx_input=idx_input+1
          //   }
          // }
          // if(peek(c.io.a_in.ready).intValue==1){
          //   for(k <- 0 until cycle_read_kernel){
          //     poke(c.io.a_in.bits(k),mat_fil(idx_filter/36)((idx_filter%36)/9)(idx_filter%9))
          //     idx_filter = idx_filter + 1
          //   }
          // }
          c.io.a_in.valid.poke(true.B)
          c.io.b_in.valid.poke(true.B)
          c.clock.step(1)
          num_cycle = num_cycle + 1
          print("num_cycle:", num_cycle)
          print(c.io.c_out.bits.peek(), c.io.c_out.valid.peek())
          println()
//          Console.print("c.ids:", c.ids.inst.valid.peek())
          println(c.ids.inst)

        }
        for (i <- 0 until 240) {
          for (k <- 0 until cycle_read_input) {
            c.io.b_in.bits(k).poke(0.U)
          }
          for (k <- 0 until cycle_read_kernel) {
            c.io.a_in.bits(k).poke(0.U)
          }
          c.io.a_in.valid.poke(false.B)
          c.io.b_in.valid.poke(false.B)
          c.clock.step(1)
          num_cycle = num_cycle + 1
          print("num_cycle:", num_cycle)
          print(c.io.c_out.bits.peek(), c.io.c_out.valid.peek())
          println()
        }
      }
    }
}


//object systolicTest extends App {
//  (new systolicTest).execute()
//}

