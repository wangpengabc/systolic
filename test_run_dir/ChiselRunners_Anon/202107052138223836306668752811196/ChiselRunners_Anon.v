module ChiselRunners_Anon(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [3:0] x; // @[WidthSpec.scala 185:45]
  reg  done_value; // @[Counter.scala 60:40]
  wire  _done_wrap_value_T_1 = done_value + 1'h1; // @[Counter.scala 76:24]
  wire [3:0] _T = ~x; // @[ChiselSpec.scala 58:24]
  always @(posedge clock) begin
    if (reset) begin // @[WidthSpec.scala 185:45]
      x <= 4'h3; // @[WidthSpec.scala 185:45]
    end else begin
      x <= 4'h0; // @[ChiselSpec.scala 55:9]
    end
    if (reset) begin // @[Counter.scala 60:40]
      done_value <= 1'h0; // @[Counter.scala 60:40]
    end else begin
      done_value <= _done_wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (done_value & ~(_T == 4'hf | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at ChiselSpec.scala:58 chisel3.assert(~(x.asUInt) === -1.S(expected.W).asUInt)\n"); // @[ChiselSpec.scala 58:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done_value & ~(_T == 4'hf | reset)) begin
          $fatal; // @[ChiselSpec.scala 58:23]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done_value & ~reset) begin
          $finish; // @[ChiselSpec.scala 59:13]
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
  x = _RAND_0[3:0];
  _RAND_1 = {1{`RANDOM}};
  done_value = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
