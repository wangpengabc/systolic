module FooLFSR(
  input   clock,
  input   reset,
  input   io_seed_valid,
  output  io_out_0
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg  state_0; // @[PRNG.scala 47:50]
  wire  _GEN_4 = io_seed_valid ? 1'h0 : state_0; // @[PRNG.scala 65:25 66:11]
  assign io_out_0 = state_0; // @[PRNG.scala 69:10]
  always @(posedge clock) begin
    state_0 <= reset | _GEN_4; // @[PRNG.scala 47:{50,50}]
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
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module LFSRResetTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  lfsr_clock; // @[LFSRSpec.scala 80:20]
  wire  lfsr_reset; // @[LFSRSpec.scala 80:20]
  wire  lfsr_io_seed_valid; // @[LFSRSpec.scala 80:20]
  wire  lfsr_io_out_0; // @[LFSRSpec.scala 80:20]
  reg [2:0] count; // @[Counter.scala 60:40]
  wire  wrap_wrap = count == 3'h4; // @[Counter.scala 72:24]
  wire [2:0] _wrap_value_T_1 = count + 3'h1; // @[Counter.scala 76:24]
  wire  _T = count == 3'h2; // @[LFSRSpec.scala 91:15]
  wire [3:0] _T_1 = {2'h0,1'h0,lfsr_io_out_0}; // @[LFSRSpec.scala 92:24]
  FooLFSR lfsr ( // @[LFSRSpec.scala 80:20]
    .clock(lfsr_clock),
    .reset(lfsr_reset),
    .io_seed_valid(lfsr_io_seed_valid),
    .io_out_0(lfsr_io_out_0)
  );
  assign lfsr_clock = clock;
  assign lfsr_reset = count == 3'h3; // @[LFSRSpec.scala 95:23]
  assign lfsr_io_seed_valid = count == 3'h1; // @[LFSRSpec.scala 87:31]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 60:40]
      count <= 3'h0; // @[Counter.scala 60:40]
    end else if (wrap_wrap) begin // @[Counter.scala 86:20]
      count <= 3'h0; // @[Counter.scala 86:28]
    end else begin
      count <= _wrap_value_T_1; // @[Counter.scala 76:15]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T & ~(_T_1 == 4'h0 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed: LFSR is NOT locked up, but should be!\n    at LFSRSpec.scala:92 assert(lfsr.io.out.asUInt === lockUpValue.U, \"LFSR is NOT locked up, but should be!\")\n"
            ); // @[LFSRSpec.scala 92:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~(_T_1 == 4'h0 | reset)) begin
          $fatal; // @[LFSRSpec.scala 92:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (wrap_wrap & ~(_T_1 != 4'h0 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed: LFSR is locked up, but should not be after reset!\n    at LFSRSpec.scala:98 assert(lfsr.io.out.asUInt =/= lockUpValue.U, \"LFSR is locked up, but should not be after reset!\")\n"
            ); // @[LFSRSpec.scala 98:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & ~(_T_1 != 4'h0 | reset)) begin
          $fatal; // @[LFSRSpec.scala 98:11]
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
          $finish; // @[LFSRSpec.scala 102:9]
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
  count = _RAND_0[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
