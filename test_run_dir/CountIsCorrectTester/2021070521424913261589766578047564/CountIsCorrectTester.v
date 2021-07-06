module Queue(
  input        clock,
  input        reset,
  output       io_enq_ready,
  input        io_enq_valid,
  input        io_deq_ready,
  output       io_deq_valid,
  output [1:0] io_count
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] enq_ptr_value; // @[Counter.scala 60:40]
  reg [1:0] deq_ptr_value; // @[Counter.scala 60:40]
  reg  maybe_full; // @[Decoupled.scala 223:27]
  wire  ptr_match = enq_ptr_value == deq_ptr_value; // @[Decoupled.scala 225:33]
  wire  empty = ptr_match & ~maybe_full; // @[Decoupled.scala 226:25]
  wire  full = ptr_match & maybe_full; // @[Decoupled.scala 227:24]
  wire  do_enq = io_enq_ready & io_enq_valid; // @[Decoupled.scala 40:37]
  wire  do_deq = io_deq_ready & io_deq_valid; // @[Decoupled.scala 40:37]
  wire  wrap = enq_ptr_value == 2'h2; // @[Counter.scala 72:24]
  wire [1:0] _value_T_1 = enq_ptr_value + 2'h1; // @[Counter.scala 76:24]
  wire  wrap_1 = deq_ptr_value == 2'h2; // @[Counter.scala 72:24]
  wire [1:0] _value_T_3 = deq_ptr_value + 2'h1; // @[Counter.scala 76:24]
  wire [1:0] ptr_diff = enq_ptr_value - deq_ptr_value; // @[Decoupled.scala 267:32]
  wire [1:0] _io_count_T = maybe_full ? 2'h3 : 2'h0; // @[Decoupled.scala 272:24]
  wire [1:0] _io_count_T_3 = 2'h3 + ptr_diff; // @[Decoupled.scala 275:38]
  wire [1:0] _io_count_T_4 = deq_ptr_value > enq_ptr_value ? _io_count_T_3 : ptr_diff; // @[Decoupled.scala 274:24]
  assign io_enq_ready = ~full; // @[Decoupled.scala 243:19]
  assign io_deq_valid = ~empty; // @[Decoupled.scala 242:19]
  assign io_count = ptr_match ? _io_count_T : _io_count_T_4; // @[Decoupled.scala 271:20]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 60:40]
      enq_ptr_value <= 2'h0; // @[Counter.scala 60:40]
    end else if (do_enq) begin // @[Decoupled.scala 231:17]
      if (wrap) begin // @[Counter.scala 86:20]
        enq_ptr_value <= 2'h0; // @[Counter.scala 86:28]
      end else begin
        enq_ptr_value <= _value_T_1; // @[Counter.scala 76:15]
      end
    end
    if (reset) begin // @[Counter.scala 60:40]
      deq_ptr_value <= 2'h0; // @[Counter.scala 60:40]
    end else if (do_deq) begin // @[Decoupled.scala 235:17]
      if (wrap_1) begin // @[Counter.scala 86:20]
        deq_ptr_value <= 2'h0; // @[Counter.scala 86:28]
      end else begin
        deq_ptr_value <= _value_T_3; // @[Counter.scala 76:15]
      end
    end
    if (reset) begin // @[Decoupled.scala 223:27]
      maybe_full <= 1'h0; // @[Decoupled.scala 223:27]
    end else if (do_enq != do_deq) begin // @[Decoupled.scala 238:28]
      maybe_full <= do_enq; // @[Decoupled.scala 239:16]
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
  enq_ptr_value = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  deq_ptr_value = _RAND_1[1:0];
  _RAND_2 = {1{`RANDOM}};
  maybe_full = _RAND_2[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MaxPeriodFibonacciLFSR(
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
  wire  _T_2 = state_15 ^ state_13 ^ state_12 ^ state_10; // @[LFSR.scala 15:41]
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
    state_0 <= reset | _T_2; // @[PRNG.scala 47:{50,50}]
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
module CountIsCorrectTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire  q_clock; // @[QueueSpec.scala 66:17]
  wire  q_reset; // @[QueueSpec.scala 66:17]
  wire  q_io_enq_ready; // @[QueueSpec.scala 66:17]
  wire  q_io_enq_valid; // @[QueueSpec.scala 66:17]
  wire  q_io_deq_ready; // @[QueueSpec.scala 66:17]
  wire  q_io_deq_valid; // @[QueueSpec.scala 66:17]
  wire [1:0] q_io_count; // @[QueueSpec.scala 66:17]
  wire  q_io_deq_ready_prng_clock; // @[PRNG.scala 82:22]
  wire  q_io_deq_ready_prng_reset; // @[PRNG.scala 82:22]
  wire  q_io_deq_ready_prng_io_out_0; // @[PRNG.scala 82:22]
  wire  q_io_deq_ready_prng_io_out_1; // @[PRNG.scala 82:22]
  wire  q_io_deq_ready_prng_io_out_2; // @[PRNG.scala 82:22]
  wire  q_io_deq_ready_prng_io_out_3; // @[PRNG.scala 82:22]
  wire  q_io_deq_ready_prng_io_out_4; // @[PRNG.scala 82:22]
  wire  q_io_deq_ready_prng_io_out_5; // @[PRNG.scala 82:22]
  wire  q_io_deq_ready_prng_io_out_6; // @[PRNG.scala 82:22]
  wire  q_io_deq_ready_prng_io_out_7; // @[PRNG.scala 82:22]
  wire  q_io_deq_ready_prng_io_out_8; // @[PRNG.scala 82:22]
  wire  q_io_deq_ready_prng_io_out_9; // @[PRNG.scala 82:22]
  wire  q_io_deq_ready_prng_io_out_10; // @[PRNG.scala 82:22]
  wire  q_io_deq_ready_prng_io_out_11; // @[PRNG.scala 82:22]
  wire  q_io_deq_ready_prng_io_out_12; // @[PRNG.scala 82:22]
  wire  q_io_deq_ready_prng_io_out_13; // @[PRNG.scala 82:22]
  wire  q_io_deq_ready_prng_io_out_14; // @[PRNG.scala 82:22]
  wire  q_io_deq_ready_prng_io_out_15; // @[PRNG.scala 82:22]
  reg [4:0] value; // @[Counter.scala 60:40]
  reg [4:0] value_1; // @[Counter.scala 60:40]
  wire [7:0] q_io_deq_ready_lo = {q_io_deq_ready_prng_io_out_7,q_io_deq_ready_prng_io_out_6,q_io_deq_ready_prng_io_out_5
    ,q_io_deq_ready_prng_io_out_4,q_io_deq_ready_prng_io_out_3,q_io_deq_ready_prng_io_out_2,q_io_deq_ready_prng_io_out_1
    ,q_io_deq_ready_prng_io_out_0}; // @[PRNG.scala 86:17]
  wire [15:0] _q_io_deq_ready_T = {q_io_deq_ready_prng_io_out_15,q_io_deq_ready_prng_io_out_14,
    q_io_deq_ready_prng_io_out_13,q_io_deq_ready_prng_io_out_12,q_io_deq_ready_prng_io_out_11,
    q_io_deq_ready_prng_io_out_10,q_io_deq_ready_prng_io_out_9,q_io_deq_ready_prng_io_out_8,q_io_deq_ready_lo}; // @[PRNG.scala 86:17]
  wire  _T = q_io_enq_ready & q_io_enq_valid; // @[Decoupled.scala 40:37]
  wire  wrap = value == 5'h14; // @[Counter.scala 72:24]
  wire [4:0] _value_T_1 = value + 5'h1; // @[Counter.scala 76:24]
  wire [4:0] _T_2 = value - value_1; // @[QueueSpec.scala 79:40]
  wire [4:0] _GEN_24 = {{3'd0}, q_io_count}; // @[QueueSpec.scala 79:23]
  wire  _T_6 = ~(_GEN_24 == _T_2 | reset); // @[QueueSpec.scala 79:11]
  wire  _T_7 = q_io_deq_ready & q_io_deq_valid; // @[Decoupled.scala 40:37]
  wire  wrap_1 = value_1 == 5'h14; // @[Counter.scala 72:24]
  wire [4:0] _value_T_3 = value_1 + 5'h1; // @[Counter.scala 76:24]
  Queue q ( // @[QueueSpec.scala 66:17]
    .clock(q_clock),
    .reset(q_reset),
    .io_enq_ready(q_io_enq_ready),
    .io_enq_valid(q_io_enq_valid),
    .io_deq_ready(q_io_deq_ready),
    .io_deq_valid(q_io_deq_valid),
    .io_count(q_io_count)
  );
  MaxPeriodFibonacciLFSR q_io_deq_ready_prng ( // @[PRNG.scala 82:22]
    .clock(q_io_deq_ready_prng_clock),
    .reset(q_io_deq_ready_prng_reset),
    .io_out_0(q_io_deq_ready_prng_io_out_0),
    .io_out_1(q_io_deq_ready_prng_io_out_1),
    .io_out_2(q_io_deq_ready_prng_io_out_2),
    .io_out_3(q_io_deq_ready_prng_io_out_3),
    .io_out_4(q_io_deq_ready_prng_io_out_4),
    .io_out_5(q_io_deq_ready_prng_io_out_5),
    .io_out_6(q_io_deq_ready_prng_io_out_6),
    .io_out_7(q_io_deq_ready_prng_io_out_7),
    .io_out_8(q_io_deq_ready_prng_io_out_8),
    .io_out_9(q_io_deq_ready_prng_io_out_9),
    .io_out_10(q_io_deq_ready_prng_io_out_10),
    .io_out_11(q_io_deq_ready_prng_io_out_11),
    .io_out_12(q_io_deq_ready_prng_io_out_12),
    .io_out_13(q_io_deq_ready_prng_io_out_13),
    .io_out_14(q_io_deq_ready_prng_io_out_14),
    .io_out_15(q_io_deq_ready_prng_io_out_15)
  );
  assign q_clock = clock;
  assign q_reset = reset;
  assign q_io_enq_valid = value < 5'h14; // @[QueueSpec.scala 73:34]
  assign q_io_deq_ready = _q_io_deq_ready_T[11]; // @[QueueSpec.scala 74:29]
  assign q_io_deq_ready_prng_clock = clock;
  assign q_io_deq_ready_prng_reset = reset;
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 60:40]
      value <= 5'h0; // @[Counter.scala 60:40]
    end else if (_T) begin // @[QueueSpec.scala 77:25]
      if (wrap) begin // @[Counter.scala 86:20]
        value <= 5'h0; // @[Counter.scala 86:28]
      end else begin
        value <= _value_T_1; // @[Counter.scala 76:15]
      end
    end
    if (reset) begin // @[Counter.scala 60:40]
      value_1 <= 5'h0; // @[Counter.scala 60:40]
    end else if (_T_7) begin // @[QueueSpec.scala 81:25]
      if (wrap_1) begin // @[Counter.scala 86:20]
        value_1 <= 5'h0; // @[Counter.scala 86:28]
      end else begin
        value_1 <= _value_T_3; // @[Counter.scala 76:15]
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T & ~(_GEN_24 == _T_2 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at QueueSpec.scala:79 assert(q.io.count === (inCnt.value - outCnt.value))\n"); // @[QueueSpec.scala 79:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~(_GEN_24 == _T_2 | reset)) begin
          $fatal; // @[QueueSpec.scala 79:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_7 & _T_6) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at QueueSpec.scala:83 assert(q.io.count === (inCnt.value - outCnt.value))\n"); // @[QueueSpec.scala 83:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_7 & _T_6) begin
          $fatal; // @[QueueSpec.scala 83:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_1 & ~reset) begin
          $finish; // @[QueueSpec.scala 88:9]
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
  value = _RAND_0[4:0];
  _RAND_1 = {1{`RANDOM}};
  value_1 = _RAND_1[4:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
