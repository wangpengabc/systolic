module MultiBlackBoxTester(
  input   clock,
  input   reset
);
  wire  blackBoxInvPos_in; // @[BlackBox.scala 89:30]
  wire  blackBoxInvPos_out; // @[BlackBox.scala 89:30]
  wire  blackBoxInvNeg_in; // @[BlackBox.scala 90:30]
  wire  blackBoxInvNeg_out; // @[BlackBox.scala 90:30]
  wire  blackBoxPassPos_in; // @[BlackBox.scala 91:31]
  wire  blackBoxPassPos_out; // @[BlackBox.scala 91:31]
  wire  blackBoxPassNeg_in; // @[BlackBox.scala 92:31]
  wire  blackBoxPassNeg_out; // @[BlackBox.scala 92:31]
  BlackBoxInverter blackBoxInvPos ( // @[BlackBox.scala 89:30]
    .in(blackBoxInvPos_in),
    .out(blackBoxInvPos_out)
  );
  BlackBoxInverter blackBoxInvNeg ( // @[BlackBox.scala 90:30]
    .in(blackBoxInvNeg_in),
    .out(blackBoxInvNeg_out)
  );
  BlackBoxPassthrough blackBoxPassPos ( // @[BlackBox.scala 91:31]
    .in(blackBoxPassPos_in),
    .out(blackBoxPassPos_out)
  );
  BlackBoxPassthrough blackBoxPassNeg ( // @[BlackBox.scala 92:31]
    .in(blackBoxPassNeg_in),
    .out(blackBoxPassNeg_out)
  );
  assign blackBoxInvPos_in = 1'h1; // @[BlackBox.scala 94:24]
  assign blackBoxInvNeg_in = 1'h0; // @[BlackBox.scala 95:24]
  assign blackBoxPassPos_in = 1'h1; // @[BlackBox.scala 96:25]
  assign blackBoxPassNeg_in = 1'h0; // @[BlackBox.scala 97:25]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(blackBoxInvNeg_out | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at BlackBox.scala:99 assert(blackBoxInvNeg.io.out === 1.U)\n"); // @[BlackBox.scala 99:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(blackBoxInvNeg_out | reset)) begin
          $fatal; // @[BlackBox.scala 99:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(~blackBoxInvPos_out | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at BlackBox.scala:100 assert(blackBoxInvPos.io.out === 0.U)\n"); // @[BlackBox.scala 100:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(~blackBoxInvPos_out | reset)) begin
          $fatal; // @[BlackBox.scala 100:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(~blackBoxPassNeg_out | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at BlackBox.scala:101 assert(blackBoxPassNeg.io.out === 0.U)\n"); // @[BlackBox.scala 101:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(~blackBoxPassNeg_out | reset)) begin
          $fatal; // @[BlackBox.scala 101:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(blackBoxPassPos_out | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at BlackBox.scala:102 assert(blackBoxPassPos.io.out === 1.U)\n"); // @[BlackBox.scala 102:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(blackBoxPassPos_out | reset)) begin
          $fatal; // @[BlackBox.scala 102:9]
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
          $finish; // @[BlackBox.scala 103:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
