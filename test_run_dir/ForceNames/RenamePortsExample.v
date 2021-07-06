module MyLeaf(
  input  [2:0] inn,
  output [2:0] out
);
  assign out = inn; // @[ForceNames.scala 36:9]
endmodule
module RenamePortsExample(
  input        clock,
  input        reset,
  input  [2:0] in,
  output [2:0] out
);
  wire [2:0] inst_inn; // @[ForceNames.scala 41:22]
  wire [2:0] inst_out; // @[ForceNames.scala 41:22]
  MyLeaf inst ( // @[ForceNames.scala 41:22]
    .inn(inst_inn),
    .out(inst_out)
  );
  assign out = inst_out; // @[ForceNames.scala 43:9]
  assign inst_inn = in; // @[ForceNames.scala 42:13]
endmodule
