module GaloisLFSR(
  input   clock,
  input   reset,
  output  io_out_0,
  output  io_out_1,
  output  io_out_2,
  output  io_out_3,
  output  io_out_4,
  output  io_out_5,
  output  io_out_6,
  output  io_out_7,
  output  io_out_8,
  output  io_out_9,
  output  io_out_10,
  output  io_out_11,
  output  io_out_12,
  output  io_out_13,
  output  io_out_14
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
`endif // RANDOMIZE_REG_INIT
  reg  state_0; // @[PRNG.scala 47:50]
  reg  state_1; // @[PRNG.scala 47:50]
  reg  state_2; // @[PRNG.scala 47:50]
  reg  state_3; // @[PRNG.scala 47:50]
  reg  state_4; // @[PRNG.scala 47:50]
  reg  state_5; // @[PRNG.scala 47:50]
  reg  state_6; // @[PRNG.scala 47:50]
  reg  state_7; // @[PRNG.scala 47:50]
  reg  state_8; // @[PRNG.scala 47:50]
  reg  state_9; // @[PRNG.scala 47:50]
  reg  state_10; // @[PRNG.scala 47:50]
  reg  state_11; // @[PRNG.scala 47:50]
  reg  state_12; // @[PRNG.scala 47:50]
  reg  state_13; // @[PRNG.scala 47:50]
  reg  state_14; // @[PRNG.scala 47:50]
  wire  _T_1 = ~(state_11 ^ state_0); // @[LFSR.scala 20:39]
  wire  _T_3 = ~(state_13 ^ state_0); // @[LFSR.scala 20:39]
  wire  _T_5 = ~(state_14 ^ state_0); // @[LFSR.scala 20:39]
  assign io_out_0 = state_0; // @[PRNG.scala 69:10]
  assign io_out_1 = state_1; // @[PRNG.scala 69:10]
  assign io_out_2 = state_2; // @[PRNG.scala 69:10]
  assign io_out_3 = state_3; // @[PRNG.scala 69:10]
  assign io_out_4 = state_4; // @[PRNG.scala 69:10]
  assign io_out_5 = state_5; // @[PRNG.scala 69:10]
  assign io_out_6 = state_6; // @[PRNG.scala 69:10]
  assign io_out_7 = state_7; // @[PRNG.scala 69:10]
  assign io_out_8 = state_8; // @[PRNG.scala 69:10]
  assign io_out_9 = state_9; // @[PRNG.scala 69:10]
  assign io_out_10 = state_10; // @[PRNG.scala 69:10]
  assign io_out_11 = state_11; // @[PRNG.scala 69:10]
  assign io_out_12 = state_12; // @[PRNG.scala 69:10]
  assign io_out_13 = state_13; // @[PRNG.scala 69:10]
  assign io_out_14 = state_14; // @[PRNG.scala 69:10]
  always @(posedge clock) begin
    state_0 <= reset | state_1; // @[PRNG.scala 47:{50,50}]
    if (reset) begin // @[PRNG.scala 47:50]
      state_1 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_1 <= state_2;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_2 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_2 <= state_3;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_3 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_3 <= state_4;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_4 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_4 <= state_5;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_5 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_5 <= state_6;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_6 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_6 <= state_7;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_7 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_7 <= state_8;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_8 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_8 <= state_9;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_9 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_9 <= state_10;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_10 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_10 <= _T_1;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_11 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_11 <= state_12;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_12 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_12 <= _T_3;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_13 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_13 <= _T_5;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_14 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_14 <= state_0;
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
  _RAND_2 = {1{`RANDOM}};
  state_2 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  state_3 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  state_4 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  state_5 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  state_6 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  state_7 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  state_8 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  state_9 = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  state_10 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  state_11 = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  state_12 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  state_13 = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  state_14 = _RAND_14[0:0];
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
  wire  rv_prng_io_out_2; // @[PRNG.scala 82:22]
  wire  rv_prng_io_out_3; // @[PRNG.scala 82:22]
  wire  rv_prng_io_out_4; // @[PRNG.scala 82:22]
  wire  rv_prng_io_out_5; // @[PRNG.scala 82:22]
  wire  rv_prng_io_out_6; // @[PRNG.scala 82:22]
  wire  rv_prng_io_out_7; // @[PRNG.scala 82:22]
  wire  rv_prng_io_out_8; // @[PRNG.scala 82:22]
  wire  rv_prng_io_out_9; // @[PRNG.scala 82:22]
  wire  rv_prng_io_out_10; // @[PRNG.scala 82:22]
  wire  rv_prng_io_out_11; // @[PRNG.scala 82:22]
  wire  rv_prng_io_out_12; // @[PRNG.scala 82:22]
  wire  rv_prng_io_out_13; // @[PRNG.scala 82:22]
  wire  rv_prng_io_out_14; // @[PRNG.scala 82:22]
  wire [6:0] rv_lo = {rv_prng_io_out_6,rv_prng_io_out_5,rv_prng_io_out_4,rv_prng_io_out_3,rv_prng_io_out_2,
    rv_prng_io_out_1,rv_prng_io_out_0}; // @[PRNG.scala 86:17]
  wire [7:0] rv_hi = {rv_prng_io_out_14,rv_prng_io_out_13,rv_prng_io_out_12,rv_prng_io_out_11,rv_prng_io_out_10,
    rv_prng_io_out_9,rv_prng_io_out_8,rv_prng_io_out_7}; // @[PRNG.scala 86:17]
  wire [14:0] rv = {rv_prng_io_out_14,rv_prng_io_out_13,rv_prng_io_out_12,rv_prng_io_out_11,rv_prng_io_out_10,
    rv_prng_io_out_9,rv_prng_io_out_8,rv_prng_io_out_7,rv_lo}; // @[PRNG.scala 86:17]
  reg  started; // @[LFSRSpec.scala 21:24]
  reg [14:0] seed; // @[LFSRSpec.scala 22:43]
  reg [14:0] wrap_value; // @[Counter.scala 60:40]
  wire  wrap_wrap_wrap = wrap_value == 15'h7ffe; // @[Counter.scala 72:24]
  wire [14:0] _wrap_wrap_value_T_1 = wrap_value + 15'h1; // @[Counter.scala 76:24]
  wire  wrap = started & wrap_wrap_wrap; // @[Counter.scala 118:{17,24}]
  wire  _T_1 = rv == seed & started; // @[LFSRSpec.scala 26:21]
  reg [14:0] last; // @[LFSRSpec.scala 31:21]
  GaloisLFSR rv_prng ( // @[PRNG.scala 82:22]
    .clock(rv_prng_clock),
    .reset(rv_prng_reset),
    .io_out_0(rv_prng_io_out_0),
    .io_out_1(rv_prng_io_out_1),
    .io_out_2(rv_prng_io_out_2),
    .io_out_3(rv_prng_io_out_3),
    .io_out_4(rv_prng_io_out_4),
    .io_out_5(rv_prng_io_out_5),
    .io_out_6(rv_prng_io_out_6),
    .io_out_7(rv_prng_io_out_7),
    .io_out_8(rv_prng_io_out_8),
    .io_out_9(rv_prng_io_out_9),
    .io_out_10(rv_prng_io_out_10),
    .io_out_11(rv_prng_io_out_11),
    .io_out_12(rv_prng_io_out_12),
    .io_out_13(rv_prng_io_out_13),
    .io_out_14(rv_prng_io_out_14)
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
      wrap_value <= 15'h0; // @[Counter.scala 60:40]
    end else if (started) begin // @[Counter.scala 118:17]
      if (wrap_wrap_wrap) begin // @[Counter.scala 86:20]
        wrap_value <= 15'h0; // @[Counter.scala 86:28]
      end else begin
        wrap_value <= _wrap_wrap_value_T_1; // @[Counter.scala 76:15]
      end
    end
    last <= {rv_hi,rv_lo}; // @[PRNG.scala 86:17]
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
  seed = _RAND_1[14:0];
  _RAND_2 = {1{`RANDOM}};
  wrap_value = _RAND_2[14:0];
  _RAND_3 = {1{`RANDOM}};
  last = _RAND_3[14:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
