module CyclePRNG(
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
    state_0 <= reset | state_15; // @[PRNG.scala 47:{50,50}]
    if (reset) begin // @[PRNG.scala 47:50]
      state_1 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_1 <= state_0;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_2 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_2 <= state_1;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_3 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_3 <= state_2;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_4 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_4 <= state_3;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_5 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_5 <= state_4;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_6 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_6 <= state_5;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_7 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_7 <= state_6;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_8 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_8 <= state_7;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_9 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_9 <= state_8;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_10 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_10 <= state_9;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_11 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_11 <= state_10;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_12 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_12 <= state_11;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_13 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_13 <= state_12;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_14 <= 1'h0; // @[PRNG.scala 47:50]
    end else begin
      state_14 <= state_13;
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_15 <= 1'h0; // @[PRNG.scala 47:50]
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
module CyclePRNG_1(
  input   clock,
  input   reset,
  input   io_increment,
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
  wire  _GEN_0 = io_increment ? state_14 : state_0; // @[PRNG.scala 61:23 62:11 47:50]
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
    state_0 <= reset | _GEN_0; // @[PRNG.scala 47:{50,50}]
    if (reset) begin // @[PRNG.scala 47:50]
      state_1 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_1 <= state_15; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_2 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_2 <= state_0; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_3 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_3 <= state_1; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_4 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_4 <= state_2; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_5 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_5 <= state_3; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_6 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_6 <= state_4; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_7 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_7 <= state_5; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_8 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_8 <= state_6; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_9 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_9 <= state_7; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_10 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_10 <= state_8; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_11 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_11 <= state_9; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_12 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_12 <= state_10; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_13 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_13 <= state_11; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_14 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_14 <= state_12; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_15 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_15 <= state_13; // @[PRNG.scala 62:11]
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
module CyclePRNG_2(
  input   clock,
  input   reset,
  input   io_increment,
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
  wire  _GEN_0 = io_increment ? state_12 : state_0; // @[PRNG.scala 61:23 62:11 47:50]
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
    state_0 <= reset | _GEN_0; // @[PRNG.scala 47:{50,50}]
    if (reset) begin // @[PRNG.scala 47:50]
      state_1 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_1 <= state_13; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_2 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_2 <= state_14; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_3 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_3 <= state_15; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_4 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_4 <= state_0; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_5 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_5 <= state_1; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_6 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_6 <= state_2; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_7 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_7 <= state_3; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_8 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_8 <= state_4; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_9 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_9 <= state_5; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_10 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_10 <= state_6; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_11 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_11 <= state_7; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_12 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_12 <= state_8; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_13 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_13 <= state_9; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_14 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_14 <= state_10; // @[PRNG.scala 62:11]
    end
    if (reset) begin // @[PRNG.scala 47:50]
      state_15 <= 1'h0; // @[PRNG.scala 47:50]
    end else if (io_increment) begin // @[PRNG.scala 61:23]
      state_15 <= state_11; // @[PRNG.scala 62:11]
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
module PRNGStepTest(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  wire  a_prng_clock; // @[PRNG.scala 82:22]
  wire  a_prng_reset; // @[PRNG.scala 82:22]
  wire  a_prng_io_out_0; // @[PRNG.scala 82:22]
  wire  a_prng_io_out_1; // @[PRNG.scala 82:22]
  wire  a_prng_io_out_2; // @[PRNG.scala 82:22]
  wire  a_prng_io_out_3; // @[PRNG.scala 82:22]
  wire  a_prng_io_out_4; // @[PRNG.scala 82:22]
  wire  a_prng_io_out_5; // @[PRNG.scala 82:22]
  wire  a_prng_io_out_6; // @[PRNG.scala 82:22]
  wire  a_prng_io_out_7; // @[PRNG.scala 82:22]
  wire  a_prng_io_out_8; // @[PRNG.scala 82:22]
  wire  a_prng_io_out_9; // @[PRNG.scala 82:22]
  wire  a_prng_io_out_10; // @[PRNG.scala 82:22]
  wire  a_prng_io_out_11; // @[PRNG.scala 82:22]
  wire  a_prng_io_out_12; // @[PRNG.scala 82:22]
  wire  a_prng_io_out_13; // @[PRNG.scala 82:22]
  wire  a_prng_io_out_14; // @[PRNG.scala 82:22]
  wire  a_prng_io_out_15; // @[PRNG.scala 82:22]
  wire  b_prng_clock; // @[PRNG.scala 82:22]
  wire  b_prng_reset; // @[PRNG.scala 82:22]
  wire  b_prng_io_increment; // @[PRNG.scala 82:22]
  wire  b_prng_io_out_0; // @[PRNG.scala 82:22]
  wire  b_prng_io_out_1; // @[PRNG.scala 82:22]
  wire  b_prng_io_out_2; // @[PRNG.scala 82:22]
  wire  b_prng_io_out_3; // @[PRNG.scala 82:22]
  wire  b_prng_io_out_4; // @[PRNG.scala 82:22]
  wire  b_prng_io_out_5; // @[PRNG.scala 82:22]
  wire  b_prng_io_out_6; // @[PRNG.scala 82:22]
  wire  b_prng_io_out_7; // @[PRNG.scala 82:22]
  wire  b_prng_io_out_8; // @[PRNG.scala 82:22]
  wire  b_prng_io_out_9; // @[PRNG.scala 82:22]
  wire  b_prng_io_out_10; // @[PRNG.scala 82:22]
  wire  b_prng_io_out_11; // @[PRNG.scala 82:22]
  wire  b_prng_io_out_12; // @[PRNG.scala 82:22]
  wire  b_prng_io_out_13; // @[PRNG.scala 82:22]
  wire  b_prng_io_out_14; // @[PRNG.scala 82:22]
  wire  b_prng_io_out_15; // @[PRNG.scala 82:22]
  wire  c_prng_clock; // @[PRNG.scala 82:22]
  wire  c_prng_reset; // @[PRNG.scala 82:22]
  wire  c_prng_io_increment; // @[PRNG.scala 82:22]
  wire  c_prng_io_out_0; // @[PRNG.scala 82:22]
  wire  c_prng_io_out_1; // @[PRNG.scala 82:22]
  wire  c_prng_io_out_2; // @[PRNG.scala 82:22]
  wire  c_prng_io_out_3; // @[PRNG.scala 82:22]
  wire  c_prng_io_out_4; // @[PRNG.scala 82:22]
  wire  c_prng_io_out_5; // @[PRNG.scala 82:22]
  wire  c_prng_io_out_6; // @[PRNG.scala 82:22]
  wire  c_prng_io_out_7; // @[PRNG.scala 82:22]
  wire  c_prng_io_out_8; // @[PRNG.scala 82:22]
  wire  c_prng_io_out_9; // @[PRNG.scala 82:22]
  wire  c_prng_io_out_10; // @[PRNG.scala 82:22]
  wire  c_prng_io_out_11; // @[PRNG.scala 82:22]
  wire  c_prng_io_out_12; // @[PRNG.scala 82:22]
  wire  c_prng_io_out_13; // @[PRNG.scala 82:22]
  wire  c_prng_io_out_14; // @[PRNG.scala 82:22]
  wire  c_prng_io_out_15; // @[PRNG.scala 82:22]
  reg  count2; // @[Counter.scala 60:40]
  wire  _count2_wrap_value_T_1 = count2 + 1'h1; // @[Counter.scala 76:24]
  reg [1:0] count4; // @[Counter.scala 60:40]
  wire [1:0] _count4_wrap_value_T_1 = count4 + 2'h1; // @[Counter.scala 76:24]
  wire [7:0] a_lo = {a_prng_io_out_7,a_prng_io_out_6,a_prng_io_out_5,a_prng_io_out_4,a_prng_io_out_3,a_prng_io_out_2,
    a_prng_io_out_1,a_prng_io_out_0}; // @[PRNG.scala 86:17]
  wire [15:0] a = {a_prng_io_out_15,a_prng_io_out_14,a_prng_io_out_13,a_prng_io_out_12,a_prng_io_out_11,a_prng_io_out_10
    ,a_prng_io_out_9,a_prng_io_out_8,a_lo}; // @[PRNG.scala 86:17]
  wire [7:0] b_lo = {b_prng_io_out_7,b_prng_io_out_6,b_prng_io_out_5,b_prng_io_out_4,b_prng_io_out_3,b_prng_io_out_2,
    b_prng_io_out_1,b_prng_io_out_0}; // @[PRNG.scala 86:17]
  wire [15:0] b = {b_prng_io_out_15,b_prng_io_out_14,b_prng_io_out_13,b_prng_io_out_12,b_prng_io_out_11,b_prng_io_out_10
    ,b_prng_io_out_9,b_prng_io_out_8,b_lo}; // @[PRNG.scala 86:17]
  wire [7:0] c_lo = {c_prng_io_out_7,c_prng_io_out_6,c_prng_io_out_5,c_prng_io_out_4,c_prng_io_out_3,c_prng_io_out_2,
    c_prng_io_out_1,c_prng_io_out_0}; // @[PRNG.scala 86:17]
  wire [15:0] c = {c_prng_io_out_15,c_prng_io_out_14,c_prng_io_out_13,c_prng_io_out_12,c_prng_io_out_11,c_prng_io_out_10
    ,c_prng_io_out_9,c_prng_io_out_8,c_lo}; // @[PRNG.scala 86:17]
  reg [3:0] done_value; // @[Counter.scala 60:40]
  wire  done_wrap_wrap = done_value == 4'hf; // @[Counter.scala 72:24]
  wire [3:0] _done_wrap_value_T_1 = done_value + 4'h1; // @[Counter.scala 76:24]
  wire  _T = ~count2; // @[PRNGSpec.scala 31:16]
  wire  _T_5 = count4 == 2'h0; // @[PRNGSpec.scala 35:16]
  CyclePRNG a_prng ( // @[PRNG.scala 82:22]
    .clock(a_prng_clock),
    .reset(a_prng_reset),
    .io_out_0(a_prng_io_out_0),
    .io_out_1(a_prng_io_out_1),
    .io_out_2(a_prng_io_out_2),
    .io_out_3(a_prng_io_out_3),
    .io_out_4(a_prng_io_out_4),
    .io_out_5(a_prng_io_out_5),
    .io_out_6(a_prng_io_out_6),
    .io_out_7(a_prng_io_out_7),
    .io_out_8(a_prng_io_out_8),
    .io_out_9(a_prng_io_out_9),
    .io_out_10(a_prng_io_out_10),
    .io_out_11(a_prng_io_out_11),
    .io_out_12(a_prng_io_out_12),
    .io_out_13(a_prng_io_out_13),
    .io_out_14(a_prng_io_out_14),
    .io_out_15(a_prng_io_out_15)
  );
  CyclePRNG_1 b_prng ( // @[PRNG.scala 82:22]
    .clock(b_prng_clock),
    .reset(b_prng_reset),
    .io_increment(b_prng_io_increment),
    .io_out_0(b_prng_io_out_0),
    .io_out_1(b_prng_io_out_1),
    .io_out_2(b_prng_io_out_2),
    .io_out_3(b_prng_io_out_3),
    .io_out_4(b_prng_io_out_4),
    .io_out_5(b_prng_io_out_5),
    .io_out_6(b_prng_io_out_6),
    .io_out_7(b_prng_io_out_7),
    .io_out_8(b_prng_io_out_8),
    .io_out_9(b_prng_io_out_9),
    .io_out_10(b_prng_io_out_10),
    .io_out_11(b_prng_io_out_11),
    .io_out_12(b_prng_io_out_12),
    .io_out_13(b_prng_io_out_13),
    .io_out_14(b_prng_io_out_14),
    .io_out_15(b_prng_io_out_15)
  );
  CyclePRNG_2 c_prng ( // @[PRNG.scala 82:22]
    .clock(c_prng_clock),
    .reset(c_prng_reset),
    .io_increment(c_prng_io_increment),
    .io_out_0(c_prng_io_out_0),
    .io_out_1(c_prng_io_out_1),
    .io_out_2(c_prng_io_out_2),
    .io_out_3(c_prng_io_out_3),
    .io_out_4(c_prng_io_out_4),
    .io_out_5(c_prng_io_out_5),
    .io_out_6(c_prng_io_out_6),
    .io_out_7(c_prng_io_out_7),
    .io_out_8(c_prng_io_out_8),
    .io_out_9(c_prng_io_out_9),
    .io_out_10(c_prng_io_out_10),
    .io_out_11(c_prng_io_out_11),
    .io_out_12(c_prng_io_out_12),
    .io_out_13(c_prng_io_out_13),
    .io_out_14(c_prng_io_out_14),
    .io_out_15(c_prng_io_out_15)
  );
  assign a_prng_clock = clock;
  assign a_prng_reset = reset;
  assign b_prng_clock = clock;
  assign b_prng_reset = reset;
  assign b_prng_io_increment = count2; // @[PRNGSpec.scala 26:67]
  assign c_prng_clock = clock;
  assign c_prng_reset = reset;
  assign c_prng_io_increment = count4 == 2'h3; // @[PRNGSpec.scala 27:67]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 60:40]
      count2 <= 1'h0; // @[Counter.scala 60:40]
    end else begin
      count2 <= _count2_wrap_value_T_1;
    end
    if (reset) begin // @[Counter.scala 60:40]
      count4 <= 2'h0; // @[Counter.scala 60:40]
    end else begin
      count4 <= _count4_wrap_value_T_1;
    end
    if (reset) begin // @[Counter.scala 60:40]
      done_value <= 4'h0; // @[Counter.scala 60:40]
    end else begin
      done_value <= _done_wrap_value_T_1;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T & ~(a == b | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed: 1-step and 2-step PRNGs did not agree! (0b%b != 0b%b)\n    at PRNGSpec.scala:32 assert(a === b, \"1-step and 2-step PRNGs did not agree! (0b%%b != 0b%%b)\", a, b)\n"
            ,a,b); // @[PRNGSpec.scala 32:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~(a == b | reset)) begin
          $fatal; // @[PRNGSpec.scala 32:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_5 & ~(a == c | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed: 1-step and 4-step PRNGs did not agree!\n    at PRNGSpec.scala:36 assert(a === c, \"1-step and 4-step PRNGs did not agree!\")\n"
            ); // @[PRNGSpec.scala 36:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_5 & ~(a == c | reset)) begin
          $fatal; // @[PRNGSpec.scala 36:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (done_wrap_wrap & ~reset) begin
          $finish; // @[PRNGSpec.scala 40:9]
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
  count2 = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  count4 = _RAND_1[1:0];
  _RAND_2 = {1{`RANDOM}};
  done_value = _RAND_2[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
