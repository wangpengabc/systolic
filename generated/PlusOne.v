module PlusOne(
  input         clock,
  input         reset,
  input  [31:0] io_in,
  output [31:0] io_out
);
  assign io_out = io_in + 32'h1; // @[Module.scala 20:19]
endmodule
