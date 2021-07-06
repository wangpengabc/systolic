module SelectTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] counter; // @[SelectSpec.scala 18:24]
  wire [2:0] added = counter + 3'h1; // @[SelectSpec.scala 19:23]
  wire  overflow = counter >= 3'h3; // @[SelectSpec.scala 21:26]
  wire  nreset = ~reset; // @[SelectSpec.scala 22:31]
  wire [1:0] _GEN_1 = 2'h1 == counter[1:0] ? 2'h1 : 2'h0; // @[SelectSpec.scala 30:{22,22}]
  wire [1:0] _GEN_2 = 2'h2 == counter[1:0] ? 2'h2 : _GEN_1; // @[SelectSpec.scala 30:{22,22}]
  wire [2:0] _GEN_7 = {{1'd0}, _GEN_2}; // @[SelectSpec.scala 30:22]
  wire  _GEN_9 = ~overflow & nreset; // @[SelectSpec.scala 30:13]
  always @(posedge clock) begin
    if (reset) begin // @[SelectSpec.scala 18:24]
      counter <= 3'h0; // @[SelectSpec.scala 18:24]
    end else if (overflow) begin // @[SelectSpec.scala 25:18]
      counter <= 3'h0; // @[SelectSpec.scala 26:13]
    end else begin
      counter <= added; // @[SelectSpec.scala 20:11]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (overflow & nreset) begin
          $finish; // @[SelectSpec.scala 27:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~overflow & nreset & ~(counter == _GEN_7 | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at SelectSpec.scala:30 assert(counter === values(counter))\n"); // @[SelectSpec.scala 30:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~overflow & nreset & ~(counter == _GEN_7 | reset)) begin
          $fatal; // @[SelectSpec.scala 30:13]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_9 & nreset) begin
          $fwrite(32'h80000002,"values(%d) = %d\n",counter,_GEN_2); // @[SelectSpec.scala 31:13]
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
  counter = _RAND_0[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
