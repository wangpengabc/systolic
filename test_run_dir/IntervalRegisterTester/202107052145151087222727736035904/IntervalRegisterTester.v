module IntervalRegisterTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [3:0] counter; // @[IntervalSpec.scala 254:24]
  wire [4:0] _GEN_0 = $signed(counter) + 4'sh1; // @[IntervalSpec.scala 255:{23,23}]
  wire [3:0] _counter_T_1 = _GEN_0[3:0]; // @[IntervalSpec.scala 256:{13,13}]
  wire  _T = $signed(counter) > 4'sh4; // @[IntervalSpec.scala 257:16]
  always @(posedge clock) begin
    if (reset) begin // @[IntervalSpec.scala 254:24]
      counter <= -4'sh1; // @[IntervalSpec.scala 254:24]
    end else begin
      counter <= _counter_T_1; // @[IntervalSpec.scala 255:11]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~reset) begin
          $finish; // @[IntervalSpec.scala 258:9]
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
  counter = _RAND_0[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
