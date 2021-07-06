module PopCountTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] x; // @[PopCount.scala 10:18]
  wire [2:0] _x_T_1 = x + 3'h1; // @[PopCount.scala 11:10]
  reg  REG; // @[PopCount.scala 12:16]
  wire [1:0] _result_T_3 = x[1] + x[2]; // @[Bitwise.scala 47:55]
  wire [1:0] _GEN_0 = {{1'd0}, x[0]}; // @[Bitwise.scala 47:55]
  wire [2:0] _result_T_5 = _GEN_0 + _result_T_3; // @[Bitwise.scala 47:55]
  wire [1:0] result = _result_T_5[1:0]; // @[Bitwise.scala 47:55]
  wire [1:0] _GEN_1 = {{1'd0}, x[1]}; // @[PopCount.scala 15:44]
  wire [2:0] _expected_T_4 = _GEN_0 + _GEN_1; // @[PopCount.scala 15:44]
  wire [2:0] _GEN_2 = {{2'd0}, x[2]}; // @[PopCount.scala 15:44]
  wire [3:0] expected = _expected_T_4 + _GEN_2; // @[PopCount.scala 15:44]
  wire [3:0] _GEN_3 = {{2'd0}, result}; // @[PopCount.scala 16:17]
  always @(posedge clock) begin
    if (reset) begin // @[PopCount.scala 10:18]
      x <= 3'h0; // @[PopCount.scala 10:18]
    end else begin
      x <= _x_T_1; // @[PopCount.scala 11:5]
    end
    REG <= x == 3'h7; // @[PopCount.scala 12:19]
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (REG & ~reset) begin
          $finish; // @[PopCount.scala 12:41]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(_GEN_3 == expected | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at PopCount.scala:16 assert(result === expected)\n"); // @[PopCount.scala 16:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(_GEN_3 == expected | reset)) begin
          $fatal; // @[PopCount.scala 16:9]
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
  x = _RAND_0[2:0];
  _RAND_1 = {1{`RANDOM}};
  REG = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
