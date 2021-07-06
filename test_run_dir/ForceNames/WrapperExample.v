module MyLeaf(
  input  [2:0] in,
  output [2:0] out
);
  assign out = in; // @[ForceNames.scala 36:9]
endmodule
module WrapperExample(
  input        clock,
  input        reset,
  input  [2:0] in,
  output [2:0] outt
);
  wire [2:0] inst_in;
  wire [2:0] inst_out;
  wire [2:0] inst_in; // @[ForceNames.scala 28:22]
  wire [2:0] inst_out; // @[ForceNames.scala 28:22]
  MyLeaf inst ( // @[ForceNames.scala 28:22]
    .in(inst_in),
    .out(inst_out)
  );
  assign inst_out = inst_out; // @[ForceNames.scala 31:9]
  assign inst_in = inst_in; // @[ForceNames.scala 30:13]
  assign outt = inst_out; // @[ForceNames.scala 22:9]
  assign inst_in = in; // @[ForceNames.scala 21:13]
endmodule
