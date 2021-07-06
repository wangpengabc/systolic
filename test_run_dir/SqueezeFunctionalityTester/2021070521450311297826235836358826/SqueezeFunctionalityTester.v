module SqueezeFunctionalityTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [9:0] counter; // @[IntervalSpec.scala 223:24]
  wire [9:0] _counter_T_1 = counter + 10'h1; // @[IntervalSpec.scala 224:22]
  wire  _T = counter > 10'ha; // @[IntervalSpec.scala 225:16]
  wire  _T_2 = ~reset; // @[IntervalSpec.scala 226:9]
  wire [9:0] _GEN_0 = counter; // @[IntervalSpec.scala 236:{37,37}]
  wire [3:0] _toSqueeze_T = _GEN_0[3:0]; // @[IntervalSpec.scala 236:{37,37}]
  wire [4:0] _GEN_2 = $signed(_toSqueeze_T) - 4'sh6; // @[IntervalSpec.scala 236:{45,45}]
  wire [3:0] toSqueeze = _GEN_2[3:0]; // @[IntervalSpec.scala 236:{45,45}]
  wire [3:0] squeezeTemplate = _GEN_2[3:0]; // @[IntervalSpec.scala 238:{39,39}]
  always @(posedge clock) begin
    if (reset) begin // @[IntervalSpec.scala 223:24]
      counter <= 10'h0; // @[IntervalSpec.scala 223:24]
    end else begin
      counter <= _counter_T_1; // @[IntervalSpec.scala 224:11]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~reset) begin
          $finish; // @[IntervalSpec.scala 226:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2) begin
          $fwrite(32'h80000002,"SqueezeTest %d    %d.squeeze(range\"[-2,5].0\") => %d\n",counter,toSqueeze,
            squeezeTemplate); // @[IntervalSpec.scala 240:9]
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
  counter = _RAND_0[9:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
