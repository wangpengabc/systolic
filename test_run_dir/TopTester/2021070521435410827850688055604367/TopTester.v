module Source(
);
  wire [3:0] x = 4'h0; // @[BoringUtilsSpec.scala 57:17 65:7]
endmodule
module Source_1(
  output [3:0] x_1
);
  wire [3:0] x = 4'h1; // @[BoringUtilsSpec.scala 57:17 65:7]
  assign x_1 = x;
endmodule
module Source_2(
  output [3:0] x_0
);
  wire [3:0] x = 4'h2; // @[BoringUtilsSpec.scala 57:17 65:7]
  assign x_0 = x;
endmodule
module Sink(
  output [3:0] out
);
  wire [3:0] x = 4'h0; // @[BoringUtilsSpec.scala 57:17 70:7]
  assign out = x; // @[BoringUtilsSpec.scala 71:9]
endmodule
module Sink_1(
  output [3:0] out,
  input  [3:0] x_1
);
  wire [3:0] x = x_1; // @[BoringUtilsSpec.scala 57:17]
  assign out = x; // @[BoringUtilsSpec.scala 71:9]
endmodule
module Sink_2(
  output [3:0] out,
  input  [3:0] x_1
);
  wire [3:0] x = x_1; // @[BoringUtilsSpec.scala 57:17]
  assign out = x; // @[BoringUtilsSpec.scala 71:9]
endmodule
module Sink_3(
  output [3:0] out,
  input  [3:0] x_1
);
  wire [3:0] x = x_1; // @[BoringUtilsSpec.scala 57:17]
  assign out = x; // @[BoringUtilsSpec.scala 71:9]
endmodule
module Sink_4(
  output [3:0] out,
  input  [3:0] x_1
);
  wire [3:0] x = x_1; // @[BoringUtilsSpec.scala 57:17]
  assign out = x; // @[BoringUtilsSpec.scala 71:9]
endmodule
module Sink_5(
  output [3:0] out,
  input  [3:0] x_1
);
  wire [3:0] x = x_1; // @[BoringUtilsSpec.scala 57:17]
  assign out = x; // @[BoringUtilsSpec.scala 71:9]
