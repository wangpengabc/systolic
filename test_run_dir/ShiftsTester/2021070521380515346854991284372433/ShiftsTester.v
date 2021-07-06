module ShiftsTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] cntVal; // @[Counter.scala 60:40]
  wire [1:0] _wrap_value_T_1 = cntVal + 2'h1; // @[Counter.scala 76:24]
  wire [4:0] _GEN_6 = {{3'd0}, cntVal}; // @[Reg.scala 77:35]
  reg [4:0] srs_0; // @[Reg.scala 15:16]
  reg [4:0] srs_1; // @[Reg.scala 15:16]
  reg [4:0] srs_2; // @[Reg.scala 15:16]
  reg [4:0] srs_3; // @[Reg.scala 15:16]
  reg  REG; // @[Reg.scala 78:15]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 60:40]
      cntVal <= 2'h0; // @[Counter.scala 60:40]
    end else begin
      cntVal <= _wrap_value_T_1;
    end
    srs_0 <= _GEN_6 + 5'h17; // @[Reg.scala 77:35]
    srs_1 <= srs_0; // @[Reg.scala 15:16 16:{19,23}]
    srs_2 <= srs_1; // @[Reg.scala 15:16 16:{19,23}]
    srs_3 <= srs_2; // @[Reg.scala 15:16 16:{19,23}]
    REG <= cntVal == 2'h3; // @[Counter.scala 72:24]
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (REG & ~(srs_0 == 5'h1a | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Reg.scala:80 assert(data === (23 + n - 1 - index).U)\n"); // @[Reg.scala 80:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (REG & ~(srs_0 == 5'h1a | reset)) begin
          $fatal; // @[Reg.scala 80:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (REG & ~(srs_1 == 5'h19 | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Reg.scala:80 assert(data === (23 + n - 1 - index).U)\n"); // @[Reg.scala 80:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (REG & ~(srs_1 == 5'h19 | reset)) begin
          $fatal; // @[Reg.scala 80:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (REG & ~(srs_2 == 5'h18 | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Reg.scala:80 assert(data === (23 + n - 1 - index).U)\n"); // @[Reg.scala 80:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (REG & ~(srs_2 == 5'h18 | reset)) begin
          $fatal; // @[Reg.scala 80:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (REG & ~(srs_3 == 5'h17 | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at Reg.scala:80 assert(data === (23 + n - 1 - index).U)\n"); // @[Reg.scala 80:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (REG & ~(srs_3 == 5'h17 | reset)) begin
          $fatal; // @[Reg.scala 80:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (REG & ~reset) begin
          $finish; // @[Reg.scala 82:9]
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
  cntVal = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  srs_0 = _RAND_1[4:0];
  _RAND_2 = {1{`RANDOM}};
  srs_1 = _RAND_2[4:0];
  _RAND_3 = {1{`RANDOM}};
  srs_2 = _RAND_3[4:0];
  _RAND_4 = {1{`RANDOM}};
  srs_3 = _RAND_4[4:0];
  _RAND_5 = {1{`RANDOM}};
  REG = _RAND_5[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
