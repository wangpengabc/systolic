module BlackBoxFlipTester(
  input   clock,
  input   reset
);
  wire  blackBox_in; // @[BlackBox.scala 76:24]
  wire  blackBox_out; // @[BlackBox.scala 76:24]
  BlackBoxPassthrough2 blackBox ( // @[BlackBox.scala 76:24]
    .in(blackBox_in),
    .out(blackBox_out)
  );
  assign blackBox_in = 1'h1; // @[BlackBox.scala 78:18]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(blackBox_out | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at BlackBox.scala:79 assert(blackBox.io.out === 1.U)\n"); // @[BlackBox.scala 79:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(blackBox_out | reset)) begin
          $fatal; // @[BlackBox.scala 79:9]
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
          $finish; // @[BlackBox.scala 80:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
