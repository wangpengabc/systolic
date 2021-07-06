module IntervalWrapTester(
  input   clock,
  input   reset
);
  wire [5:0] _GEN_0 = 5'sh6 - 5'sh8; // @[IntervalSpec.scala 306:{21,21}]
  wire [3:0] w1 = _GEN_0[3:0]; // @[IntervalSpec.scala 306:{21,21}]
  wire [5:0] _GEN_2 = 5'sh6 - 5'sh9; // @[IntervalSpec.scala 308:{21,21}]
  wire [4:0] w3 = _GEN_2[4:0]; // @[IntervalSpec.scala 308:{21,21}]
  wire  _T_3 = ~($signed(w1) == -4'sh2 | reset); // @[IntervalSpec.scala 314:9]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~($signed(w1) == -4'sh2 | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at IntervalSpec.scala:314 assert(w1 === (-2).I)\n"); // @[IntervalSpec.scala 314:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~($signed(w1) == -4'sh2 | reset)) begin
          $fatal; // @[IntervalSpec.scala 314:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~($signed(w3) == -5'sh3 | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at IntervalSpec.scala:316 assert(w3 === (-3).I)\n"); // @[IntervalSpec.scala 316:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~($signed(w3) == -5'sh3 | reset)) begin
          $fatal; // @[IntervalSpec.scala 316:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_3) begin
          $fwrite(32'h80000002,"Assertion failed\n    at IntervalSpec.scala:318 assert(w7 === (-2).I)\n"); // @[IntervalSpec.scala 318:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_3) begin
          $fatal; // @[IntervalSpec.scala 318:9]
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
          $finish; // @[IntervalSpec.scala 320:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
