module BlackBoxTester(
  input   clock,
  input   reset
);
  wire  blackBoxPos_in; // @[BlackBox.scala 52:27]
  wire  blackBoxPos_out; // @[BlackBox.scala 52:27]
  wire  blackBoxNeg_in; // @[BlackBox.scala 53:27]
  wire  blackBoxNeg_out; // @[BlackBox.scala 53:27]
  BlackBoxInverter blackBoxPos ( // @[BlackBox.scala 52:27]
    .in(blackBoxPos_in),
    .out(blackBoxPos_out)
  );
  BlackBoxInverter blackBoxNeg ( // @[BlackBox.scala 53:27]
    .in(blackBoxNeg_in),
    .out(blackBoxNeg_out)
  );
  assign blackBoxPos_in = 1'h1; // @[BlackBox.scala 55:21]
  assign blackBoxNeg_in = 1'h0; // @[BlackBox.scala 56:21]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(blackBoxNeg_out | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at BlackBox.scala:58 assert(blackBoxNeg.io.out === 1.U)\n"); // @[BlackBox.scala 58:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(blackBoxNeg_out | reset)) begin
          $fatal; // @[BlackBox.scala 58:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(~blackBoxPos_out | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at BlackBox.scala:59 assert(blackBoxPos.io.out === 0.U)\n"); // @[BlackBox.scala 59:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(~blackBoxPos_out | reset)) begin
          $fatal; // @[BlackBox.scala 59:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset) begin
          $finish; // @[BlackBox.scala 60:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
