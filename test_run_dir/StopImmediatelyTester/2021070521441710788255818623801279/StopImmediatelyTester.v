module StopImmediatelyTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [3:0] cycle; // @[Stop.scala 13:22]
  wire [3:0] _cycle_T_1 = cycle + 4'h1; // @[Stop.scala 14:18]
  wire  _T = cycle == 4'h4; // @[Stop.scala 15:15]
  always @(posedge clock) begin
    if (reset) begin // @[Stop.scala 13:22]
      cycle <= 4'h0; // @[Stop.scala 13:22]
    end else begin
      cycle <= _cycle_T_1; // @[Stop.scala 14:9]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~reset) begin
          $finish; // @[Stop.scala 16:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(cycle != 4'h5 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Simulation did not exit upon executing stop()\n    at Stop.scala:18 assert(cycle =/= 5.U, \"Simulation did not exit upon executing stop()\")\n"
            ); // @[Stop.scala 18:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(cycle != 4'h5 | reset)) begin
          $fatal; // @[Stop.scala 18:9]
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
  cycle = _RAND_0[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
