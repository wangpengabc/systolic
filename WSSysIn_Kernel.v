module ram_sdp_1024x16(
  input         clock,
  input         io_wr_en,
  input  [9:0]  io_wr_addr,
  input  [15:0] io_wr_data,
  input  [9:0]  io_rd_addr,
  output [15:0] io_rd_data
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [15:0] buf_ [0:1023]; // @[systolic_base.scala 88:24]
  wire  buf__io_rd_data_MPORT_en; // @[systolic_base.scala 88:24]
  wire [9:0] buf__io_rd_data_MPORT_addr; // @[systolic_base.scala 88:24]
  wire [15:0] buf__io_rd_data_MPORT_data; // @[systolic_base.scala 88:24]
  wire [15:0] buf__MPORT_data; // @[systolic_base.scala 88:24]
  wire [9:0] buf__MPORT_addr; // @[systolic_base.scala 88:24]
  wire  buf__MPORT_mask; // @[systolic_base.scala 88:24]
  wire  buf__MPORT_en; // @[systolic_base.scala 88:24]
  reg [9:0] buf_io_rd_data_MPORT_addr_pipe_0;
  assign buf__io_rd_data_MPORT_en = 1'h1;
  assign buf__io_rd_data_MPORT_addr = buf_io_rd_data_MPORT_addr_pipe_0;
  assign buf__io_rd_data_MPORT_data = buf_[buf__io_rd_data_MPORT_addr]; // @[systolic_base.scala 88:24]
  assign buf__MPORT_data = io_wr_data;
  assign buf__MPORT_addr = io_wr_addr;
  assign buf__MPORT_mask = 1'h1;
  assign buf__MPORT_en = io_wr_en;
  assign io_rd_data = buf__io_rd_data_MPORT_data; // @[systolic_base.scala 92:14]
  always @(posedge clock) begin
    if (buf__MPORT_en & buf__MPORT_mask) begin
      buf_[buf__MPORT_addr] <= buf__MPORT_data; // @[systolic_base.scala 88:24]
    end
    buf_io_rd_data_MPORT_addr_pipe_0 <= io_rd_addr;
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    buf_[initvar] = _RAND_0[15:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  buf_io_rd_data_MPORT_addr_pipe_0 = _RAND_1[9:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module WSSysIn_Kernel(
  input         clock,
  input         reset,
  output        io_in_inst_ready,
  input         io_in_inst_valid,
  input  [4:0]  io_in_inst_bits_id,
  output        io_out_inst_ready,
  input         io_out_inst_valid,
  input  [4:0]  io_out_inst_bits_id,
  input  [9:0]  io_config_in_w,
  input  [9:0]  io_config_ks,
  input  [9:0]  io_config_out_w,
  input  [9:0]  io_config_stride,
  output        io_data_in_ready,
  input         io_data_in_valid,
  input         io_data_in_bits_0_valid,
  input  [15:0] io_data_in_bits_0_bits,
  input         io_data_in_bits_1_valid,
  input  [15:0] io_data_in_bits_1_bits,
  input         io_data_in_bits_2_valid,
  input  [15:0] io_data_in_bits_2_bits,
  input         io_data_in_bits_3_valid,
  input  [15:0] io_data_in_bits_3_bits,
  input         io_data_in_bits_4_valid,
  input  [15:0] io_data_in_bits_4_bits,
  input         io_data_in_bits_5_valid,
  input  [15:0] io_data_in_bits_5_bits,
  input         io_data_in_bits_6_valid,
  input  [15:0] io_data_in_bits_6_bits,
  input         io_data_in_bits_7_valid,
  input  [15:0] io_data_in_bits_7_bits,
  input         io_data_out_ready,
  output        io_data_out_valid,
  output        io_data_out_bits_0_valid,
  output [15:0] io_data_out_bits_0_bits,
  output        io_data_out_bits_1_valid,
  output [15:0] io_data_out_bits_1_bits,
  output        io_data_out_bits_2_valid,
  output [15:0] io_data_out_bits_2_bits,
  output        io_data_out_bits_3_valid,
  output [15:0] io_data_out_bits_3_bits,
  output        io_data_out_bits_4_valid,
  output [15:0] io_data_out_bits_4_bits,
  output        io_data_out_bits_5_valid,
  output [15:0] io_data_out_bits_5_bits,
  output        io_data_out_bits_6_valid,
  output [15:0] io_data_out_bits_6_bits,
  output        io_data_out_bits_7_valid,
  output [15:0] io_data_out_bits_7_bits
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [31:0] _RAND_36;
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [31:0] _RAND_42;
  reg [31:0] _RAND_43;
  reg [31:0] _RAND_44;
  reg [31:0] _RAND_45;
  reg [31:0] _RAND_46;
  reg [31:0] _RAND_47;
  reg [31:0] _RAND_48;
`endif // RANDOMIZE_REG_INIT
  wire  ram_sdp_1024x16_clock; // @[systolic_base.scala 385:11]
  wire  ram_sdp_1024x16_io_wr_en; // @[systolic_base.scala 385:11]
  wire [9:0] ram_sdp_1024x16_io_wr_addr; // @[systolic_base.scala 385:11]
  wire [15:0] ram_sdp_1024x16_io_wr_data; // @[systolic_base.scala 385:11]
  wire [9:0] ram_sdp_1024x16_io_rd_addr; // @[systolic_base.scala 385:11]
  wire [15:0] ram_sdp_1024x16_io_rd_data; // @[systolic_base.scala 385:11]
  wire  ram_sdp_1024x16_1_clock; // @[systolic_base.scala 385:11]
  wire  ram_sdp_1024x16_1_io_wr_en; // @[systolic_base.scala 385:11]
  wire [9:0] ram_sdp_1024x16_1_io_wr_addr; // @[systolic_base.scala 385:11]
  wire [15:0] ram_sdp_1024x16_1_io_wr_data; // @[systolic_base.scala 385:11]
  wire [9:0] ram_sdp_1024x16_1_io_rd_addr; // @[systolic_base.scala 385:11]
  wire [15:0] ram_sdp_1024x16_1_io_rd_data; // @[systolic_base.scala 385:11]
  wire  ram_sdp_1024x16_2_clock; // @[systolic_base.scala 385:11]
  wire  ram_sdp_1024x16_2_io_wr_en; // @[systolic_base.scala 385:11]
  wire [9:0] ram_sdp_1024x16_2_io_wr_addr; // @[systolic_base.scala 385:11]
  wire [15:0] ram_sdp_1024x16_2_io_wr_data; // @[systolic_base.scala 385:11]
  wire [9:0] ram_sdp_1024x16_2_io_rd_addr; // @[systolic_base.scala 385:11]
  wire [15:0] ram_sdp_1024x16_2_io_rd_data; // @[systolic_base.scala 385:11]
  wire  ram_sdp_1024x16_3_clock; // @[systolic_base.scala 385:11]
  wire  ram_sdp_1024x16_3_io_wr_en; // @[systolic_base.scala 385:11]
  wire [9:0] ram_sdp_1024x16_3_io_wr_addr; // @[systolic_base.scala 385:11]
  wire [15:0] ram_sdp_1024x16_3_io_wr_data; // @[systolic_base.scala 385:11]
  wire [9:0] ram_sdp_1024x16_3_io_rd_addr; // @[systolic_base.scala 385:11]
  wire [15:0] ram_sdp_1024x16_3_io_rd_data; // @[systolic_base.scala 385:11]
  wire  ram_sdp_1024x16_4_clock; // @[systolic_base.scala 385:11]
  wire  ram_sdp_1024x16_4_io_wr_en; // @[systolic_base.scala 385:11]
  wire [9:0] ram_sdp_1024x16_4_io_wr_addr; // @[systolic_base.scala 385:11]
  wire [15:0] ram_sdp_1024x16_4_io_wr_data; // @[systolic_base.scala 385:11]
  wire [9:0] ram_sdp_1024x16_4_io_rd_addr; // @[systolic_base.scala 385:11]
  wire [15:0] ram_sdp_1024x16_4_io_rd_data; // @[systolic_base.scala 385:11]
  wire  ram_sdp_1024x16_5_clock; // @[systolic_base.scala 385:11]
  wire  ram_sdp_1024x16_5_io_wr_en; // @[systolic_base.scala 385:11]
  wire [9:0] ram_sdp_1024x16_5_io_wr_addr; // @[systolic_base.scala 385:11]
  wire [15:0] ram_sdp_1024x16_5_io_wr_data; // @[systolic_base.scala 385:11]
  wire [9:0] ram_sdp_1024x16_5_io_rd_addr; // @[systolic_base.scala 385:11]
  wire [15:0] ram_sdp_1024x16_5_io_rd_data; // @[systolic_base.scala 385:11]
  wire  ram_sdp_1024x16_6_clock; // @[systolic_base.scala 385:11]
  wire  ram_sdp_1024x16_6_io_wr_en; // @[systolic_base.scala 385:11]
  wire [9:0] ram_sdp_1024x16_6_io_wr_addr; // @[systolic_base.scala 385:11]
  wire [15:0] ram_sdp_1024x16_6_io_wr_data; // @[systolic_base.scala 385:11]
  wire [9:0] ram_sdp_1024x16_6_io_rd_addr; // @[systolic_base.scala 385:11]
  wire [15:0] ram_sdp_1024x16_6_io_rd_data; // @[systolic_base.scala 385:11]
  wire  ram_sdp_1024x16_7_clock; // @[systolic_base.scala 385:11]
  wire  ram_sdp_1024x16_7_io_wr_en; // @[systolic_base.scala 385:11]
  wire [9:0] ram_sdp_1024x16_7_io_wr_addr; // @[systolic_base.scala 385:11]
  wire [15:0] ram_sdp_1024x16_7_io_wr_data; // @[systolic_base.scala 385:11]
  wire [9:0] ram_sdp_1024x16_7_io_rd_addr; // @[systolic_base.scala 385:11]
  wire [15:0] ram_sdp_1024x16_7_io_rd_data; // @[systolic_base.scala 385:11]
  reg [9:0] in_addr_0; // @[systolic_base.scala 389:24]
  reg [9:0] in_addr_1; // @[systolic_base.scala 389:24]
  reg [9:0] in_addr_2; // @[systolic_base.scala 389:24]
  reg [9:0] in_addr_3; // @[systolic_base.scala 389:24]
  reg [9:0] in_addr_4; // @[systolic_base.scala 389:24]
  reg [9:0] in_addr_5; // @[systolic_base.scala 389:24]
  reg [9:0] in_addr_6; // @[systolic_base.scala 389:24]
  reg [9:0] in_addr_7; // @[systolic_base.scala 389:24]
  reg [9:0] out_addr_0; // @[systolic_base.scala 390:25]
  reg [9:0] out_addr_1; // @[systolic_base.scala 390:25]
  reg [9:0] out_addr_2; // @[systolic_base.scala 390:25]
  reg [9:0] out_addr_3; // @[systolic_base.scala 390:25]
  reg [9:0] out_addr_4; // @[systolic_base.scala 390:25]
  reg [9:0] out_addr_5; // @[systolic_base.scala 390:25]
  reg [9:0] out_addr_6; // @[systolic_base.scala 390:25]
  reg [9:0] out_addr_7; // @[systolic_base.scala 390:25]
  reg  can_out_0; // @[systolic_base.scala 391:24]
  reg  can_out_1; // @[systolic_base.scala 391:24]
  reg  can_out_2; // @[systolic_base.scala 391:24]
  reg  can_out_3; // @[systolic_base.scala 391:24]
  reg  can_out_4; // @[systolic_base.scala 391:24]
  reg  can_out_5; // @[systolic_base.scala 391:24]
  reg  can_out_6; // @[systolic_base.scala 391:24]
  reg  can_out_7; // @[systolic_base.scala 391:24]
  reg  can_out_8; // @[systolic_base.scala 391:24]
  reg [3:0] out_kh_0; // @[systolic_base.scala 393:23]
  reg [3:0] out_kh_1; // @[systolic_base.scala 393:23]
  reg [3:0] out_kh_2; // @[systolic_base.scala 393:23]
  reg [3:0] out_kh_3; // @[systolic_base.scala 393:23]
  reg [3:0] out_kh_4; // @[systolic_base.scala 393:23]
  reg [3:0] out_kh_5; // @[systolic_base.scala 393:23]
  reg [3:0] out_kh_6; // @[systolic_base.scala 393:23]
  reg [3:0] out_kh_7; // @[systolic_base.scala 393:23]
  reg [3:0] out_kw_0; // @[systolic_base.scala 394:23]
  reg [3:0] out_kw_1; // @[systolic_base.scala 394:23]
  reg [3:0] out_kw_2; // @[systolic_base.scala 394:23]
  reg [3:0] out_kw_3; // @[systolic_base.scala 394:23]
  reg [3:0] out_kw_4; // @[systolic_base.scala 394:23]
  reg [3:0] out_kw_5; // @[systolic_base.scala 394:23]
  reg [3:0] out_kw_6; // @[systolic_base.scala 394:23]
  reg [3:0] out_kw_7; // @[systolic_base.scala 394:23]
  reg [3:0] out_slot_0; // @[systolic_base.scala 395:25]
  reg [3:0] out_slot_1; // @[systolic_base.scala 395:25]
  reg [3:0] out_slot_2; // @[systolic_base.scala 395:25]
  reg [3:0] out_slot_3; // @[systolic_base.scala 395:25]
  reg [3:0] out_slot_4; // @[systolic_base.scala 395:25]
  reg [3:0] out_slot_5; // @[systolic_base.scala 395:25]
  reg [3:0] out_slot_6; // @[systolic_base.scala 395:25]
  reg [3:0] out_slot_7; // @[systolic_base.scala 395:25]
  wire [9:0] _GEN_27 = {{9'd0}, io_data_in_bits_0_valid}; // @[systolic_base.scala 411:22]
  wire [9:0] _T_2 = in_addr_0 + _GEN_27; // @[systolic_base.scala 411:22]
  wire [13:0] _T_3 = 4'h8 * io_config_ks; // @[systolic_base.scala 411:66]
  wire [23:0] _T_4 = _T_3 * io_config_ks; // @[systolic_base.scala 411:81]
  wire [23:0] _GEN_28 = {{14'd0}, _T_2}; // @[systolic_base.scala 411:47]
  wire [9:0] _GEN_30 = {{9'd0}, io_data_in_bits_1_valid}; // @[systolic_base.scala 411:22]
  wire [9:0] _T_7 = in_addr_1 + _GEN_30; // @[systolic_base.scala 411:22]
  wire [23:0] _GEN_31 = {{14'd0}, _T_7}; // @[systolic_base.scala 411:47]
  wire [9:0] _GEN_33 = {{9'd0}, io_data_in_bits_2_valid}; // @[systolic_base.scala 411:22]
  wire [9:0] _T_12 = in_addr_2 + _GEN_33; // @[systolic_base.scala 411:22]
  wire [23:0] _GEN_34 = {{14'd0}, _T_12}; // @[systolic_base.scala 411:47]
  wire [9:0] _GEN_36 = {{9'd0}, io_data_in_bits_3_valid}; // @[systolic_base.scala 411:22]
  wire [9:0] _T_17 = in_addr_3 + _GEN_36; // @[systolic_base.scala 411:22]
  wire [23:0] _GEN_37 = {{14'd0}, _T_17}; // @[systolic_base.scala 411:47]
  wire [9:0] _GEN_39 = {{9'd0}, io_data_in_bits_4_valid}; // @[systolic_base.scala 411:22]
  wire [9:0] _T_22 = in_addr_4 + _GEN_39; // @[systolic_base.scala 411:22]
  wire [23:0] _GEN_40 = {{14'd0}, _T_22}; // @[systolic_base.scala 411:47]
  wire [9:0] _GEN_42 = {{9'd0}, io_data_in_bits_5_valid}; // @[systolic_base.scala 411:22]
  wire [9:0] _T_27 = in_addr_5 + _GEN_42; // @[systolic_base.scala 411:22]
  wire [23:0] _GEN_43 = {{14'd0}, _T_27}; // @[systolic_base.scala 411:47]
  wire [9:0] _GEN_45 = {{9'd0}, io_data_in_bits_6_valid}; // @[systolic_base.scala 411:22]
  wire [9:0] _T_32 = in_addr_6 + _GEN_45; // @[systolic_base.scala 411:22]
  wire [23:0] _GEN_46 = {{14'd0}, _T_32}; // @[systolic_base.scala 411:47]
  wire [9:0] _GEN_48 = {{9'd0}, io_data_in_bits_7_valid}; // @[systolic_base.scala 411:22]
  wire [9:0] _T_37 = in_addr_7 + _GEN_48; // @[systolic_base.scala 411:22]
  wire [23:0] _GEN_49 = {{14'd0}, _T_37}; // @[systolic_base.scala 411:47]
  wire [23:0] _T_44 = _T_4 - 24'h1; // @[systolic_base.scala 418:82]
  wire [23:0] _GEN_51 = {{14'd0}, in_addr_7}; // @[systolic_base.scala 418:32]
  wire  _T_46 = _GEN_51 == _T_44 & io_data_in_bits_7_valid; // @[systolic_base.scala 418:87]
  wire [12:0] _T_47 = io_in_inst_bits_id * 8'h80; // @[systolic_base.scala 429:47]
  wire [12:0] _GEN_52 = {{3'd0}, in_addr_0}; // @[systolic_base.scala 429:68]
  wire [12:0] _T_49 = _T_47 + _GEN_52; // @[systolic_base.scala 429:68]
  wire [11:0] _T_51 = out_slot_0 * 8'h80; // @[systolic_base.scala 433:40]
  wire [13:0] _T_52 = out_kh_0 * io_config_ks; // @[systolic_base.scala 433:73]
  wire [13:0] _GEN_53 = {{10'd0}, out_kw_0}; // @[systolic_base.scala 433:86]
  wire [13:0] _T_54 = _T_52 + _GEN_53; // @[systolic_base.scala 433:86]
  wire [17:0] _T_55 = _T_54 * 4'h8; // @[systolic_base.scala 433:97]
  wire [17:0] _GEN_54 = {{6'd0}, _T_51}; // @[systolic_base.scala 433:61]
  wire [17:0] _T_57 = _GEN_54 + _T_55; // @[systolic_base.scala 433:61]
  wire [17:0] _T_59 = _T_57 + 18'h8; // @[systolic_base.scala 433:116]
  wire [17:0] _T_61 = _T_59 - 18'h1; // @[systolic_base.scala 433:136]
  wire [17:0] _GEN_55 = {{8'd0}, out_addr_0}; // @[systolic_base.scala 433:142]
  wire [17:0] _T_63 = _T_61 - _GEN_55; // @[systolic_base.scala 433:142]
  wire [12:0] _GEN_56 = {{3'd0}, in_addr_1}; // @[systolic_base.scala 429:68]
  wire [12:0] _T_66 = _T_47 + _GEN_56; // @[systolic_base.scala 429:68]
  wire [11:0] _T_68 = out_slot_1 * 8'h80; // @[systolic_base.scala 433:40]
  wire [13:0] _T_69 = out_kh_1 * io_config_ks; // @[systolic_base.scala 433:73]
  wire [13:0] _GEN_57 = {{10'd0}, out_kw_1}; // @[systolic_base.scala 433:86]
  wire [13:0] _T_71 = _T_69 + _GEN_57; // @[systolic_base.scala 433:86]
  wire [17:0] _T_72 = _T_71 * 4'h8; // @[systolic_base.scala 433:97]
  wire [17:0] _GEN_58 = {{6'd0}, _T_68}; // @[systolic_base.scala 433:61]
  wire [17:0] _T_74 = _GEN_58 + _T_72; // @[systolic_base.scala 433:61]
  wire [17:0] _T_76 = _T_74 + 18'h8; // @[systolic_base.scala 433:116]
  wire [17:0] _T_78 = _T_76 - 18'h1; // @[systolic_base.scala 433:136]
  wire [17:0] _GEN_59 = {{8'd0}, out_addr_1}; // @[systolic_base.scala 433:142]
  wire [17:0] _T_80 = _T_78 - _GEN_59; // @[systolic_base.scala 433:142]
  wire [12:0] _GEN_60 = {{3'd0}, in_addr_2}; // @[systolic_base.scala 429:68]
  wire [12:0] _T_83 = _T_47 + _GEN_60; // @[systolic_base.scala 429:68]
  wire [11:0] _T_85 = out_slot_2 * 8'h80; // @[systolic_base.scala 433:40]
  wire [13:0] _T_86 = out_kh_2 * io_config_ks; // @[systolic_base.scala 433:73]
  wire [13:0] _GEN_61 = {{10'd0}, out_kw_2}; // @[systolic_base.scala 433:86]
  wire [13:0] _T_88 = _T_86 + _GEN_61; // @[systolic_base.scala 433:86]
  wire [17:0] _T_89 = _T_88 * 4'h8; // @[systolic_base.scala 433:97]
  wire [17:0] _GEN_62 = {{6'd0}, _T_85}; // @[systolic_base.scala 433:61]
  wire [17:0] _T_91 = _GEN_62 + _T_89; // @[systolic_base.scala 433:61]
  wire [17:0] _T_93 = _T_91 + 18'h8; // @[systolic_base.scala 433:116]
  wire [17:0] _T_95 = _T_93 - 18'h1; // @[systolic_base.scala 433:136]
  wire [17:0] _GEN_63 = {{8'd0}, out_addr_2}; // @[systolic_base.scala 433:142]
  wire [17:0] _T_97 = _T_95 - _GEN_63; // @[systolic_base.scala 433:142]
  wire [12:0] _GEN_64 = {{3'd0}, in_addr_3}; // @[systolic_base.scala 429:68]
  wire [12:0] _T_100 = _T_47 + _GEN_64; // @[systolic_base.scala 429:68]
  wire [11:0] _T_102 = out_slot_3 * 8'h80; // @[systolic_base.scala 433:40]
  wire [13:0] _T_103 = out_kh_3 * io_config_ks; // @[systolic_base.scala 433:73]
  wire [13:0] _GEN_65 = {{10'd0}, out_kw_3}; // @[systolic_base.scala 433:86]
  wire [13:0] _T_105 = _T_103 + _GEN_65; // @[systolic_base.scala 433:86]
  wire [17:0] _T_106 = _T_105 * 4'h8; // @[systolic_base.scala 433:97]
  wire [17:0] _GEN_66 = {{6'd0}, _T_102}; // @[systolic_base.scala 433:61]
  wire [17:0] _T_108 = _GEN_66 + _T_106; // @[systolic_base.scala 433:61]
  wire [17:0] _T_110 = _T_108 + 18'h8; // @[systolic_base.scala 433:116]
  wire [17:0] _T_112 = _T_110 - 18'h1; // @[systolic_base.scala 433:136]
  wire [17:0] _GEN_67 = {{8'd0}, out_addr_3}; // @[systolic_base.scala 433:142]
  wire [17:0] _T_114 = _T_112 - _GEN_67; // @[systolic_base.scala 433:142]
  wire [12:0] _GEN_68 = {{3'd0}, in_addr_4}; // @[systolic_base.scala 429:68]
  wire [12:0] _T_117 = _T_47 + _GEN_68; // @[systolic_base.scala 429:68]
  wire [11:0] _T_119 = out_slot_4 * 8'h80; // @[systolic_base.scala 433:40]
  wire [13:0] _T_120 = out_kh_4 * io_config_ks; // @[systolic_base.scala 433:73]
  wire [13:0] _GEN_69 = {{10'd0}, out_kw_4}; // @[systolic_base.scala 433:86]
  wire [13:0] _T_122 = _T_120 + _GEN_69; // @[systolic_base.scala 433:86]
  wire [17:0] _T_123 = _T_122 * 4'h8; // @[systolic_base.scala 433:97]
  wire [17:0] _GEN_70 = {{6'd0}, _T_119}; // @[systolic_base.scala 433:61]
  wire [17:0] _T_125 = _GEN_70 + _T_123; // @[systolic_base.scala 433:61]
  wire [17:0] _T_127 = _T_125 + 18'h8; // @[systolic_base.scala 433:116]
  wire [17:0] _T_129 = _T_127 - 18'h1; // @[systolic_base.scala 433:136]
  wire [17:0] _GEN_71 = {{8'd0}, out_addr_4}; // @[systolic_base.scala 433:142]
  wire [17:0] _T_131 = _T_129 - _GEN_71; // @[systolic_base.scala 433:142]
  wire [12:0] _GEN_72 = {{3'd0}, in_addr_5}; // @[systolic_base.scala 429:68]
  wire [12:0] _T_134 = _T_47 + _GEN_72; // @[systolic_base.scala 429:68]
  wire [11:0] _T_136 = out_slot_5 * 8'h80; // @[systolic_base.scala 433:40]
  wire [13:0] _T_137 = out_kh_5 * io_config_ks; // @[systolic_base.scala 433:73]
  wire [13:0] _GEN_73 = {{10'd0}, out_kw_5}; // @[systolic_base.scala 433:86]
  wire [13:0] _T_139 = _T_137 + _GEN_73; // @[systolic_base.scala 433:86]
  wire [17:0] _T_140 = _T_139 * 4'h8; // @[systolic_base.scala 433:97]
  wire [17:0] _GEN_74 = {{6'd0}, _T_136}; // @[systolic_base.scala 433:61]
  wire [17:0] _T_142 = _GEN_74 + _T_140; // @[systolic_base.scala 433:61]
  wire [17:0] _T_144 = _T_142 + 18'h8; // @[systolic_base.scala 433:116]
  wire [17:0] _T_146 = _T_144 - 18'h1; // @[systolic_base.scala 433:136]
  wire [17:0] _GEN_75 = {{8'd0}, out_addr_5}; // @[systolic_base.scala 433:142]
  wire [17:0] _T_148 = _T_146 - _GEN_75; // @[systolic_base.scala 433:142]
  wire [12:0] _GEN_76 = {{3'd0}, in_addr_6}; // @[systolic_base.scala 429:68]
  wire [12:0] _T_151 = _T_47 + _GEN_76; // @[systolic_base.scala 429:68]
  wire [11:0] _T_153 = out_slot_6 * 8'h80; // @[systolic_base.scala 433:40]
  wire [13:0] _T_154 = out_kh_6 * io_config_ks; // @[systolic_base.scala 433:73]
  wire [13:0] _GEN_77 = {{10'd0}, out_kw_6}; // @[systolic_base.scala 433:86]
  wire [13:0] _T_156 = _T_154 + _GEN_77; // @[systolic_base.scala 433:86]
  wire [17:0] _T_157 = _T_156 * 4'h8; // @[systolic_base.scala 433:97]
  wire [17:0] _GEN_78 = {{6'd0}, _T_153}; // @[systolic_base.scala 433:61]
  wire [17:0] _T_159 = _GEN_78 + _T_157; // @[systolic_base.scala 433:61]
  wire [17:0] _T_161 = _T_159 + 18'h8; // @[systolic_base.scala 433:116]
  wire [17:0] _T_163 = _T_161 - 18'h1; // @[systolic_base.scala 433:136]
  wire [17:0] _GEN_79 = {{8'd0}, out_addr_6}; // @[systolic_base.scala 433:142]
  wire [17:0] _T_165 = _T_163 - _GEN_79; // @[systolic_base.scala 433:142]
  wire [12:0] _GEN_80 = {{3'd0}, in_addr_7}; // @[systolic_base.scala 429:68]
  wire [12:0] _T_168 = _T_47 + _GEN_80; // @[systolic_base.scala 429:68]
  wire [11:0] _T_170 = out_slot_7 * 8'h80; // @[systolic_base.scala 433:40]
  wire [13:0] _T_171 = out_kh_7 * io_config_ks; // @[systolic_base.scala 433:73]
  wire [13:0] _GEN_81 = {{10'd0}, out_kw_7}; // @[systolic_base.scala 433:86]
  wire [13:0] _T_173 = _T_171 + _GEN_81; // @[systolic_base.scala 433:86]
  wire [17:0] _T_174 = _T_173 * 4'h8; // @[systolic_base.scala 433:97]
  wire [17:0] _GEN_82 = {{6'd0}, _T_170}; // @[systolic_base.scala 433:61]
  wire [17:0] _T_176 = _GEN_82 + _T_174; // @[systolic_base.scala 433:61]
  wire [17:0] _T_178 = _T_176 + 18'h8; // @[systolic_base.scala 433:116]
  wire [17:0] _T_180 = _T_178 - 18'h1; // @[systolic_base.scala 433:136]
  wire [17:0] _GEN_83 = {{8'd0}, out_addr_7}; // @[systolic_base.scala 433:142]
  wire [17:0] _T_182 = _T_180 - _GEN_83; // @[systolic_base.scala 433:142]
  wire [9:0] _T_184 = out_addr_0 + 10'h1; // @[systolic_base.scala 437:21]
  wire [3:0] _T_187 = out_kw_0 + 4'h1; // @[systolic_base.scala 441:21]
  wire [9:0] _GEN_84 = {{6'd0}, _T_187}; // @[systolic_base.scala 441:25]
  wire [3:0] _T_190 = out_kh_0 + 4'h1; // @[systolic_base.scala 445:23]
  wire [9:0] _GEN_85 = {{6'd0}, _T_190}; // @[systolic_base.scala 445:27]
  wire [3:0] _GEN_18 = _GEN_85 < io_config_ks ? _T_190 : 4'h0; // @[systolic_base.scala 445:41 446:20 448:20]
  ram_sdp_1024x16 ram_sdp_1024x16 ( // @[systolic_base.scala 385:11]
    .clock(ram_sdp_1024x16_clock),
    .io_wr_en(ram_sdp_1024x16_io_wr_en),
    .io_wr_addr(ram_sdp_1024x16_io_wr_addr),
    .io_wr_data(ram_sdp_1024x16_io_wr_data),
    .io_rd_addr(ram_sdp_1024x16_io_rd_addr),
    .io_rd_data(ram_sdp_1024x16_io_rd_data)
  );
  ram_sdp_1024x16 ram_sdp_1024x16_1 ( // @[systolic_base.scala 385:11]
    .clock(ram_sdp_1024x16_1_clock),
    .io_wr_en(ram_sdp_1024x16_1_io_wr_en),
    .io_wr_addr(ram_sdp_1024x16_1_io_wr_addr),
    .io_wr_data(ram_sdp_1024x16_1_io_wr_data),
    .io_rd_addr(ram_sdp_1024x16_1_io_rd_addr),
    .io_rd_data(ram_sdp_1024x16_1_io_rd_data)
  );
  ram_sdp_1024x16 ram_sdp_1024x16_2 ( // @[systolic_base.scala 385:11]
    .clock(ram_sdp_1024x16_2_clock),
    .io_wr_en(ram_sdp_1024x16_2_io_wr_en),
    .io_wr_addr(ram_sdp_1024x16_2_io_wr_addr),
    .io_wr_data(ram_sdp_1024x16_2_io_wr_data),
    .io_rd_addr(ram_sdp_1024x16_2_io_rd_addr),
    .io_rd_data(ram_sdp_1024x16_2_io_rd_data)
  );
  ram_sdp_1024x16 ram_sdp_1024x16_3 ( // @[systolic_base.scala 385:11]
    .clock(ram_sdp_1024x16_3_clock),
    .io_wr_en(ram_sdp_1024x16_3_io_wr_en),
    .io_wr_addr(ram_sdp_1024x16_3_io_wr_addr),
    .io_wr_data(ram_sdp_1024x16_3_io_wr_data),
    .io_rd_addr(ram_sdp_1024x16_3_io_rd_addr),
    .io_rd_data(ram_sdp_1024x16_3_io_rd_data)
  );
  ram_sdp_1024x16 ram_sdp_1024x16_4 ( // @[systolic_base.scala 385:11]
    .clock(ram_sdp_1024x16_4_clock),
    .io_wr_en(ram_sdp_1024x16_4_io_wr_en),
    .io_wr_addr(ram_sdp_1024x16_4_io_wr_addr),
    .io_wr_data(ram_sdp_1024x16_4_io_wr_data),
    .io_rd_addr(ram_sdp_1024x16_4_io_rd_addr),
    .io_rd_data(ram_sdp_1024x16_4_io_rd_data)
  );
  ram_sdp_1024x16 ram_sdp_1024x16_5 ( // @[systolic_base.scala 385:11]
    .clock(ram_sdp_1024x16_5_clock),
    .io_wr_en(ram_sdp_1024x16_5_io_wr_en),
    .io_wr_addr(ram_sdp_1024x16_5_io_wr_addr),
    .io_wr_data(ram_sdp_1024x16_5_io_wr_data),
    .io_rd_addr(ram_sdp_1024x16_5_io_rd_addr),
    .io_rd_data(ram_sdp_1024x16_5_io_rd_data)
  );
  ram_sdp_1024x16 ram_sdp_1024x16_6 ( // @[systolic_base.scala 385:11]
    .clock(ram_sdp_1024x16_6_clock),
    .io_wr_en(ram_sdp_1024x16_6_io_wr_en),
    .io_wr_addr(ram_sdp_1024x16_6_io_wr_addr),
    .io_wr_data(ram_sdp_1024x16_6_io_wr_data),
    .io_rd_addr(ram_sdp_1024x16_6_io_rd_addr),
    .io_rd_data(ram_sdp_1024x16_6_io_rd_data)
  );
  ram_sdp_1024x16 ram_sdp_1024x16_7 ( // @[systolic_base.scala 385:11]
    .clock(ram_sdp_1024x16_7_clock),
    .io_wr_en(ram_sdp_1024x16_7_io_wr_en),
    .io_wr_addr(ram_sdp_1024x16_7_io_wr_addr),
    .io_wr_data(ram_sdp_1024x16_7_io_wr_data),
    .io_rd_addr(ram_sdp_1024x16_7_io_rd_addr),
    .io_rd_data(ram_sdp_1024x16_7_io_rd_data)
  );
  assign io_in_inst_ready = io_data_in_valid & io_data_in_ready & _T_46; // @[systolic_base.scala 409:45 424:22]
  assign io_out_inst_ready = 1'h1; // @[systolic_base.scala 396:21]
  assign io_data_in_ready = io_in_inst_valid; // @[systolic_base.scala 408:20]
  assign io_data_out_valid = 1'h1; // @[systolic_base.scala 453:21]
  assign io_data_out_bits_0_valid = can_out_1; // @[systolic_base.scala 428:30]
  assign io_data_out_bits_0_bits = ram_sdp_1024x16_io_rd_data; // @[systolic_base.scala 434:30]
  assign io_data_out_bits_1_valid = can_out_2; // @[systolic_base.scala 428:30]
  assign io_data_out_bits_1_bits = ram_sdp_1024x16_1_io_rd_data; // @[systolic_base.scala 434:30]
  assign io_data_out_bits_2_valid = can_out_3; // @[systolic_base.scala 428:30]
  assign io_data_out_bits_2_bits = ram_sdp_1024x16_2_io_rd_data; // @[systolic_base.scala 434:30]
  assign io_data_out_bits_3_valid = can_out_4; // @[systolic_base.scala 428:30]
  assign io_data_out_bits_3_bits = ram_sdp_1024x16_3_io_rd_data; // @[systolic_base.scala 434:30]
  assign io_data_out_bits_4_valid = can_out_5; // @[systolic_base.scala 428:30]
  assign io_data_out_bits_4_bits = ram_sdp_1024x16_4_io_rd_data; // @[systolic_base.scala 434:30]
  assign io_data_out_bits_5_valid = can_out_6; // @[systolic_base.scala 428:30]
  assign io_data_out_bits_5_bits = ram_sdp_1024x16_5_io_rd_data; // @[systolic_base.scala 434:30]
  assign io_data_out_bits_6_valid = can_out_7; // @[systolic_base.scala 428:30]
  assign io_data_out_bits_6_bits = ram_sdp_1024x16_6_io_rd_data; // @[systolic_base.scala 434:30]
  assign io_data_out_bits_7_valid = can_out_8; // @[systolic_base.scala 428:30]
  assign io_data_out_bits_7_bits = ram_sdp_1024x16_7_io_rd_data; // @[systolic_base.scala 434:30]
  assign ram_sdp_1024x16_clock = clock;
  assign ram_sdp_1024x16_io_wr_en = io_data_in_valid & io_data_in_ready; // @[systolic_base.scala 430:43]
  assign ram_sdp_1024x16_io_wr_addr = _T_49[9:0]; // @[systolic_base.scala 429:25]
  assign ram_sdp_1024x16_io_wr_data = io_data_in_bits_0_bits; // @[systolic_base.scala 431:25]
  assign ram_sdp_1024x16_io_rd_addr = _T_63[9:0]; // @[systolic_base.scala 433:25]
  assign ram_sdp_1024x16_1_clock = clock;
  assign ram_sdp_1024x16_1_io_wr_en = io_data_in_valid & io_data_in_ready; // @[systolic_base.scala 430:43]
  assign ram_sdp_1024x16_1_io_wr_addr = _T_66[9:0]; // @[systolic_base.scala 429:25]
  assign ram_sdp_1024x16_1_io_wr_data = io_data_in_bits_1_bits; // @[systolic_base.scala 431:25]
  assign ram_sdp_1024x16_1_io_rd_addr = _T_80[9:0]; // @[systolic_base.scala 433:25]
  assign ram_sdp_1024x16_2_clock = clock;
  assign ram_sdp_1024x16_2_io_wr_en = io_data_in_valid & io_data_in_ready; // @[systolic_base.scala 430:43]
  assign ram_sdp_1024x16_2_io_wr_addr = _T_83[9:0]; // @[systolic_base.scala 429:25]
  assign ram_sdp_1024x16_2_io_wr_data = io_data_in_bits_2_bits; // @[systolic_base.scala 431:25]
  assign ram_sdp_1024x16_2_io_rd_addr = _T_97[9:0]; // @[systolic_base.scala 433:25]
  assign ram_sdp_1024x16_3_clock = clock;
  assign ram_sdp_1024x16_3_io_wr_en = io_data_in_valid & io_data_in_ready; // @[systolic_base.scala 430:43]
  assign ram_sdp_1024x16_3_io_wr_addr = _T_100[9:0]; // @[systolic_base.scala 429:25]
  assign ram_sdp_1024x16_3_io_wr_data = io_data_in_bits_3_bits; // @[systolic_base.scala 431:25]
  assign ram_sdp_1024x16_3_io_rd_addr = _T_114[9:0]; // @[systolic_base.scala 433:25]
  assign ram_sdp_1024x16_4_clock = clock;
  assign ram_sdp_1024x16_4_io_wr_en = io_data_in_valid & io_data_in_ready; // @[systolic_base.scala 430:43]
  assign ram_sdp_1024x16_4_io_wr_addr = _T_117[9:0]; // @[systolic_base.scala 429:25]
  assign ram_sdp_1024x16_4_io_wr_data = io_data_in_bits_4_bits; // @[systolic_base.scala 431:25]
  assign ram_sdp_1024x16_4_io_rd_addr = _T_131[9:0]; // @[systolic_base.scala 433:25]
  assign ram_sdp_1024x16_5_clock = clock;
  assign ram_sdp_1024x16_5_io_wr_en = io_data_in_valid & io_data_in_ready; // @[systolic_base.scala 430:43]
  assign ram_sdp_1024x16_5_io_wr_addr = _T_134[9:0]; // @[systolic_base.scala 429:25]
  assign ram_sdp_1024x16_5_io_wr_data = io_data_in_bits_5_bits; // @[systolic_base.scala 431:25]
  assign ram_sdp_1024x16_5_io_rd_addr = _T_148[9:0]; // @[systolic_base.scala 433:25]
  assign ram_sdp_1024x16_6_clock = clock;
  assign ram_sdp_1024x16_6_io_wr_en = io_data_in_valid & io_data_in_ready; // @[systolic_base.scala 430:43]
  assign ram_sdp_1024x16_6_io_wr_addr = _T_151[9:0]; // @[systolic_base.scala 429:25]
  assign ram_sdp_1024x16_6_io_wr_data = io_data_in_bits_6_bits; // @[systolic_base.scala 431:25]
  assign ram_sdp_1024x16_6_io_rd_addr = _T_165[9:0]; // @[systolic_base.scala 433:25]
  assign ram_sdp_1024x16_7_clock = clock;
  assign ram_sdp_1024x16_7_io_wr_en = io_data_in_valid & io_data_in_ready; // @[systolic_base.scala 430:43]
  assign ram_sdp_1024x16_7_io_wr_addr = _T_168[9:0]; // @[systolic_base.scala 429:25]
  assign ram_sdp_1024x16_7_io_wr_data = io_data_in_bits_7_bits; // @[systolic_base.scala 431:25]
  assign ram_sdp_1024x16_7_io_rd_addr = _T_182[9:0]; // @[systolic_base.scala 433:25]
  always @(posedge clock) begin
    if (reset) begin // @[systolic_base.scala 389:24]
      in_addr_0 <= 10'h0; // @[systolic_base.scala 389:24]
    end else if (io_data_in_valid & io_data_in_ready) begin // @[systolic_base.scala 409:45]
      if (_GEN_28 < _T_4) begin // @[systolic_base.scala 411:96]
        in_addr_0 <= _T_2; // @[systolic_base.scala 412:19]
      end else begin
        in_addr_0 <= 10'h0; // @[systolic_base.scala 414:19]
      end
    end
    if (reset) begin // @[systolic_base.scala 389:24]
      in_addr_1 <= 10'h0; // @[systolic_base.scala 389:24]
    end else if (io_data_in_valid & io_data_in_ready) begin // @[systolic_base.scala 409:45]
      if (_GEN_31 < _T_4) begin // @[systolic_base.scala 411:96]
        in_addr_1 <= _T_7; // @[systolic_base.scala 412:19]
      end else begin
        in_addr_1 <= 10'h0; // @[systolic_base.scala 414:19]
      end
    end
    if (reset) begin // @[systolic_base.scala 389:24]
      in_addr_2 <= 10'h0; // @[systolic_base.scala 389:24]
    end else if (io_data_in_valid & io_data_in_ready) begin // @[systolic_base.scala 409:45]
      if (_GEN_34 < _T_4) begin // @[systolic_base.scala 411:96]
        in_addr_2 <= _T_12; // @[systolic_base.scala 412:19]
      end else begin
        in_addr_2 <= 10'h0; // @[systolic_base.scala 414:19]
      end
    end
    if (reset) begin // @[systolic_base.scala 389:24]
      in_addr_3 <= 10'h0; // @[systolic_base.scala 389:24]
    end else if (io_data_in_valid & io_data_in_ready) begin // @[systolic_base.scala 409:45]
      if (_GEN_37 < _T_4) begin // @[systolic_base.scala 411:96]
        in_addr_3 <= _T_17; // @[systolic_base.scala 412:19]
      end else begin
        in_addr_3 <= 10'h0; // @[systolic_base.scala 414:19]
      end
    end
    if (reset) begin // @[systolic_base.scala 389:24]
      in_addr_4 <= 10'h0; // @[systolic_base.scala 389:24]
    end else if (io_data_in_valid & io_data_in_ready) begin // @[systolic_base.scala 409:45]
      if (_GEN_40 < _T_4) begin // @[systolic_base.scala 411:96]
        in_addr_4 <= _T_22; // @[systolic_base.scala 412:19]
      end else begin
        in_addr_4 <= 10'h0; // @[systolic_base.scala 414:19]
      end
    end
    if (reset) begin // @[systolic_base.scala 389:24]
      in_addr_5 <= 10'h0; // @[systolic_base.scala 389:24]
    end else if (io_data_in_valid & io_data_in_ready) begin // @[systolic_base.scala 409:45]
      if (_GEN_43 < _T_4) begin // @[systolic_base.scala 411:96]
        in_addr_5 <= _T_27; // @[systolic_base.scala 412:19]
      end else begin
        in_addr_5 <= 10'h0; // @[systolic_base.scala 414:19]
      end
    end
    if (reset) begin // @[systolic_base.scala 389:24]
      in_addr_6 <= 10'h0; // @[systolic_base.scala 389:24]
    end else if (io_data_in_valid & io_data_in_ready) begin // @[systolic_base.scala 409:45]
      if (_GEN_46 < _T_4) begin // @[systolic_base.scala 411:96]
        in_addr_6 <= _T_32; // @[systolic_base.scala 412:19]
      end else begin
        in_addr_6 <= 10'h0; // @[systolic_base.scala 414:19]
      end
    end
    if (reset) begin // @[systolic_base.scala 389:24]
      in_addr_7 <= 10'h0; // @[systolic_base.scala 389:24]
    end else if (io_data_in_valid & io_data_in_ready) begin // @[systolic_base.scala 409:45]
      if (_GEN_49 < _T_4) begin // @[systolic_base.scala 411:96]
        in_addr_7 <= _T_37; // @[systolic_base.scala 412:19]
      end else begin
        in_addr_7 <= 10'h0; // @[systolic_base.scala 414:19]
      end
    end
    if (reset) begin // @[systolic_base.scala 390:25]
      out_addr_0 <= 10'h0; // @[systolic_base.scala 390:25]
    end else if (can_out_0) begin // @[systolic_base.scala 436:19]
      if (_T_184 < 10'h8) begin // @[systolic_base.scala 437:44]
        out_addr_0 <= _T_184; // @[systolic_base.scala 438:18]
      end else begin
        out_addr_0 <= 10'h0; // @[systolic_base.scala 440:18]
      end
    end
    if (reset) begin // @[systolic_base.scala 390:25]
      out_addr_1 <= 10'h0; // @[systolic_base.scala 390:25]
    end else begin
      out_addr_1 <= out_addr_0; // @[systolic_base.scala 405:16]
    end
    if (reset) begin // @[systolic_base.scala 390:25]
      out_addr_2 <= 10'h0; // @[systolic_base.scala 390:25]
    end else begin
      out_addr_2 <= out_addr_1; // @[systolic_base.scala 405:16]
    end
    if (reset) begin // @[systolic_base.scala 390:25]
      out_addr_3 <= 10'h0; // @[systolic_base.scala 390:25]
    end else begin
      out_addr_3 <= out_addr_2; // @[systolic_base.scala 405:16]
    end
    if (reset) begin // @[systolic_base.scala 390:25]
      out_addr_4 <= 10'h0; // @[systolic_base.scala 390:25]
    end else begin
      out_addr_4 <= out_addr_3; // @[systolic_base.scala 405:16]
    end
    if (reset) begin // @[systolic_base.scala 390:25]
      out_addr_5 <= 10'h0; // @[systolic_base.scala 390:25]
    end else begin
      out_addr_5 <= out_addr_4; // @[systolic_base.scala 405:16]
    end
    if (reset) begin // @[systolic_base.scala 390:25]
      out_addr_6 <= 10'h0; // @[systolic_base.scala 390:25]
    end else begin
      out_addr_6 <= out_addr_5; // @[systolic_base.scala 405:16]
    end
    if (reset) begin // @[systolic_base.scala 390:25]
      out_addr_7 <= 10'h0; // @[systolic_base.scala 390:25]
    end else begin
      out_addr_7 <= out_addr_6; // @[systolic_base.scala 405:16]
    end
    if (reset) begin // @[systolic_base.scala 391:24]
      can_out_0 <= 1'h0; // @[systolic_base.scala 391:24]
    end else begin
      can_out_0 <= io_out_inst_valid & io_data_out_ready; // @[systolic_base.scala 392:14]
    end
    if (reset) begin // @[systolic_base.scala 391:24]
      can_out_1 <= 1'h0; // @[systolic_base.scala 391:24]
    end else begin
      can_out_1 <= can_out_0; // @[systolic_base.scala 400:18]
    end
    if (reset) begin // @[systolic_base.scala 391:24]
      can_out_2 <= 1'h0; // @[systolic_base.scala 391:24]
    end else begin
      can_out_2 <= can_out_1; // @[systolic_base.scala 400:18]
    end
    if (reset) begin // @[systolic_base.scala 391:24]
      can_out_3 <= 1'h0; // @[systolic_base.scala 391:24]
    end else begin
      can_out_3 <= can_out_2; // @[systolic_base.scala 400:18]
    end
    if (reset) begin // @[systolic_base.scala 391:24]
      can_out_4 <= 1'h0; // @[systolic_base.scala 391:24]
    end else begin
      can_out_4 <= can_out_3; // @[systolic_base.scala 400:18]
    end
    if (reset) begin // @[systolic_base.scala 391:24]
      can_out_5 <= 1'h0; // @[systolic_base.scala 391:24]
    end else begin
      can_out_5 <= can_out_4; // @[systolic_base.scala 400:18]
    end
    if (reset) begin // @[systolic_base.scala 391:24]
      can_out_6 <= 1'h0; // @[systolic_base.scala 391:24]
    end else begin
      can_out_6 <= can_out_5; // @[systolic_base.scala 400:18]
    end
    if (reset) begin // @[systolic_base.scala 391:24]
      can_out_7 <= 1'h0; // @[systolic_base.scala 391:24]
    end else begin
      can_out_7 <= can_out_6; // @[systolic_base.scala 400:18]
    end
    if (reset) begin // @[systolic_base.scala 391:24]
      can_out_8 <= 1'h0; // @[systolic_base.scala 391:24]
    end else begin
      can_out_8 <= can_out_7; // @[systolic_base.scala 400:18]
    end
    if (reset) begin // @[systolic_base.scala 393:23]
      out_kh_0 <= 4'h0; // @[systolic_base.scala 393:23]
    end else if (can_out_0) begin // @[systolic_base.scala 436:19]
      if (!(_T_184 < 10'h8)) begin // @[systolic_base.scala 437:44]
        if (!(_GEN_84 < io_config_ks)) begin // @[systolic_base.scala 441:39]
          out_kh_0 <= _GEN_18;
        end
      end
    end
    if (reset) begin // @[systolic_base.scala 393:23]
      out_kh_1 <= 4'h0; // @[systolic_base.scala 393:23]
    end else begin
      out_kh_1 <= out_kh_0; // @[systolic_base.scala 403:14]
    end
    if (reset) begin // @[systolic_base.scala 393:23]
      out_kh_2 <= 4'h0; // @[systolic_base.scala 393:23]
    end else begin
      out_kh_2 <= out_kh_1; // @[systolic_base.scala 403:14]
    end
    if (reset) begin // @[systolic_base.scala 393:23]
      out_kh_3 <= 4'h0; // @[systolic_base.scala 393:23]
    end else begin
      out_kh_3 <= out_kh_2; // @[systolic_base.scala 403:14]
    end
    if (reset) begin // @[systolic_base.scala 393:23]
      out_kh_4 <= 4'h0; // @[systolic_base.scala 393:23]
    end else begin
      out_kh_4 <= out_kh_3; // @[systolic_base.scala 403:14]
    end
    if (reset) begin // @[systolic_base.scala 393:23]
      out_kh_5 <= 4'h0; // @[systolic_base.scala 393:23]
    end else begin
      out_kh_5 <= out_kh_4; // @[systolic_base.scala 403:14]
    end
    if (reset) begin // @[systolic_base.scala 393:23]
      out_kh_6 <= 4'h0; // @[systolic_base.scala 393:23]
    end else begin
      out_kh_6 <= out_kh_5; // @[systolic_base.scala 403:14]
    end
    if (reset) begin // @[systolic_base.scala 393:23]
      out_kh_7 <= 4'h0; // @[systolic_base.scala 393:23]
    end else begin
      out_kh_7 <= out_kh_6; // @[systolic_base.scala 403:14]
    end
    if (reset) begin // @[systolic_base.scala 394:23]
      out_kw_0 <= 4'h0; // @[systolic_base.scala 394:23]
    end else if (can_out_0) begin // @[systolic_base.scala 436:19]
      if (!(_T_184 < 10'h8)) begin // @[systolic_base.scala 437:44]
        if (_GEN_84 < io_config_ks) begin // @[systolic_base.scala 441:39]
          out_kw_0 <= _T_187; // @[systolic_base.scala 442:18]
        end else begin
          out_kw_0 <= 4'h0; // @[systolic_base.scala 444:18]
        end
      end
    end
    if (reset) begin // @[systolic_base.scala 394:23]
      out_kw_1 <= 4'h0; // @[systolic_base.scala 394:23]
    end else begin
      out_kw_1 <= out_kw_0; // @[systolic_base.scala 404:14]
    end
    if (reset) begin // @[systolic_base.scala 394:23]
      out_kw_2 <= 4'h0; // @[systolic_base.scala 394:23]
    end else begin
      out_kw_2 <= out_kw_1; // @[systolic_base.scala 404:14]
    end
    if (reset) begin // @[systolic_base.scala 394:23]
      out_kw_3 <= 4'h0; // @[systolic_base.scala 394:23]
    end else begin
      out_kw_3 <= out_kw_2; // @[systolic_base.scala 404:14]
    end
    if (reset) begin // @[systolic_base.scala 394:23]
      out_kw_4 <= 4'h0; // @[systolic_base.scala 394:23]
    end else begin
      out_kw_4 <= out_kw_3; // @[systolic_base.scala 404:14]
    end
    if (reset) begin // @[systolic_base.scala 394:23]
      out_kw_5 <= 4'h0; // @[systolic_base.scala 394:23]
    end else begin
      out_kw_5 <= out_kw_4; // @[systolic_base.scala 404:14]
    end
    if (reset) begin // @[systolic_base.scala 394:23]
      out_kw_6 <= 4'h0; // @[systolic_base.scala 394:23]
    end else begin
      out_kw_6 <= out_kw_5; // @[systolic_base.scala 404:14]
    end
    if (reset) begin // @[systolic_base.scala 394:23]
      out_kw_7 <= 4'h0; // @[systolic_base.scala 394:23]
    end else begin
      out_kw_7 <= out_kw_6; // @[systolic_base.scala 404:14]
    end
    if (reset) begin // @[systolic_base.scala 395:25]
      out_slot_0 <= 4'h0; // @[systolic_base.scala 395:25]
    end else begin
      out_slot_0 <= io_out_inst_bits_id[3:0]; // @[systolic_base.scala 397:15]
    end
    if (reset) begin // @[systolic_base.scala 395:25]
      out_slot_1 <= 4'h0; // @[systolic_base.scala 395:25]
    end else begin
      out_slot_1 <= out_slot_0; // @[systolic_base.scala 406:16]
    end
    if (reset) begin // @[systolic_base.scala 395:25]
      out_slot_2 <= 4'h0; // @[systolic_base.scala 395:25]
    end else begin
      out_slot_2 <= out_slot_1; // @[systolic_base.scala 406:16]
    end
    if (reset) begin // @[systolic_base.scala 395:25]
      out_slot_3 <= 4'h0; // @[systolic_base.scala 395:25]
    end else begin
      out_slot_3 <= out_slot_2; // @[systolic_base.scala 406:16]
    end
    if (reset) begin // @[systolic_base.scala 395:25]
      out_slot_4 <= 4'h0; // @[systolic_base.scala 395:25]
    end else begin
      out_slot_4 <= out_slot_3; // @[systolic_base.scala 406:16]
    end
    if (reset) begin // @[systolic_base.scala 395:25]
      out_slot_5 <= 4'h0; // @[systolic_base.scala 395:25]
    end else begin
      out_slot_5 <= out_slot_4; // @[systolic_base.scala 406:16]
    end
    if (reset) begin // @[systolic_base.scala 395:25]
      out_slot_6 <= 4'h0; // @[systolic_base.scala 395:25]
    end else begin
      out_slot_6 <= out_slot_5; // @[systolic_base.scala 406:16]
    end
    if (reset) begin // @[systolic_base.scala 395:25]
      out_slot_7 <= 4'h0; // @[systolic_base.scala 395:25]
    end else begin
      out_slot_7 <= out_slot_6; // @[systolic_base.scala 406:16]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  in_addr_0 = _RAND_0[9:0];
  _RAND_1 = {1{`RANDOM}};
  in_addr_1 = _RAND_1[9:0];
  _RAND_2 = {1{`RANDOM}};
  in_addr_2 = _RAND_2[9:0];
  _RAND_3 = {1{`RANDOM}};
  in_addr_3 = _RAND_3[9:0];
  _RAND_4 = {1{`RANDOM}};
  in_addr_4 = _RAND_4[9:0];
  _RAND_5 = {1{`RANDOM}};
  in_addr_5 = _RAND_5[9:0];
  _RAND_6 = {1{`RANDOM}};
  in_addr_6 = _RAND_6[9:0];
  _RAND_7 = {1{`RANDOM}};
  in_addr_7 = _RAND_7[9:0];
  _RAND_8 = {1{`RANDOM}};
  out_addr_0 = _RAND_8[9:0];
  _RAND_9 = {1{`RANDOM}};
  out_addr_1 = _RAND_9[9:0];
  _RAND_10 = {1{`RANDOM}};
  out_addr_2 = _RAND_10[9:0];
  _RAND_11 = {1{`RANDOM}};
  out_addr_3 = _RAND_11[9:0];
  _RAND_12 = {1{`RANDOM}};
  out_addr_4 = _RAND_12[9:0];
  _RAND_13 = {1{`RANDOM}};
  out_addr_5 = _RAND_13[9:0];
  _RAND_14 = {1{`RANDOM}};
  out_addr_6 = _RAND_14[9:0];
  _RAND_15 = {1{`RANDOM}};
  out_addr_7 = _RAND_15[9:0];
  _RAND_16 = {1{`RANDOM}};
  can_out_0 = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  can_out_1 = _RAND_17[0:0];
  _RAND_18 = {1{`RANDOM}};
  can_out_2 = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  can_out_3 = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  can_out_4 = _RAND_20[0:0];
  _RAND_21 = {1{`RANDOM}};
  can_out_5 = _RAND_21[0:0];
  _RAND_22 = {1{`RANDOM}};
  can_out_6 = _RAND_22[0:0];
  _RAND_23 = {1{`RANDOM}};
  can_out_7 = _RAND_23[0:0];
  _RAND_24 = {1{`RANDOM}};
  can_out_8 = _RAND_24[0:0];
  _RAND_25 = {1{`RANDOM}};
  out_kh_0 = _RAND_25[3:0];
  _RAND_26 = {1{`RANDOM}};
  out_kh_1 = _RAND_26[3:0];
  _RAND_27 = {1{`RANDOM}};
  out_kh_2 = _RAND_27[3:0];
  _RAND_28 = {1{`RANDOM}};
  out_kh_3 = _RAND_28[3:0];
  _RAND_29 = {1{`RANDOM}};
  out_kh_4 = _RAND_29[3:0];
  _RAND_30 = {1{`RANDOM}};
  out_kh_5 = _RAND_30[3:0];
  _RAND_31 = {1{`RANDOM}};
  out_kh_6 = _RAND_31[3:0];
  _RAND_32 = {1{`RANDOM}};
  out_kh_7 = _RAND_32[3:0];
  _RAND_33 = {1{`RANDOM}};
  out_kw_0 = _RAND_33[3:0];
  _RAND_34 = {1{`RANDOM}};
  out_kw_1 = _RAND_34[3:0];
  _RAND_35 = {1{`RANDOM}};
  out_kw_2 = _RAND_35[3:0];
  _RAND_36 = {1{`RANDOM}};
  out_kw_3 = _RAND_36[3:0];
  _RAND_37 = {1{`RANDOM}};
  out_kw_4 = _RAND_37[3:0];
  _RAND_38 = {1{`RANDOM}};
  out_kw_5 = _RAND_38[3:0];
  _RAND_39 = {1{`RANDOM}};
  out_kw_6 = _RAND_39[3:0];
  _RAND_40 = {1{`RANDOM}};
  out_kw_7 = _RAND_40[3:0];
  _RAND_41 = {1{`RANDOM}};
  out_slot_0 = _RAND_41[3:0];
  _RAND_42 = {1{`RANDOM}};
  out_slot_1 = _RAND_42[3:0];
  _RAND_43 = {1{`RANDOM}};
  out_slot_2 = _RAND_43[3:0];
  _RAND_44 = {1{`RANDOM}};
  out_slot_3 = _RAND_44[3:0];
  _RAND_45 = {1{`RANDOM}};
  out_slot_4 = _RAND_45[3:0];
  _RAND_46 = {1{`RANDOM}};
  out_slot_5 = _RAND_46[3:0];
  _RAND_47 = {1{`RANDOM}};
  out_slot_6 = _RAND_47[3:0];
  _RAND_48 = {1{`RANDOM}};
  out_slot_7 = _RAND_48[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
