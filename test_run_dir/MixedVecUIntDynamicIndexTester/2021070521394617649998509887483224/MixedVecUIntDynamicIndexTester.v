module MixedVecUIntDynamicIndexTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] cycle; // @[Counter.scala 60:40]
  wire  wrap_wrap = cycle == 2'h3; // @[Counter.scala 72:24]
  wire [1:0] _wrap_value_T_1 = cycle + 2'h1; // @[Counter.scala 76:24]
  wire [15:0] _GEN_3 = 2'h1 == cycle ? 16'h1 : 16'h0; // @[MixedVecSpec.scala 88:{25,25}]
  wire [15:0] _GEN_4 = 2'h2 == cycle ? 16'h2 : _GEN_3; // @[MixedVecSpec.scala 88:{25,25}]
  wire [15:0] _GEN_5 = 2'h3 == cycle ? 16'h3 : _GEN_4; // @[MixedVecSpec.scala 88:{25,25}]
  wire [15:0] _GEN_6 = {{14'd0}, cycle}; // @[MixedVecSpec.scala 88:25]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 60:40]
      cycle <= 2'h0; // @[Counter.scala 60:40]
    end else begin
      cycle <= _wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(_GEN_5 == _GEN_6 | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at MixedVecSpec.scala:88 assert(vecWire(cycle) === cycle)\n"); // @[MixedVecSpec.scala 88:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(_GEN_5 == _GEN_6 | reset)) begin
          $fatal; // @[MixedVecSpec.scala 88:9]
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
          $finish; // @[MixedVecSpec.scala 90:21]
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
  cycle = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
