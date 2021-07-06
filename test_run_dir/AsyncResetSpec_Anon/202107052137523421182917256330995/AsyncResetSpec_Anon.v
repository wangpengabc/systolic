module AsyncResetSpec_Anon(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] reg_0; // @[AsyncResetSpec.scala 263:16]
  reg [7:0] reg_1; // @[AsyncResetSpec.scala 263:16]
  reg [7:0] reg_2; // @[AsyncResetSpec.scala 263:16]
  reg [7:0] reg_3; // @[AsyncResetSpec.scala 263:16]
  reg [1:0] count; // @[Counter.scala 60:40]
  wire  wrap_wrap = count == 2'h3; // @[Counter.scala 72:24]
  wire [1:0] _wrap_value_T_1 = count + 2'h1; // @[Counter.scala 76:24]
  wire  _T = count == 2'h0; // @[AsyncResetSpec.scala 266:19]
  wire [31:0] _T_1 = {reg_3,reg_2,reg_1,reg_0}; // @[AsyncResetSpec.scala 267:28]
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
        if (_T & ~(_T_1 == 32'hdeadbeef | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at AsyncResetSpec.scala:267 chisel3.assert(reg.asUInt === 0xdeadbeefL.U)\n"); // @[AsyncResetSpec.scala 267:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T & ~(_T_1 == 32'hdeadbeef | reset)) begin
          $fatal; // @[AsyncResetSpec.scala 267:23]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~_T & ~(_T_1 == 32'hbad0cad0 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at AsyncResetSpec.scala:269 chisel3.assert(reg.asUInt === 0xbad0cad0L.U)\n"); // @[AsyncResetSpec.scala 269:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~_T & ~(_T_1 == 32'hbad0cad0 | reset)) begin
          $fatal; // @[AsyncResetSpec.scala 269:23]
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
          $finish; // @[AsyncResetSpec.scala 271:25]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      reg_0 <= 8'hef;
    end else begin
      reg_0 <= 8'hd0;
    end
  end
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      reg_1 <= 8'hbe;
    end else begin
      reg_1 <= 8'hca;
    end
  end
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      reg_2 <= 8'had;
    end else begin
      reg_2 <= 8'hd0;
    end
  end
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      reg_3 <= 8'hde;
    end else begin
      reg_3 <= 8'hba;
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
  reg_0 = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  reg_1 = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  reg_2 = _RAND_2[7:0];
  _RAND_3 = {1{`RANDOM}};
  reg_3 = _RAND_3[7:0];
  _RAND_4 = {1{`RANDOM}};
  count = _RAND_4[1:0];
`endif // RANDOMIZE_REG_INIT
  if (reset) begin
    reg_0 = 8'hef;
  end
  if (reset) begin
    reg_1 = 8'hbe;
  end
  if (reset) begin
    reg_2 = 8'had;
  end
  if (reset) begin
    reg_3 = 8'hde;
  end
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
