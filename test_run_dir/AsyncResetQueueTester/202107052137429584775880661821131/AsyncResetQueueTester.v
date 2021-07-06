module Queue(
  input        clock,
  input        reset,
  output       io_enq_ready,
  output [2:0] io_count
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] enq_ptr_value; // @[Counter.scala 60:40]
  reg  maybe_full; // @[Decoupled.scala 223:27]
  wire  ptr_match = enq_ptr_value == 2'h0; // @[Decoupled.scala 225:33]
  wire  full = ptr_match & maybe_full; // @[Decoupled.scala 227:24]
  wire [1:0] _value_T_1 = enq_ptr_value + 2'h1; // @[Counter.scala 76:24]
  wire [1:0] ptr_diff = enq_ptr_value - 2'h0; // @[Decoupled.scala 267:32]
  wire [2:0] _io_count_T_1 = maybe_full & ptr_match ? 3'h4 : 3'h0; // @[Decoupled.scala 269:20]
  wire [2:0] _GEN_8 = {{1'd0}, ptr_diff}; // @[Decoupled.scala 269:62]
  assign io_enq_ready = ~full; // @[Decoupled.scala 243:19]
  assign io_count = _io_count_T_1 | _GEN_8; // @[Decoupled.scala 269:62]
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      enq_ptr_value <= 2'h0;
    end else if (io_enq_ready) begin
      enq_ptr_value <= _value_T_1;
    end
  end
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      maybe_full <= 1'h0;
    end else if (io_enq_ready) begin
      maybe_full <= io_enq_ready;
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
  maybe_full = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  if (reset) begin
    enq_ptr_value = 2'h0;
  end
  if (reset) begin
    maybe_full = 1'h0;
  end
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module AsyncResetQueueTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire  queue_clock; // @[AsyncResetSpec.scala 102:11]
  wire  queue_reset; // @[AsyncResetSpec.scala 102:11]
  wire  queue_io_enq_ready; // @[AsyncResetSpec.scala 102:11]
  wire [2:0] queue_io_count; // @[AsyncResetSpec.scala 102:11]
  reg [1:0] cDiv_value; // @[Counter.scala 60:40]
  wire [1:0] _cDiv_wrap_value_T_1 = cDiv_value + 2'h1; // @[Counter.scala 76:24]
  reg [3:0] count; // @[Counter.scala 60:40]
  wire  wrap_wrap = count == 4'hf; // @[Counter.scala 72:24]
  wire [3:0] _wrap_value_T_1 = count + 4'h1; // @[Counter.scala 76:24]
  reg  asyncResetNext; // @[AsyncResetSpec.scala 98:31]
  reg  doCheck; // @[AsyncResetSpec.scala 109:24]
  wire  _T = queue_io_count == 3'h3; // @[AsyncResetSpec.scala 110:24]
  Queue queue ( // @[AsyncResetSpec.scala 102:11]
    .clock(queue_clock),
    .reset(queue_reset),
    .io_enq_ready(queue_io_enq_ready),
    .io_count(queue_io_count)
  );
  assign queue_clock = cDiv_value == 2'h3; // @[AsyncResetSpec.scala 94:22]
  assign queue_reset = asyncResetNext; // @[AsyncResetSpec.scala 99:35]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 60:40]
      cDiv_value <= 2'h0; // @[Counter.scala 60:40]
    end else begin
      cDiv_value <= _cDiv_wrap_value_T_1;
    end
    if (reset) begin // @[Counter.scala 60:40]
      count <= 4'h0; // @[Counter.scala 60:40]
    end else begin
      count <= _wrap_value_T_1;
    end
    if (reset) begin // @[AsyncResetSpec.scala 98:31]
      asyncResetNext <= 1'h0; // @[AsyncResetSpec.scala 98:31]
    end else begin
      asyncResetNext <= _T;
    end
    if (reset) begin // @[AsyncResetSpec.scala 109:24]
      doCheck <= 1'h0; // @[AsyncResetSpec.scala 109:24]
    end else begin
      doCheck <= _T;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (doCheck & ~(queue_io_count == 3'h0 | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:115 assert(queue.io.count === 0.U)\n"); // @[AsyncResetSpec.scala 115:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (doCheck & ~(queue_io_count == 3'h0 | reset)) begin
          $fatal; // @[AsyncResetSpec.scala 115:11]
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
          $finish; // @[AsyncResetSpec.scala 119:9]
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
  cDiv_value = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  count = _RAND_1[3:0];
  _RAND_2 = {1{`RANDOM}};
  asyncResetNext = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  doCheck = _RAND_3[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
