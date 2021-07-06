module BoringInverter(
  input   clock,
  input   reset
);
  wire  _notA_T = 1'h1; // @[BoringUtilsSpec.scala 42:13]
  wire  notA = 1'h1; // @[BoringUtilsSpec.scala 42:13]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(_notA_T | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at BoringUtilsSpec.scala:44 chisel3.assert(b === 1.U)\n"); // @[BoringUtilsSpec.scala 44:19]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(_notA_T | reset)) begin
          $fatal; // @[BoringUtilsSpec.scala 44:19]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module BoringUtilsSpec_Anon(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  dut_clock; // @[BoringUtilsSpec.scala 52:58]
  wire  dut_reset; // @[BoringUtilsSpec.scala 52:58]
  reg  done_value; // @[Counter.scala 60:40]
  wire  _done_wrap_value_T_1 = done_value + 1'h1; // @[Counter.scala 76:24]
  BoringInverter dut ( // @[BoringUtilsSpec.scala 52:58]
    .clock(dut_clock),
    .reset(dut_reset)
  );
  assign dut_clock = clock;
  assign dut_reset = reset;
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 60:40]
      done_value <= 1'h0; // @[Counter.scala 60:40]
    end else begin
      done_value <= _done_wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done_value & ~reset) begin
          $finish; // @[BoringUtilsSpec.scala 21:21]
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
  done_value = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