endmodule
module Top(
  input   clock,
  input   reset
);
  wire [3:0] sources_1_x_1; // @[BoringUtilsSpec.scala 76:37]
  wire [3:0] sources_2_x_0; // @[BoringUtilsSpec.scala 76:37]
  wire [3:0] sinks_0_out; // @[BoringUtilsSpec.scala 77:35]
  wire [3:0] sinks_1_out; // @[BoringUtilsSpec.scala 77:35]
  wire [3:0] sinks_1_x_1; // @[BoringUtilsSpec.scala 77:35]
  wire [3:0] sinks_2_out; // @[BoringUtilsSpec.scala 77:35]
  wire [3:0] sinks_2_x_1; // @[BoringUtilsSpec.scala 77:35]
  wire [3:0] sinks_3_out; // @[BoringUtilsSpec.scala 77:35]
  wire [3:0] sinks_3_x_1; // @[BoringUtilsSpec.scala 77:35]
  wire [3:0] sinks_4_out; // @[BoringUtilsSpec.scala 77:35]
  wire [3:0] sinks_4_x_1; // @[BoringUtilsSpec.scala 77:35]
  wire [3:0] sinks_5_out; // @[BoringUtilsSpec.scala 77:35]
  wire [3:0] sinks_5_x_1; // @[BoringUtilsSpec.scala 77:35]
  Source sources_0 ( // @[BoringUtilsSpec.scala 76:37]
  );
  Source_1 sources_1 ( // @[BoringUtilsSpec.scala 76:37]
    .x_1(sources_1_x_1)
  );
  Source_2 sources_2 ( // @[BoringUtilsSpec.scala 76:37]
    .x_0(sources_2_x_0)
  );
  Sink sinks_0 ( // @[BoringUtilsSpec.scala 77:35]
    .out(sinks_0_out)
  );
  Sink_1 sinks_1 ( // @[BoringUtilsSpec.scala 77:35]
    .out(sinks_1_out),
    .x_1(sinks_1_x_1)
  );
  Sink_2 sinks_2 ( // @[BoringUtilsSpec.scala 77:35]
    .out(sinks_2_out),
    .x_1(sinks_2_x_1)
  );
  Sink_3 sinks_3 ( // @[BoringUtilsSpec.scala 77:35]
    .out(sinks_3_out),
    .x_1(sinks_3_x_1)
  );
  Sink_4 sinks_4 ( // @[BoringUtilsSpec.scala 77:35]
    .out(sinks_4_out),
    .x_1(sinks_4_x_1)
  );
  Sink_5 sinks_5 ( // @[BoringUtilsSpec.scala 77:35]
    .out(sinks_5_out),
    .x_1(sinks_5_x_1)
  );
  assign sinks_1_x_1 = sources_1_x_1;
  assign sinks_2_x_1 = sources_1_x_1;
  assign sinks_3_x_1 = sources_2_x_0;
  assign sinks_4_x_1 = sources_2_x_0;
  assign sinks_5_x_1 = sources_2_x_0;
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(sinks_0_out == 4'h0 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at BoringUtilsSpec.scala:83 sinks.zip(Seq(0, 1, 1, 2, 2, 2)).map{ case (a, b) => chisel3.assert(a.out === b.U) }\n"
            ); // @[BoringUtilsSpec.scala 83:72]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(sinks_0_out == 4'h0 | reset)) begin
          $fatal; // @[BoringUtilsSpec.scala 83:72]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(sinks_1_out == 4'h1 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at BoringUtilsSpec.scala:83 sinks.zip(Seq(0, 1, 1, 2, 2, 2)).map{ case (a, b) => chisel3.assert(a.out === b.U) }\n"
            ); // @[BoringUtilsSpec.scala 83:72]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(sinks_1_out == 4'h1 | reset)) begin
          $fatal; // @[BoringUtilsSpec.scala 83:72]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(sinks_2_out == 4'h1 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at BoringUtilsSpec.scala:83 sinks.zip(Seq(0, 1, 1, 2, 2, 2)).map{ case (a, b) => chisel3.assert(a.out === b.U) }\n"
            ); // @[BoringUtilsSpec.scala 83:72]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(sinks_2_out == 4'h1 | reset)) begin
          $fatal; // @[BoringUtilsSpec.scala 83:72]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(sinks_3_out == 4'h2 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at BoringUtilsSpec.scala:83 sinks.zip(Seq(0, 1, 1, 2, 2, 2)).map{ case (a, b) => chisel3.assert(a.out === b.U) }\n"
            ); // @[BoringUtilsSpec.scala 83:72]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(sinks_3_out == 4'h2 | reset)) begin
          $fatal; // @[BoringUtilsSpec.scala 83:72]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(sinks_4_out == 4'h2 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at BoringUtilsSpec.scala:83 sinks.zip(Seq(0, 1, 1, 2, 2, 2)).map{ case (a, b) => chisel3.assert(a.out === b.U) }\n"
            ); // @[BoringUtilsSpec.scala 83:72]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(sinks_4_out == 4'h2 | reset)) begin
          $fatal; // @[BoringUtilsSpec.scala 83:72]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(sinks_5_out == 4'h2 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at BoringUtilsSpec.scala:83 sinks.zip(Seq(0, 1, 1, 2, 2, 2)).map{ case (a, b) => chisel3.assert(a.out === b.U) }\n"
            ); // @[BoringUtilsSpec.scala 83:72]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(sinks_5_out == 4'h2 | reset)) begin
          $fatal; // @[BoringUtilsSpec.scala 83:72]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module TopTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  dut_clock; // @[BoringUtilsSpec.scala 91:21]
  wire  dut_reset; // @[BoringUtilsSpec.scala 91:21]
  reg  done_value; // @[Counter.scala 60:40]
  wire  _done_wrap_value_T_1 = done_value + 1'h1; // @[Counter.scala 76:24]
  Top dut ( // @[BoringUtilsSpec.scala 91:21]
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
