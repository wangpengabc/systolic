module AsTypeOfBundleTester(
  input   clock,
  input   reset
);
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset) begin
          $finish; // @[AsTypeOfTester.scala 24:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
