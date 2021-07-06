module AspectTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] counter; // @[InjectionSpec.scala 51:26]
  wire [2:0] _counter_T_1 = counter + 3'h1; // @[InjectionSpec.scala 52:24]
  wire  _T = counter >= 3'h3; // @[InjectionSpec.scala 53:18]
  wire  _T_2 = ~reset; // @[InjectionSpec.scala 54:11]
  wire [1:0] _GEN_1 = 2'h1 == counter[1:0] ? 2'h1 : 2'h0; // @[InjectionSpec.scala 57:{24,24}]
  wire [1:0] _GEN_2 = 2'h2 == counter[1:0] ? 2'h2 : _GEN_1; // @[InjectionSpec.scala 57:{24,24}]
  wire [2:0] _GEN_3 = {{1'd0}, _GEN_2}; // @[InjectionSpec.scala 57:24]
  always @(posedge clock) begin
    if (reset) begin // @[InjectionSpec.scala 51:26]
      counter <= 3'h0; // @[InjectionSpec.scala 51:26]
    end else begin
      counter <= _counter_T_1; // @[InjectionSpec.scala 52:13]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~reset) begin
          $finish; // @[InjectionSpec.scala 54:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~_T & _T_2 & ~(counter == _GEN_3 | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at InjectionSpec.scala:57 assert(counter === values(counter))\n"); // @[InjectionSpec.scala 57:15]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~_T & _T_2 & ~(counter == _GEN_3 | reset)) begin
          $fatal; // @[InjectionSpec.scala 57:15]
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
  counter = _RAND_0[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
