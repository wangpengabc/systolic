module ClipSqueezeWrapDemo(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [6:0] counter; // @[IntervalSpec.scala 192:24]
  wire [7:0] _GEN_0 = $signed(counter) + 7'sh1; // @[IntervalSpec.scala 194:{23,23}]
  wire [6:0] _counter_T_1 = _GEN_0[6:0]; // @[IntervalSpec.scala 194:{43,43}]
  wire  _T = $signed(counter) > 7'sh1e; // @[IntervalSpec.scala 195:16]
  wire  _T_2 = ~reset; // @[IntervalSpec.scala 196:9]
  wire [6:0] _GEN_3 = $signed(counter) > 7'sh11 ? $signed(7'sh11) : $signed($signed(counter) < -7'sh4 ? $signed(-7'sh4)
     : $signed(counter)); // @[IntervalSpec.scala 199:{29,29}]
  wire [5:0] clipped = _GEN_3[5:0]; // @[IntervalSpec.scala 199:{29,29}]
  wire [5:0] squeezed = counter[5:0]; // @[IntervalSpec.scala 200:{33,33}]
  wire [7:0] _GEN_6 = $signed(counter) > 7'sh11 ? $signed($signed(counter) - 7'sh16) : $signed($signed(counter) < -7'sh4
     ? $signed($signed(counter) + 7'sh16) : $signed({{1{counter[6]}},counter})); // @[IntervalSpec.scala 201:{29,29}]
  wire [5:0] wrapped = _GEN_6[5:0]; // @[IntervalSpec.scala 201:{29,29}]
  wire  _T_3 = $signed(counter) == -7'sh4; // @[IntervalSpec.scala 203:16]
  always @(posedge clock) begin
    if (reset) begin // @[IntervalSpec.scala 192:24]
      counter <= -7'sh4; // @[IntervalSpec.scala 192:24]
    end else begin
      counter <= _counter_T_1; // @[IntervalSpec.scala 194:11]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~reset) begin
          $finish; // @[IntervalSpec.scala 196:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_3 & _T_2) begin
          $fwrite(32'h80000002,"Target range is range\"[-10,33].0\"\n"); // @[IntervalSpec.scala 204:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_3 & _T_2) begin
          $fwrite(32'h80000002,"value     clip      squeeze      wrap\n"); // @[IntervalSpec.scala 205:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2) begin
          $fwrite(32'h80000002,"       %d       %d          %d         %d\n",counter,clipped,squeezed,wrapped); // @[IntervalSpec.scala 208:9]
        end
    `ifdef PRINTF_COND
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
  counter = _RAND_0[6:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
