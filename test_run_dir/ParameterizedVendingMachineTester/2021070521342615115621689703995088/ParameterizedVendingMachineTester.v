module VendingMachineGenerator(
  input   clock,
  input   reset,
  input   io_inputs_0,
  output  io_dispense
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] value; // @[VendingMachineGenerator.scala 56:22]
  wire  doDispense = value >= 3'h6; // @[VendingMachineGenerator.scala 58:26]
  wire [2:0] incValue = io_inputs_0 ? 3'h1 : 3'h0; // @[VendingMachineGenerator.scala 67:{29,40}]
  wire [2:0] _value_T_1 = value + incValue; // @[VendingMachineGenerator.scala 63:20]
  assign io_dispense = value >= 3'h6; // @[VendingMachineGenerator.scala 58:26]
  always @(posedge clock) begin
    if (reset) begin // @[VendingMachineGenerator.scala 56:22]
      value <= 3'h0; // @[VendingMachineGenerator.scala 56:22]
    end else if (doDispense) begin // @[VendingMachineGenerator.scala 60:21]
      value <= 3'h0; // @[VendingMachineGenerator.scala 61:11]
    end else begin
      value <= _value_T_1; // @[VendingMachineGenerator.scala 63:11]
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
  value = _RAND_0[2:0];
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
  wire  dut_io_dispense; // @[VendingMachineGenerator.scala 78:19]
  reg [6:0] idx; // @[Counter.scala 60:40]
  wire  wrap_wrap = idx == 7'h64; // @[Counter.scala 72:24]
  wire [6:0] _wrap_value_T_1 = idx + 7'h1; // @[Counter.scala 76:24]
  wire  _GEN_10 = 7'h7 == idx ? 1'h0 : 7'h6 == idx | (7'h5 == idx | (7'h4 == idx | (7'h3 == idx | 7'h2 == idx))); // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_12 = 7'h9 == idx ? 1'h0 : 7'h8 == idx | _GEN_10; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_13 = 7'ha == idx ? 1'h0 : _GEN_12; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_15 = 7'hc == idx ? 1'h0 : 7'hb == idx | _GEN_13; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_17 = 7'he == idx ? 1'h0 : 7'hd == idx | _GEN_15; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_19 = 7'h10 == idx ? 1'h0 : 7'hf == idx | _GEN_17; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_214 = 7'h14 == idx; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_24 = 7'h15 == idx ? 1'h0 : 7'h14 == idx | (7'h13 == idx | (7'h12 == idx | (7'h11 == idx | _GEN_19))); // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_26 = 7'h17 == idx ? 1'h0 : 7'h16 == idx | _GEN_24; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_28 = 7'h19 == idx ? 1'h0 : 7'h18 == idx | _GEN_26; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_30 = 7'h1b == idx ? 1'h0 : 7'h1a == idx | _GEN_28; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_31 = 7'h1c == idx ? 1'h0 : _GEN_30; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_32 = 7'h1d == idx ? 1'h0 : _GEN_31; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_34 = 7'h1f == idx ? 1'h0 : 7'h1e == idx | _GEN_32; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_35 = 7'h20 == idx ? 1'h0 : _GEN_34; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_36 = 7'h21 == idx ? 1'h0 : _GEN_35; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_37 = 7'h22 == idx ? 1'h0 : _GEN_36; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_38 = 7'h23 == idx ? 1'h0 : _GEN_37; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_39 = 7'h24 == idx ? 1'h0 : _GEN_38; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_42 = 7'h27 == idx ? 1'h0 : 7'h26 == idx | (7'h25 == idx | _GEN_39); // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_45 = 7'h2a == idx ? 1'h0 : 7'h29 == idx | (7'h28 == idx | _GEN_42); // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_46 = 7'h2b == idx ? 1'h0 : _GEN_45; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_50 = 7'h2f == idx ? 1'h0 : 7'h2e == idx | (7'h2d == idx | (7'h2c == idx | _GEN_46)); // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_51 = 7'h30 == idx ? 1'h0 : _GEN_50; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_52 = 7'h31 == idx ? 1'h0 : _GEN_51; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_53 = 7'h32 == idx ? 1'h0 : _GEN_52; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_54 = 7'h33 == idx ? 1'h0 : _GEN_53; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_55 = 7'h34 == idx ? 1'h0 : _GEN_54; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_57 = 7'h36 == idx ? 1'h0 : 7'h35 == idx | _GEN_55; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_58 = 7'h37 == idx ? 1'h0 : _GEN_57; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_60 = 7'h39 == idx ? 1'h0 : 7'h38 == idx | _GEN_58; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_61 = 7'h3a == idx ? 1'h0 : _GEN_60; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_63 = 7'h3c == idx ? 1'h0 : 7'h3b == idx | _GEN_61; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_64 = 7'h3d == idx ? 1'h0 : _GEN_63; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_65 = 7'h3e == idx ? 1'h0 : _GEN_64; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_66 = 7'h3f == idx ? 1'h0 : _GEN_65; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_69 = 7'h42 == idx ? 1'h0 : 7'h41 == idx | (7'h40 == idx | _GEN_66); // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_70 = 7'h43 == idx ? 1'h0 : _GEN_69; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_72 = 7'h45 == idx ? 1'h0 : 7'h44 == idx | _GEN_70; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_74 = 7'h47 == idx ? 1'h0 : 7'h46 == idx | _GEN_72; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_75 = 7'h48 == idx ? 1'h0 : _GEN_74; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_80 = 7'h4d == idx ? 1'h0 : 7'h4c == idx | (7'h4b == idx | (7'h4a == idx | (7'h49 == idx | _GEN_75))); // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_239 = 7'h50 == idx; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_246 = 7'h57 == idx; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_92 = 7'h59 == idx ? 1'h0 : 7'h58 == idx | (7'h57 == idx | (7'h56 == idx | (7'h55 == idx | (7'h54 == idx | (7'h53
     == idx | (7'h52 == idx | (7'h51 == idx | (7'h50 == idx | (7'h4f == idx | (7'h4e == idx | _GEN_80)))))))))); // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_93 = 7'h5a == idx ? 1'h0 : _GEN_92; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_94 = 7'h5b == idx ? 1'h0 : _GEN_93; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_97 = 7'h5e == idx ? 1'h0 : 7'h5d == idx | (7'h5c == idx | _GEN_94); // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_100 = 7'h61 == idx ? 1'h0 : 7'h60 == idx | (7'h5f == idx | _GEN_97); // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_253 = 7'h63 == idx; // @[VendingMachineGenerator.scala 96:{34,34}]
  wire  _GEN_113 = 7'ha == idx ? 1'h0 : 7'h9 == idx; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_114 = 7'hb == idx ? 1'h0 : _GEN_113; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_115 = 7'hc == idx ? 1'h0 : _GEN_114; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_116 = 7'hd == idx ? 1'h0 : _GEN_115; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_117 = 7'he == idx ? 1'h0 : _GEN_116; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_118 = 7'hf == idx ? 1'h0 : _GEN_117; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_119 = 7'h10 == idx ? 1'h0 : _GEN_118; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_120 = 7'h11 == idx ? 1'h0 : _GEN_119; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_121 = 7'h12 == idx ? 1'h0 : _GEN_120; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_122 = 7'h13 == idx ? 1'h0 : _GEN_121; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_124 = 7'h15 == idx ? 1'h0 : _GEN_214 | _GEN_122; // @[VendingMachineGenerator.scala 97:{26,26}]
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
  wire  _GEN_143 = 7'h28 == idx ? 1'h0 : 7'h27 == idx | _GEN_141; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_144 = 7'h29 == idx ? 1'h0 : _GEN_143; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_145 = 7'h2a == idx ? 1'h0 : _GEN_144; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_146 = 7'h2b == idx ? 1'h0 : _GEN_145; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_147 = 7'h2c == idx ? 1'h0 : _GEN_146; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_148 = 7'h2d == idx ? 1'h0 : _GEN_147; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_149 = 7'h2e == idx ? 1'h0 : _GEN_148; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_150 = 7'h2f == idx ? 1'h0 : _GEN_149; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_151 = 7'h30 == idx ? 1'h0 : _GEN_150; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_152 = 7'h31 == idx ? 1'h0 : _GEN_151; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_153 = 7'h32 == idx ? 1'h0 : _GEN_152; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_154 = 7'h33 == idx ? 1'h0 : _GEN_153; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_155 = 7'h34 == idx ? 1'h0 : _GEN_154; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_156 = 7'h35 == idx ? 1'h0 : _GEN_155; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_158 = 7'h37 == idx ? 1'h0 : 7'h36 == idx | _GEN_156; // @[VendingMachineGenerator.scala 97:{26,26}]
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
  wire  _GEN_173 = 7'h46 == idx ? 1'h0 : _GEN_172; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_175 = 7'h48 == idx ? 1'h0 : 7'h47 == idx | _GEN_173; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_176 = 7'h49 == idx ? 1'h0 : _GEN_175; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_177 = 7'h4a == idx ? 1'h0 : _GEN_176; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_178 = 7'h4b == idx ? 1'h0 : _GEN_177; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_179 = 7'h4c == idx ? 1'h0 : _GEN_178; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_180 = 7'h4d == idx ? 1'h0 : _GEN_179; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_181 = 7'h4e == idx ? 1'h0 : _GEN_180; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_182 = 7'h4f == idx ? 1'h0 : _GEN_181; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_184 = 7'h51 == idx ? 1'h0 : _GEN_239 | _GEN_182; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_185 = 7'h52 == idx ? 1'h0 : _GEN_184; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_186 = 7'h53 == idx ? 1'h0 : _GEN_185; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_187 = 7'h54 == idx ? 1'h0 : _GEN_186; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_188 = 7'h55 == idx ? 1'h0 : _GEN_187; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_189 = 7'h56 == idx ? 1'h0 : _GEN_188; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_191 = 7'h58 == idx ? 1'h0 : _GEN_246 | _GEN_189; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_192 = 7'h59 == idx ? 1'h0 : _GEN_191; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_193 = 7'h5a == idx ? 1'h0 : _GEN_192; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_194 = 7'h5b == idx ? 1'h0 : _GEN_193; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_195 = 7'h5c == idx ? 1'h0 : _GEN_194; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_196 = 7'h5d == idx ? 1'h0 : _GEN_195; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_197 = 7'h5e == idx ? 1'h0 : _GEN_196; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_198 = 7'h5f == idx ? 1'h0 : _GEN_197; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_199 = 7'h60 == idx ? 1'h0 : _GEN_198; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_200 = 7'h61 == idx ? 1'h0 : _GEN_199; // @[VendingMachineGenerator.scala 97:{26,26}]
  wire  _GEN_201 = 7'h62 == idx ? 1'h0 : _GEN_200; // @[VendingMachineGenerator.scala 97:{26,26}]
  VendingMachineGenerator dut ( // @[VendingMachineGenerator.scala 78:19]
    .clock(dut_clock),
    .reset(dut_reset),
    .io_inputs_0(dut_io_inputs_0),
    .io_dispense(dut_io_dispense)
  );
  assign dut_clock = clock;
  assign dut_reset = reset;
  assign dut_io_inputs_0 = 7'h63 == idx | (7'h62 == idx | _GEN_100); // @[VendingMachineGenerator.scala 96:{34,34}]
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
        if (~(dut_io_dispense == (_GEN_253 | _GEN_201) | reset)) begin
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
        if (~(dut_io_dispense == (_GEN_253 | _GEN_201) | reset)) begin
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
