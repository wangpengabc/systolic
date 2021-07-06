module ExtModuleTester(
  input   clock,
  input   reset
);
  wire  blackBoxPos_in; // @[ExtModule.scala 28:27]
  wire  blackBoxPos_out; // @[ExtModule.scala 28:27]
  wire  blackBoxNeg_in; // @[ExtModule.scala 29:27]
  wire  blackBoxNeg_out; // @[ExtModule.scala 29:27]
  BlackBoxInverter blackBoxPos ( // @[ExtModule.scala 28:27]
    .in(blackBoxPos_in),
    .out(blackBoxPos_out)
  );
  BlackBoxInverter blackBoxNeg ( // @[ExtModule.scala 29:27]
    .in(blackBoxNeg_in),
    .out(blackBoxNeg_out)
  );
  assign blackBoxPos_in = 1'h1; // @[ExtModule.scala 31:18]
  assign blackBoxNeg_in = 1'h0; // @[ExtModule.scala 32:18]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(blackBoxNeg_out | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at ExtModule.scala:34 assert(blackBoxNeg.out === 1.U)\n"); // @[ExtModule.scala 34:9]
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
          $fatal; // @[ExtModule.scala 34:9]
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
          $fwrite(32'h80000002,"Assertion failed\n    at ExtModule.scala:35 assert(blackBoxPos.out === 0.U)\n"); // @[ExtModule.scala 35:9]
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
          $fatal; // @[ExtModule.scala 35:9]
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
          $finish; // @[ExtModule.scala 36:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
