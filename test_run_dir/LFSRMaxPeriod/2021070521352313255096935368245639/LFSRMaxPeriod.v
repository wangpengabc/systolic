module GaloisLFSR(
  input   clock,
  input   reset,
  output  io_out_0,
  output  io_out_1
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg  state_0; // @[PRNG.scala 47:50]
  reg  state_1; // @[PRNG.scala 47:50]
  wire  _T_1 = ~(state_1 ^ state_0); // @[LFSR.scala 20:39]
  assign io_out_0 = state_0; // @[PRNG.scala 69:10]
  assign io_out_1 = state_1; // @[PRNG.scala 69:10]
  always @(posedge clock) begin
    state_0 <= reset | _T_1; // @[PRNG.scala 47:{50,50}]
    if (reset) begin // @[PRNG.scala 47:50]
      state_1 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_1 <= state_0;
    end
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
  state_0 = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  state_1 = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module LFSRMaxPeriod(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire  rv_prng_clock; // @[PRNG.scala 82:22]
  wire  rv_prng_reset; // @[PRNG.scala 82:22]
  wire  rv_prng_io_out_0; // @[PRNG.scala 82:22]
  wire  rv_prng_io_out_1; // @[PRNG.scala 82:22]
  wire [1:0] rv = {rv_prng_io_out_1,rv_prng_io_out_0}; // @[PRNG.scala 86:17]
  reg  started; // @[LFSRSpec.scala 21:24]
  reg [1:0] seed; // @[LFSRSpec.scala 22:43]
  reg [1:0] wrap_value; // @[Counter.scala 60:40]
  wire  wrap_wrap_wrap = wrap_value == 2'h2; // @[Counter.scala 72:24]
  wire [1:0] _wrap_wrap_value_T_1 = wrap_value + 2'h1; // @[Counter.scala 76:24]
  wire  wrap = started & wrap_wrap_wrap; // @[Counter.scala 118:{17,24}]
  wire  _T_1 = rv == seed & started; // @[LFSRSpec.scala 26:21]
  reg [1:0] last; // @[LFSRSpec.scala 31:21]
  GaloisLFSR rv_prng ( // @[PRNG.scala 82:22]
    .clock(rv_prng_clock),
    .reset(rv_prng_reset),
    .io_out_0(rv_prng_io_out_0),
    .io_out_1(rv_prng_io_out_1)
  );
  assign rv_prng_clock = clock;
  assign rv_prng_reset = reset;
  always @(posedge clock) begin
    if (reset) begin // @[LFSRSpec.scala 21:24]
      started <= 1'h0; // @[LFSRSpec.scala 21:24]
    end else begin
      started <= 1'h1; // @[LFSRSpec.scala 21:24]
    end
    if (~started) begin // @[LFSRSpec.scala 22:43]
      seed <= rv; // @[LFSRSpec.scala 22:43]
    end
    if (reset) begin // @[Counter.scala 60:40]
      wrap_value <= 2'h0; // @[Counter.scala 60:40]
    end else if (started) begin // @[Counter.scala 118:17]
      if (wrap_wrap_wrap) begin // @[Counter.scala 86:20]
        wrap_value <= 2'h0; // @[Counter.scala 86:28]
      end else begin
        wrap_value <= _wrap_wrap_value_T_1; // @[Counter.scala 76:15]
      end
    end
    last <= {rv_prng_io_out_1,rv_prng_io_out_0}; // @[PRNG.scala 86:17]
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1 & ~(wrap | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at LFSRSpec.scala:27 chisel3.assert(wrap)\n"); // @[LFSRSpec.scala 27:19]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~(wrap | reset)) begin
          $fatal; // @[LFSRSpec.scala 27:19]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1 & ~reset) begin
          $finish; // @[LFSRSpec.scala 28:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(rv != last | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed: LFSR last value (0b%b) was equal to current value (0b%b)\n    at LFSRSpec.scala:32 chisel3.assert(rv =/= last, \"LFSR last value (0b%%b) was equal to current value (0b%%b)\", rv, last)\n"
            ,rv,last); // @[LFSRSpec.scala 32:17]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(rv != last | reset)) begin
          $fatal; // @[LFSRSpec.scala 32:17]
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
  started = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  seed = _RAND_1[1:0];
  _RAND_2 = {1{`RANDOM}};
  wrap_value = _RAND_2[1:0];
  _RAND_3 = {1{`RANDOM}};
  last = _RAND_3[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
