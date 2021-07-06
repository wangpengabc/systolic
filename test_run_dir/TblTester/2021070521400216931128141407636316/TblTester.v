module Tbl(
  input        clock,
  input  [2:0] io_wi,
  input  [2:0] io_ri,
  input  [2:0] io_d,
  output [2:0] io_o
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [2:0] m [0:7]; // @[Tbl.scala 17:14]
  wire  m_io_o_MPORT_en; // @[Tbl.scala 17:14]
  wire [2:0] m_io_o_MPORT_addr; // @[Tbl.scala 17:14]
  wire [2:0] m_io_o_MPORT_data; // @[Tbl.scala 17:14]
  wire [2:0] m_MPORT_data; // @[Tbl.scala 17:14]
  wire [2:0] m_MPORT_addr; // @[Tbl.scala 17:14]
  wire  m_MPORT_mask; // @[Tbl.scala 17:14]
  wire  m_MPORT_en; // @[Tbl.scala 17:14]
  assign m_io_o_MPORT_en = 1'h1;
  assign m_io_o_MPORT_addr = io_ri;
  assign m_io_o_MPORT_data = m[m_io_o_MPORT_addr]; // @[Tbl.scala 17:14]
  assign m_MPORT_data = io_d;
  assign m_MPORT_addr = io_wi;
  assign m_MPORT_mask = 1'h1;
  assign m_MPORT_en = 1'h1;
  assign io_o = io_ri == io_wi ? io_d : m_io_o_MPORT_data; // @[Tbl.scala 21:27 22:12 18:8]
  always @(posedge clock) begin
    if (m_MPORT_en & m_MPORT_mask) begin
      m[m_MPORT_addr] <= m_MPORT_data; // @[Tbl.scala 17:14]
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
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8; initvar = initvar+1)
    m[initvar] = _RAND_0[2:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module TblTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  dut_clock; // @[Tbl.scala 29:19]
  wire [2:0] dut_io_wi; // @[Tbl.scala 29:19]
  wire [2:0] dut_io_ri; // @[Tbl.scala 29:19]
  wire [2:0] dut_io_d; // @[Tbl.scala 29:19]
  wire [2:0] dut_io_o; // @[Tbl.scala 29:19]
  reg [2:0] cnt; // @[Counter.scala 60:40]
  wire  wrap_wrap = cnt == 3'h7; // @[Counter.scala 72:24]
  wire [2:0] _wrap_value_T_1 = cnt + 3'h1; // @[Counter.scala 76:24]
  wire [2:0] _prev_idx_T_1 = cnt - 3'h1; // @[Tbl.scala 32:28]
  wire [2:0] _GEN_3 = 3'h1 == cnt ? 3'h6 : 3'h5; // @[Tbl.scala 34:{13,13}]
  wire [2:0] _GEN_4 = 3'h2 == cnt ? 3'h5 : _GEN_3; // @[Tbl.scala 34:{13,13}]
  wire [2:0] _GEN_5 = 3'h3 == cnt ? 3'h0 : _GEN_4; // @[Tbl.scala 34:{13,13}]
  wire [2:0] _GEN_6 = 3'h4 == cnt ? 3'h2 : _GEN_5; // @[Tbl.scala 34:{13,13}]
  wire [2:0] _GEN_7 = 3'h5 == cnt ? 3'h0 : _GEN_6; // @[Tbl.scala 34:{13,13}]
  wire [2:0] _GEN_8 = 3'h6 == cnt ? 3'h6 : _GEN_7; // @[Tbl.scala 34:{13,13}]
  wire [2:0] _GEN_9 = 3'h7 == cnt ? 3'h1 : _GEN_8; // @[Tbl.scala 34:{13,13}]
  wire [2:0] _GEN_11 = 3'h1 == _prev_idx_T_1 ? 3'h6 : 3'h5; // @[Tbl.scala 35:{13,13}]
  wire [2:0] _GEN_12 = 3'h2 == _prev_idx_T_1 ? 3'h5 : _GEN_11; // @[Tbl.scala 35:{13,13}]
  wire [2:0] _GEN_13 = 3'h3 == _prev_idx_T_1 ? 3'h0 : _GEN_12; // @[Tbl.scala 35:{13,13}]
  wire [2:0] _GEN_14 = 3'h4 == _prev_idx_T_1 ? 3'h2 : _GEN_13; // @[Tbl.scala 35:{13,13}]
  wire [2:0] _GEN_15 = 3'h5 == _prev_idx_T_1 ? 3'h0 : _GEN_14; // @[Tbl.scala 35:{13,13}]
  wire [2:0] _GEN_16 = 3'h6 == _prev_idx_T_1 ? 3'h6 : _GEN_15; // @[Tbl.scala 35:{13,13}]
  wire [2:0] _GEN_17 = 3'h7 == _prev_idx_T_1 ? 3'h1 : _GEN_16; // @[Tbl.scala 35:{13,13}]
  wire [2:0] _GEN_20 = 3'h2 == cnt ? 3'h0 : 3'h3; // @[Tbl.scala 37:{12,12}]
  wire [2:0] _GEN_21 = 3'h3 == cnt ? 3'h2 : _GEN_20; // @[Tbl.scala 37:{12,12}]
  wire [2:0] _GEN_22 = 3'h4 == cnt ? 3'h5 : _GEN_21; // @[Tbl.scala 37:{12,12}]
  wire [2:0] _GEN_23 = 3'h5 == cnt ? 3'h1 : _GEN_22; // @[Tbl.scala 37:{12,12}]
  wire [2:0] _GEN_24 = 3'h6 == cnt ? 3'h6 : _GEN_23; // @[Tbl.scala 37:{12,12}]
  wire [2:0] _GEN_25 = 3'h7 == cnt ? 3'h7 : _GEN_24; // @[Tbl.scala 37:{12,12}]
  wire  _T = cnt > 3'h0; // @[Tbl.scala 38:13]
  wire  _T_1 = _GEN_17 == _GEN_9; // @[Tbl.scala 39:20]
  wire [2:0] _GEN_28 = 3'h2 == _prev_idx_T_1 ? 3'h0 : 3'h3; // @[Tbl.scala 42:{23,23}]
  wire [2:0] _GEN_29 = 3'h3 == _prev_idx_T_1 ? 3'h2 : _GEN_28; // @[Tbl.scala 42:{23,23}]
  wire [2:0] _GEN_30 = 3'h4 == _prev_idx_T_1 ? 3'h5 : _GEN_29; // @[Tbl.scala 42:{23,23}]
  wire [2:0] _GEN_31 = 3'h5 == _prev_idx_T_1 ? 3'h1 : _GEN_30; // @[Tbl.scala 42:{23,23}]
  wire [2:0] _GEN_32 = 3'h6 == _prev_idx_T_1 ? 3'h6 : _GEN_31; // @[Tbl.scala 42:{23,23}]
  wire [2:0] _GEN_33 = 3'h7 == _prev_idx_T_1 ? 3'h7 : _GEN_32; // @[Tbl.scala 42:{23,23}]
  Tbl dut ( // @[Tbl.scala 29:19]
    .clock(dut_clock),
    .io_wi(dut_io_wi),
    .io_ri(dut_io_ri),
    .io_d(dut_io_d),
    .io_o(dut_io_o)
  );
  assign dut_clock = clock;
  assign dut_io_wi = 3'h7 == cnt ? 3'h1 : _GEN_8; // @[Tbl.scala 34:{13,13}]
  assign dut_io_ri = 3'h7 == _prev_idx_T_1 ? 3'h1 : _GEN_16; // @[Tbl.scala 35:{13,13}]
  assign dut_io_d = 3'h7 == cnt ? 3'h7 : _GEN_24; // @[Tbl.scala 37:{12,12}]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 60:40]
      cnt <= 3'h0; // @[Counter.scala 60:40]
    end else begin
      cnt <= _wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T & _T_1 & ~(dut_io_o == _GEN_25 | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Tbl.scala:40 assert(dut.io.o === vvalues(cnt))\n"); // @[Tbl.scala 40:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & _T_1 & ~(dut_io_o == _GEN_25 | reset)) begin
          $fatal; // @[Tbl.scala 40:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T & ~_T_1 & ~(dut_io_o == _GEN_33 | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Tbl.scala:42 assert(dut.io.o === prev_value)\n"); // @[Tbl.scala 42:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~_T_1 & ~(dut_io_o == _GEN_33 | reset)) begin
          $fatal; // @[Tbl.scala 42:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & ~reset) begin
          $finish; // @[Tbl.scala 46:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
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
  cnt = _RAND_0[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
