module BlackBoxWithClockTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire  blackBox_clock; // @[BlackBox.scala 107:24]
  wire  blackBox_in; // @[BlackBox.scala 107:24]
  wire  blackBox_out; // @[BlackBox.scala 107:24]
  reg  model; // @[BlackBox.scala 108:18]
  reg [3:0] cycles; // @[Counter.scala 60:40]
  wire  wrap_wrap = cycles == 4'he; // @[Counter.scala 72:24]
  wire [3:0] _wrap_value_T_1 = cycles + 4'h1; // @[Counter.scala 76:24]
  wire  _T = cycles > 4'h0; // @[BlackBox.scala 117:15]
  BlackBoxRegister blackBox ( // @[BlackBox.scala 107:24]
    .clock(blackBox_clock),
    .in(blackBox_in),
    .out(blackBox_out)
  );
  assign blackBox_clock = clock; // @[BlackBox.scala 113:21]
  assign blackBox_in = cycles[0]; // @[BlackBox.scala 112:23]
  always @(posedge clock) begin
    model <= cycles[0]; // @[BlackBox.scala 112:23]
    if (reset) begin // @[Counter.scala 60:40]
      cycles <= 4'h0; // @[Counter.scala 60:40]
    end else if (wrap_wrap) begin // @[Counter.scala 86:20]
      cycles <= 4'h0; // @[Counter.scala 86:28]
    end else begin
      cycles <= _wrap_value_T_1; // @[Counter.scala 76:15]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T & ~(blackBox_out == model | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at BlackBox.scala:118 assert(blackBox.io.out === model)\n"); // @[BlackBox.scala 118:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~(blackBox_out == model | reset)) begin
          $fatal; // @[BlackBox.scala 118:11]
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
          $finish; // @[BlackBox.scala 120:19]
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
  model = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  cycles = _RAND_1[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
