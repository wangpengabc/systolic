module GCD(
  input         clock,
  input         io_e,
  output [31:0] io_z,
  output        io_v
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] x; // @[GCD.scala 17:14]
  reg [31:0] y; // @[GCD.scala 18:14]
  wire [31:0] _x_T_1 = x - y; // @[GCD.scala 19:27]
  wire [31:0] _y_T_1 = y - x; // @[GCD.scala 20:27]
  assign io_z = x; // @[GCD.scala 22:8]
  assign io_v = y == 32'h0; // @[GCD.scala 23:13]
  always @(posedge clock) begin
    if (io_e) begin // @[GCD.scala 21:15]
      x <= 32'hc; // @[GCD.scala 21:19]
    end else if (x > y) begin // @[GCD.scala 19:18]
      x <= _x_T_1; // @[GCD.scala 19:22]
    end
    if (io_e) begin // @[GCD.scala 21:15]
      y <= 32'h9; // @[GCD.scala 21:30]
    end else if (!(x > y)) begin // @[GCD.scala 19:18]
      y <= _y_T_1; // @[GCD.scala 20:22]
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
  x = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  y = _RAND_1[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module GCDTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  dut_clock; // @[GCD.scala 27:19]
  wire  dut_io_e; // @[GCD.scala 27:19]
  wire [31:0] dut_io_z; // @[GCD.scala 27:19]
  wire  dut_io_v; // @[GCD.scala 27:19]
  reg  first; // @[GCD.scala 28:22]
  wire  _GEN_0 = first ? 1'h0 : first; // @[GCD.scala 32:15 28:22 32:23]
  wire  _T_1 = ~first & dut_io_v; // @[GCD.scala 33:15]
  GCD dut ( // @[GCD.scala 27:19]
    .clock(dut_clock),
    .io_e(dut_io_e),
    .io_z(dut_io_z),
    .io_v(dut_io_v)
  );
  assign dut_clock = clock;
  assign dut_io_e = first; // @[GCD.scala 31:12]
  always @(posedge clock) begin
    first <= reset | _GEN_0; // @[GCD.scala 28:{22,22}]
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(dut_io_z == 32'h3 | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at GCD.scala:34 assert(dut.io.z === z.U)\n"); // @[GCD.scala 34:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(dut_io_z == 32'h3 | reset)) begin
          $fatal; // @[GCD.scala 34:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~reset) begin
          $finish; // @[GCD.scala 35:9]
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
  first = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
