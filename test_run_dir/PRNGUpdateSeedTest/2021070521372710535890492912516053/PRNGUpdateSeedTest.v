module CyclePRNG(
  input   clock,
  input   reset,
  input   io_seed_valid,
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
  output  io_out_14,
  output  io_out_15
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
  reg [31:0] _RAND_15;
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
  reg  state_15; // @[PRNG.scala 47:50]
  wire  _GEN_16 = io_seed_valid | state_15; // @[PRNG.scala 65:25 66:11]
  wire  _GEN_17 = io_seed_valid | state_0; // @[PRNG.scala 65:25 66:11]
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
  assign io_out_15 = state_15; // @[PRNG.scala 69:10]
  always @(posedge clock) begin
    state_0 <= reset | _GEN_16; // @[PRNG.scala 47:{50,50}]
    if (reset) begin // @[PRNG.scala 47:50]
      state_1 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_1 <= _GEN_17;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_2 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_seed_valid) begin // @[PRNG.scala 65:25]
      state_2 <= 1'h0; // @[PRNG.scala 66:11]
    end else begin
      state_2 <= state_1;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_3 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_seed_valid) begin // @[PRNG.scala 65:25]
      state_3 <= 1'h0; // @[PRNG.scala 66:11]
    end else begin
      state_3 <= state_2;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_4 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_seed_valid) begin // @[PRNG.scala 65:25]
      state_4 <= 1'h0; // @[PRNG.scala 66:11]
    end else begin
      state_4 <= state_3;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_5 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_seed_valid) begin // @[PRNG.scala 65:25]
      state_5 <= 1'h0; // @[PRNG.scala 66:11]
    end else begin
      state_5 <= state_4;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_6 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_seed_valid) begin // @[PRNG.scala 65:25]
      state_6 <= 1'h0; // @[PRNG.scala 66:11]
    end else begin
      state_6 <= state_5;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_7 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_seed_valid) begin // @[PRNG.scala 65:25]
      state_7 <= 1'h0; // @[PRNG.scala 66:11]
    end else begin
      state_7 <= state_6;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_8 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_seed_valid) begin // @[PRNG.scala 65:25]
      state_8 <= 1'h0; // @[PRNG.scala 66:11]
    end else begin
      state_8 <= state_7;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_9 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_seed_valid) begin // @[PRNG.scala 65:25]
      state_9 <= 1'h0; // @[PRNG.scala 66:11]
    end else begin
      state_9 <= state_8;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_10 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_seed_valid) begin // @[PRNG.scala 65:25]
      state_10 <= 1'h0; // @[PRNG.scala 66:11]
    end else begin
      state_10 <= state_9;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_11 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_seed_valid) begin // @[PRNG.scala 65:25]
      state_11 <= 1'h0; // @[PRNG.scala 66:11]
    end else begin
      state_11 <= state_10;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_12 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_seed_valid) begin // @[PRNG.scala 65:25]
      state_12 <= 1'h0; // @[PRNG.scala 66:11]
    end else begin
      state_12 <= state_11;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_13 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_seed_valid) begin // @[PRNG.scala 65:25]
      state_13 <= 1'h0; // @[PRNG.scala 66:11]
    end else begin
      state_13 <= state_12;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_14 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_seed_valid) begin // @[PRNG.scala 65:25]
      state_14 <= 1'h0; // @[PRNG.scala 66:11]
    end else begin
      state_14 <= state_13;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_15 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_seed_valid) begin // @[PRNG.scala 65:25]
      state_15 <= 1'h0; // @[PRNG.scala 66:11]
    end else begin
      state_15 <= state_14;
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
  _RAND_15 = {1{`RANDOM}};
  state_15 = _RAND_15[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module PRNGUpdateSeedTest(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  a_clock; // @[PRNGSpec.scala 47:28]
  wire  a_reset; // @[PRNGSpec.scala 47:28]
  wire  a_io_seed_valid; // @[PRNGSpec.scala 47:28]
  wire  a_io_out_0; // @[PRNGSpec.scala 47:28]
  wire  a_io_out_1; // @[PRNGSpec.scala 47:28]
  wire  a_io_out_2; // @[PRNGSpec.scala 47:28]
  wire  a_io_out_3; // @[PRNGSpec.scala 47:28]
  wire  a_io_out_4; // @[PRNGSpec.scala 47:28]
  wire  a_io_out_5; // @[PRNGSpec.scala 47:28]
  wire  a_io_out_6; // @[PRNGSpec.scala 47:28]
  wire  a_io_out_7; // @[PRNGSpec.scala 47:28]
  wire  a_io_out_8; // @[PRNGSpec.scala 47:28]
  wire  a_io_out_9; // @[PRNGSpec.scala 47:28]
  wire  a_io_out_10; // @[PRNGSpec.scala 47:28]
  wire  a_io_out_11; // @[PRNGSpec.scala 47:28]
  wire  a_io_out_12; // @[PRNGSpec.scala 47:28]
  wire  a_io_out_13; // @[PRNGSpec.scala 47:28]
  wire  a_io_out_14; // @[PRNGSpec.scala 47:28]
  wire  a_io_out_15; // @[PRNGSpec.scala 47:28]
  reg [1:0] count; // @[Counter.scala 60:40]
  wire  wrap_wrap = count == 2'h3; // @[Counter.scala 72:24]
  wire [1:0] _wrap_value_T_1 = count + 2'h1; // @[Counter.scala 76:24]
  wire [7:0] lo = {a_io_out_7,a_io_out_6,a_io_out_5,a_io_out_4,a_io_out_3,a_io_out_2,a_io_out_1,a_io_out_0}; // @[PRNGSpec.scala 56:21]
  wire [15:0] _T_1 = {a_io_out_15,a_io_out_14,a_io_out_13,a_io_out_12,a_io_out_11,a_io_out_10,a_io_out_9,a_io_out_8,lo}; // @[PRNGSpec.scala 56:21]
  CyclePRNG a ( // @[PRNGSpec.scala 47:28]
    .clock(a_clock),
    .reset(a_reset),
    .io_seed_valid(a_io_seed_valid),
    .io_out_0(a_io_out_0),
    .io_out_1(a_io_out_1),
    .io_out_2(a_io_out_2),
    .io_out_3(a_io_out_3),
    .io_out_4(a_io_out_4),
    .io_out_5(a_io_out_5),
    .io_out_6(a_io_out_6),
    .io_out_7(a_io_out_7),
    .io_out_8(a_io_out_8),
    .io_out_9(a_io_out_9),
    .io_out_10(a_io_out_10),
    .io_out_11(a_io_out_11),
    .io_out_12(a_io_out_12),
    .io_out_13(a_io_out_13),
    .io_out_14(a_io_out_14),
    .io_out_15(a_io_out_15)
  );
  assign a_clock = clock;
  assign a_reset = reset;
  assign a_io_seed_valid = count == 2'h2; // @[PRNGSpec.scala 52:28]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 60:40]
      count <= 2'h0; // @[Counter.scala 60:40]
    end else begin
      count <= _wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (wrap_wrap & ~(_T_1 == 16'h3 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Output didn't match!\n    at PRNGSpec.scala:56 assert(a.io.out.asUInt === expected.U, \"Output didn't match!\")\n"
            ); // @[PRNGSpec.scala 56:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & ~(_T_1 == 16'h3 | reset)) begin
          $fatal; // @[PRNGSpec.scala 56:11]
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
          $finish; // @[PRNGSpec.scala 60:9]
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
  count = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
