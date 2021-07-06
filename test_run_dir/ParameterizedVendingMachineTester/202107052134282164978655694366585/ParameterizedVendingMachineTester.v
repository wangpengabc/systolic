module VendingMachineGenerator(
  input   clock,
  input   reset,
  input   io_inputs_0,
  input   io_inputs_1,
  input   io_inputs_2,
  input   io_inputs_3,
  output  io_dispense
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] value; // @[VendingMachineGenerator.scala 56:22]
  wire  doDispense = value >= 8'h96; // @[VendingMachineGenerator.scala 58:26]
  wire [7:0] _GEN_1 = io_inputs_0 ? 8'h1 : 8'h0; // @[VendingMachineGenerator.scala 67:{29,40}]
  wire [7:0] _GEN_2 = io_inputs_1 ? 8'h5 : _GEN_1; // @[VendingMachineGenerator.scala 67:{29,40}]
  wire [7:0] _GEN_3 = io_inputs_2 ? 8'ha : _GEN_2; // @[VendingMachineGenerator.scala 67:{29,40}]
  wire [7:0] incValue = io_inputs_3 ? 8'h19 : _GEN_3; // @[VendingMachineGenerator.scala 67:{29,40}]
  wire [7:0] _value_T_1 = value + incValue; // @[VendingMachineGenerator.scala 63:20]
  assign io_dispense = value >= 8'h96; // @[VendingMachineGenerator.scala 58:26]
  always @(posedge clock) begin
    if (reset) begin // @[VendingMachineGenerator.scala 56:22]
      value <= 8'h0; // @[VendingMachineGenerator.scala 56:22]
    end else if (doDispense) begin // @[VendingMachineGenerator.scala 60:21]
      value <= 8'h0; // @[VendingMachineGenerator.scala 61:11]
    end else begin
      value <= _value_T_1; // @[VendingMachineGenerator.scala 63:11]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_inputs_0 & ~(~io_inputs_1 & ~io_inputs_2 & ~io_inputs_3 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Only 1 coin can be input in a given cycle!\n    at VendingMachineGenerator.scala:38 assert(io.inputs.filterNot(_ == input).map(!_).reduce(_ && _),\n"
            ); // @[VendingMachineGenerator.scala 38:15]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (io_inputs_0 & ~(~io_inputs_1 & ~io_inputs_2 & ~io_inputs_3 | reset)) begin
          $fatal; // @[VendingMachineGenerator.scala 38:15]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_inputs_1 & ~(~io_inputs_0 & ~io_inputs_2 & ~io_inputs_3 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Only 1 coin can be input in a given cycle!\n    at VendingMachineGenerator.scala:38 assert(io.inputs.filterNot(_ == input).map(!_).reduce(_ && _),\n"
            ); // @[VendingMachineGenerator.scala 38:15]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (io_inputs_1 & ~(~io_inputs_0 & ~io_inputs_2 & ~io_inputs_3 | reset)) begin
          $fatal; // @[VendingMachineGenerator.scala 38:15]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_inputs_2 & ~(~io_inputs_0 & ~io_inputs_1 & ~io_inputs_3 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Only 1 coin can be input in a given cycle!\n    at VendingMachineGenerator.scala:38 assert(io.inputs.filterNot(_ == input).map(!_).reduce(_ && _),\n"
            ); // @[VendingMachineGenerator.scala 38:15]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (io_inputs_2 & ~(~io_inputs_0 & ~io_inputs_1 & ~io_inputs_3 | reset)) begin
          $fatal; // @[VendingMachineGenerator.scala 38:15]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_inputs_3 & ~(~io_inputs_0 & ~io_inputs_1 & ~io_inputs_2 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Only 1 coin can be input in a given cycle!\n    at VendingMachineGenerator.scala:38 assert(io.inputs.filterNot(_ == input).map(!_).reduce(_ && _),\n"
            ); // @[VendingMachineGenerator.scala 38:15]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (io_inputs_3 & ~(~io_inputs_0 & ~io_inputs_1 & ~io_inputs_2 | reset)) begin
          $fatal; // @[VendingMachineGenerator.scala 38:15]
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
  value = _RAND_0[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ParameterizedVendingMachineTester(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  dut_clock; // @[VendingMachineGenerator.scala 78:19]
  wire  dut_reset; // @[VendingMachineGenerator.scala 78:19]
  wire  dut_io_inputs_0; // @[VendingMachineGenerator.scala 78:19]
  wire  dut_io_inputs_1; // @[VendingMachineGenerator.scala 78:19]
  wire  dut_io_inputs_2; // @[VendingMachineGenerator.scala 78:19]
  wire  dut_io_inputs_3; // @[VendingMachineGenerator.scala 78:19]
  wire  dut_io_dispense; // @[VendingMachineGenerator.scala 78:19]
  reg [6:0] idx; // @[Counter.scala 60:40]
  wire  wrap_wrap = idx == 7'h64; // @[Counter.scala 72:24]
  wire [6:0] _wrap_value_T_1 = idx + 7'h1; // @[Counter.scala 76:24]
  wire [3:0] _GEN_4 = 7'h1 == idx ? 4'h2 : 4'h8; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_5 = 7'h2 == idx ? 4'h8 : _GEN_4; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_6 = 7'h3 == idx ? 4'h4 : _GEN_5; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_7 = 7'h4 == idx ? 4'h2 : _GEN_6; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_8 = 7'h5 == idx ? 4'h8 : _GEN_7; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_9 = 7'h6 == idx ? 4'h2 : _GEN_8; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_10 = 7'h7 == idx ? 4'h4 : _GEN_9; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_11 = 7'h8 == idx ? 4'h0 : _GEN_10; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_12 = 7'h9 == idx ? 4'h0 : _GEN_11; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_13 = 7'ha == idx ? 4'h8 : _GEN_12; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_14 = 7'hb == idx ? 4'h1 : _GEN_13; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_15 = 7'hc == idx ? 4'h0 : _GEN_14; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_16 = 7'hd == idx ? 4'h1 : _GEN_15; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_17 = 7'he == idx ? 4'h0 : _GEN_16; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_18 = 7'hf == idx ? 4'h1 : _GEN_17; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_19 = 7'h10 == idx ? 4'h1 : _GEN_18; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_20 = 7'h11 == idx ? 4'h2 : _GEN_19; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_21 = 7'h12 == idx ? 4'h1 : _GEN_20; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_22 = 7'h13 == idx ? 4'h2 : _GEN_21; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_23 = 7'h14 == idx ? 4'h2 : _GEN_22; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_24 = 7'h15 == idx ? 4'h0 : _GEN_23; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_25 = 7'h16 == idx ? 4'h2 : _GEN_24; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_26 = 7'h17 == idx ? 4'h0 : _GEN_25; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_27 = 7'h18 == idx ? 4'h4 : _GEN_26; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_28 = 7'h19 == idx ? 4'h4 : _GEN_27; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_29 = 7'h1a == idx ? 4'h0 : _GEN_28; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_30 = 7'h1b == idx ? 4'h4 : _GEN_29; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_31 = 7'h1c == idx ? 4'h4 : _GEN_30; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_32 = 7'h1d == idx ? 4'h4 : _GEN_31; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_33 = 7'h1e == idx ? 4'h4 : _GEN_32; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_34 = 7'h1f == idx ? 4'h2 : _GEN_33; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_35 = 7'h20 == idx ? 4'h2 : _GEN_34; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_36 = 7'h21 == idx ? 4'h1 : _GEN_35; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_37 = 7'h22 == idx ? 4'h0 : _GEN_36; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_38 = 7'h23 == idx ? 4'h8 : _GEN_37; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_39 = 7'h24 == idx ? 4'h0 : _GEN_38; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_40 = 7'h25 == idx ? 4'h0 : _GEN_39; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_41 = 7'h26 == idx ? 4'h4 : _GEN_40; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_42 = 7'h27 == idx ? 4'h8 : _GEN_41; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_43 = 7'h28 == idx ? 4'h1 : _GEN_42; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_44 = 7'h29 == idx ? 4'h0 : _GEN_43; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_45 = 7'h2a == idx ? 4'h2 : _GEN_44; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_46 = 7'h2b == idx ? 4'h4 : _GEN_45; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_47 = 7'h2c == idx ? 4'h0 : _GEN_46; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_48 = 7'h2d == idx ? 4'h0 : _GEN_47; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_49 = 7'h2e == idx ? 4'h4 : _GEN_48; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_50 = 7'h2f == idx ? 4'h0 : _GEN_49; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_51 = 7'h30 == idx ? 4'h0 : _GEN_50; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_52 = 7'h31 == idx ? 4'h4 : _GEN_51; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_53 = 7'h32 == idx ? 4'h4 : _GEN_52; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_54 = 7'h33 == idx ? 4'h2 : _GEN_53; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_55 = 7'h34 == idx ? 4'h0 : _GEN_54; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_56 = 7'h35 == idx ? 4'h2 : _GEN_55; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_57 = 7'h36 == idx ? 4'h4 : _GEN_56; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_58 = 7'h37 == idx ? 4'h8 : _GEN_57; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_59 = 7'h38 == idx ? 4'h2 : _GEN_58; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_60 = 7'h39 == idx ? 4'h1 : _GEN_59; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_61 = 7'h3a == idx ? 4'h1 : _GEN_60; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_62 = 7'h3b == idx ? 4'h0 : _GEN_61; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_63 = 7'h3c == idx ? 4'h2 : _GEN_62; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_64 = 7'h3d == idx ? 4'h0 : _GEN_63; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_65 = 7'h3e == idx ? 4'h1 : _GEN_64; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_66 = 7'h3f == idx ? 4'h0 : _GEN_65; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_67 = 7'h40 == idx ? 4'h8 : _GEN_66; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_68 = 7'h41 == idx ? 4'h0 : _GEN_67; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_69 = 7'h42 == idx ? 4'h0 : _GEN_68; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_70 = 7'h43 == idx ? 4'h4 : _GEN_69; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_71 = 7'h44 == idx ? 4'h8 : _GEN_70; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_72 = 7'h45 == idx ? 4'h8 : _GEN_71; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_73 = 7'h46 == idx ? 4'h0 : _GEN_72; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_74 = 7'h47 == idx ? 4'h1 : _GEN_73; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_75 = 7'h48 == idx ? 4'h1 : _GEN_74; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_76 = 7'h49 == idx ? 4'h2 : _GEN_75; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_77 = 7'h4a == idx ? 4'h2 : _GEN_76; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_78 = 7'h4b == idx ? 4'h4 : _GEN_77; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_79 = 7'h4c == idx ? 4'h1 : _GEN_78; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_80 = 7'h4d == idx ? 4'h1 : _GEN_79; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_81 = 7'h4e == idx ? 4'h0 : _GEN_80; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_82 = 7'h4f == idx ? 4'h1 : _GEN_81; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_83 = 7'h50 == idx ? 4'h2 : _GEN_82; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_84 = 7'h51 == idx ? 4'h2 : _GEN_83; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_85 = 7'h52 == idx ? 4'h2 : _GEN_84; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_86 = 7'h53 == idx ? 4'h8 : _GEN_85; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_87 = 7'h54 == idx ? 4'h4 : _GEN_86; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_88 = 7'h55 == idx ? 4'h2 : _GEN_87; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_89 = 7'h56 == idx ? 4'h0 : _GEN_88; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_90 = 7'h57 == idx ? 4'h8 : _GEN_89; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_91 = 7'h58 == idx ? 4'h2 : _GEN_90; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_92 = 7'h59 == idx ? 4'h8 : _GEN_91; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_93 = 7'h5a == idx ? 4'h4 : _GEN_92; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_94 = 7'h5b == idx ? 4'h2 : _GEN_93; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_95 = 7'h5c == idx ? 4'h4 : _GEN_94; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_96 = 7'h5d == idx ? 4'h8 : _GEN_95; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_97 = 7'h5e == idx ? 4'h1 : _GEN_96; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_98 = 7'h5f == idx ? 4'h8 : _GEN_97; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_99 = 7'h60 == idx ? 4'h2 : _GEN_98; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_100 = 7'h61 == idx ? 4'h2 : _GEN_99; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_101 = 7'h62 == idx ? 4'h4 : _GEN_100; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire [3:0] _GEN_102 = 7'h63 == idx ? 4'h0 : _GEN_101; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_124 = 7'h15 == idx ? 1'h0 : 7'h14 == idx; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_125 = 7'h16 == idx ? 1'h0 : _GEN_124; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_126 = 7'h17 == idx ? 1'h0 : _GEN_125; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_127 = 7'h18 == idx ? 1'h0 : _GEN_126; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_128 = 7'h19 == idx ? 1'h0 : _GEN_127; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_129 = 7'h1a == idx ? 1'h0 : _GEN_128; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_130 = 7'h1b == idx ? 1'h0 : _GEN_129; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_131 = 7'h1c == idx ? 1'h0 : _GEN_130; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_132 = 7'h1d == idx ? 1'h0 : _GEN_131; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_133 = 7'h1e == idx ? 1'h0 : _GEN_132; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_134 = 7'h1f == idx ? 1'h0 : _GEN_133; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_135 = 7'h20 == idx ? 1'h0 : _GEN_134; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_136 = 7'h21 == idx ? 1'h0 : _GEN_135; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_137 = 7'h22 == idx ? 1'h0 : _GEN_136; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_138 = 7'h23 == idx ? 1'h0 : _GEN_137; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_139 = 7'h24 == idx ? 1'h0 : _GEN_138; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_140 = 7'h25 == idx ? 1'h0 : _GEN_139; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_141 = 7'h26 == idx ? 1'h0 : _GEN_140; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_142 = 7'h27 == idx ? 1'h0 : _GEN_141; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_143 = 7'h28 == idx ? 1'h0 : _GEN_142; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_144 = 7'h29 == idx ? 1'h0 : _GEN_143; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_145 = 7'h2a == idx ? 1'h0 : _GEN_144; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_146 = 7'h2b == idx ? 1'h0 : _GEN_145; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_148 = 7'h2d == idx ? 1'h0 : 7'h2c == idx | _GEN_146; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_149 = 7'h2e == idx ? 1'h0 : _GEN_148; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_150 = 7'h2f == idx ? 1'h0 : _GEN_149; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_151 = 7'h30 == idx ? 1'h0 : _GEN_150; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_152 = 7'h31 == idx ? 1'h0 : _GEN_151; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_153 = 7'h32 == idx ? 1'h0 : _GEN_152; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_154 = 7'h33 == idx ? 1'h0 : _GEN_153; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_155 = 7'h34 == idx ? 1'h0 : _GEN_154; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_156 = 7'h35 == idx ? 1'h0 : _GEN_155; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_157 = 7'h36 == idx ? 1'h0 : _GEN_156; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_158 = 7'h37 == idx ? 1'h0 : _GEN_157; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_159 = 7'h38 == idx ? 1'h0 : _GEN_158; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_160 = 7'h39 == idx ? 1'h0 : _GEN_159; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_161 = 7'h3a == idx ? 1'h0 : _GEN_160; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_162 = 7'h3b == idx ? 1'h0 : _GEN_161; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_163 = 7'h3c == idx ? 1'h0 : _GEN_162; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_164 = 7'h3d == idx ? 1'h0 : _GEN_163; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_165 = 7'h3e == idx ? 1'h0 : _GEN_164; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_166 = 7'h3f == idx ? 1'h0 : _GEN_165; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_167 = 7'h40 == idx ? 1'h0 : _GEN_166; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_168 = 7'h41 == idx ? 1'h0 : _GEN_167; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_169 = 7'h42 == idx ? 1'h0 : _GEN_168; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_170 = 7'h43 == idx ? 1'h0 : _GEN_169; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_171 = 7'h44 == idx ? 1'h0 : _GEN_170; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_172 = 7'h45 == idx ? 1'h0 : _GEN_171; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_174 = 7'h47 == idx ? 1'h0 : 7'h46 == idx | _GEN_172; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_175 = 7'h48 == idx ? 1'h0 : _GEN_174; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_176 = 7'h49 == idx ? 1'h0 : _GEN_175; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_177 = 7'h4a == idx ? 1'h0 : _GEN_176; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_178 = 7'h4b == idx ? 1'h0 : _GEN_177; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_179 = 7'h4c == idx ? 1'h0 : _GEN_178; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_180 = 7'h4d == idx ? 1'h0 : _GEN_179; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_181 = 7'h4e == idx ? 1'h0 : _GEN_180; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_182 = 7'h4f == idx ? 1'h0 : _GEN_181; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_183 = 7'h50 == idx ? 1'h0 : _GEN_182; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_184 = 7'h51 == idx ? 1'h0 : _GEN_183; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_185 = 7'h52 == idx ? 1'h0 : _GEN_184; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_186 = 7'h53 == idx ? 1'h0 : _GEN_185; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_187 = 7'h54 == idx ? 1'h0 : _GEN_186; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_188 = 7'h55 == idx ? 1'h0 : _GEN_187; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_189 = 7'h56 == idx ? 1'h0 : _GEN_188; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_190 = 7'h57 == idx ? 1'h0 : _GEN_189; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_191 = 7'h58 == idx ? 1'h0 : _GEN_190; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_192 = 7'h59 == idx ? 1'h0 : _GEN_191; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_193 = 7'h5a == idx ? 1'h0 : _GEN_192; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_194 = 7'h5b == idx ? 1'h0 : _GEN_193; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_196 = 7'h5d == idx ? 1'h0 : 7'h5c == idx | _GEN_194; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_197 = 7'h5e == idx ? 1'h0 : _GEN_196; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_198 = 7'h5f == idx ? 1'h0 : _GEN_197; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_199 = 7'h60 == idx ? 1'h0 : _GEN_198; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_200 = 7'h61 == idx ? 1'h0 : _GEN_199; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_201 = 7'h62 == idx ? 1'h0 : _GEN_200; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_202 = 7'h63 == idx ? 1'h0 : _GEN_201; // @[VendingMachineGenerator.scala 97:{26,26}]
  VendingMachineGenerator dut ( // @[VendingMachineGenerator.scala 78:19]
    .clock(dut_clock),
    .reset(dut_reset),
    .io_inputs_0(dut_io_inputs_0),
    .io_inputs_1(dut_io_inputs_1),
    .io_inputs_2(dut_io_inputs_2),
    .io_inputs_3(dut_io_inputs_3),
    .io_dispense(dut_io_dispense)
  );
  assign dut_clock = clock;
  assign dut_reset = reset;
  assign dut_io_inputs_0 = _GEN_102[0]; // @[VendingMachineGenerator.scala 96:34]
  assign dut_io_inputs_1 = _GEN_102[1]; // @[VendingMachineGenerator.scala 96:34]
  assign dut_io_inputs_2 = _GEN_102[2]; // @[VendingMachineGenerator.scala 96:34]
  assign dut_io_inputs_3 = _GEN_102[3]; // @[VendingMachineGenerator.scala 96:34]
  always @(posedge clock) begin
    if (reset) begin // @[Counter.scala 60:40]
      idx <= 7'h0; // @[Counter.scala 60:40]
    end else if (wrap_wrap) begin // @[Counter.scala 86:20]
      idx <= 7'h0; // @[Counter.scala 86:28]
    end else begin
      idx <= _wrap_value_T_1; // @[Counter.scala 76:15]
    end
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (wrap_wrap & ~reset) begin
          $finish; // @[VendingMachineGenerator.scala 94:21]
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
          $finish; // @[VendingMachineGenerator.scala 94:29]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(dut_io_dispense == _GEN_202 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at VendingMachineGenerator.scala:97 assert(dut.io.dispense === expectedVec(idx))\n"); // @[VendingMachineGenerator.scala 97:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(dut_io_dispense == _GEN_202 | reset)) begin
          $fatal; // @[VendingMachineGenerator.scala 97:9]
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
  idx = _RAND_0[6:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
