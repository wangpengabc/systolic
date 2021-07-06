module SucceedingAssertTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  _done_T_1 = ~reset; // @[Assert.scala 22:27]
  reg [1:0] done_value; // @[Counter.scala 60:40]
  wire  done_wrap_wrap = done_value == 2'h3; // @[Counter.scala 72:24]
  wire [1:0] _done_wrap_value_T_1 = done_value + 2'h1; // @[Counter.scala 76:24]
  wire  done = _done_T_1 & done_wrap_wrap; // @[Counter.scala 118:{17,24}]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 60:40]
      done_value <= 2'h0; // @[Counter.scala 60:40]
    end else if (_done_T_1) begin // @[Counter.scala 118:17]
      done_value <= _done_wrap_value_T_1; // @[Counter.scala 76:15]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done & _done_T_1) begin
          $finish; // @[Assert.scala 24:9]
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
  done_value = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
