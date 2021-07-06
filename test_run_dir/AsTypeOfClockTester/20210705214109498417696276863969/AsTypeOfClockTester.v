module AsTypeOfClockTester(
  input   clock,
  input   reset
);
  wire [4:0] _T_8 = {4'hf,1'h1}; // @[AsTypeOfTester.scala 80:40]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(1'h1 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at AsTypeOfTester.scala:78 assert(true.B.asTypeOf(Clock()).asUInt.asBool === true.B)\n"
            ); // @[AsTypeOfTester.scala 78:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(1'h1 | reset)) begin
          $fatal; // @[AsTypeOfTester.scala 78:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(_T_8 == 5'h1f | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at AsTypeOfTester.scala:80 assert(0x1f.U.asTypeOf(new MyBundle).asUInt === 0x1f.U)\n"
            ); // @[AsTypeOfTester.scala 80:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(_T_8 == 5'h1f | reset)) begin
          $fatal; // @[AsTypeOfTester.scala 80:9]
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
          $finish; // @[AsTypeOfTester.scala 81:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
