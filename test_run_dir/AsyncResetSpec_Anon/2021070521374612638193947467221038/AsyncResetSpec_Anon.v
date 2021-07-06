module AsyncResetSpec_Anon(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [5:0] reg_; // @[AsyncResetSpec.scala 213:54]
  reg [1:0] count; // @[Counter.scala 60:40]
  wire  wrap_wrap = count == 2'h3; // @[Counter.scala 72:24]
  wire [1:0] _wrap_value_T_1 = count + 2'h1; // @[Counter.scala 76:24]
  wire  _T = count == 2'h0; // @[AsyncResetSpec.scala 215:19]
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
        if (_T & ~($signed(reg_) == 6'shc | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at AsyncResetSpec.scala:216 chisel3.assert(reg === 3.F(2.BP))\n"); // @[AsyncResetSpec.scala 216:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~($signed(reg_) == 6'shc | reset)) begin
          $fatal; // @[AsyncResetSpec.scala 216:23]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~_T & ~($signed(reg_) == -6'sh18 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at AsyncResetSpec.scala:218 chisel3.assert(reg === -6.0.F(2.BP))\n"); // @[AsyncResetSpec.scala 218:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~_T & ~($signed(reg_) == -6'sh18 | reset)) begin
          $fatal; // @[AsyncResetSpec.scala 218:23]
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
          $finish; // @[AsyncResetSpec.scala 220:25]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      reg_ <= 6'shc;
    end else begin
      reg_ <= -6'sh18;
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
  reg_ = _RAND_0[5:0];
  _RAND_1 = {1{`RANDOM}};
  count = _RAND_1[1:0];
`endif // RANDOMIZE_REG_INIT
  if (reset) begin
    reg_ = 6'shc;
  end
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
