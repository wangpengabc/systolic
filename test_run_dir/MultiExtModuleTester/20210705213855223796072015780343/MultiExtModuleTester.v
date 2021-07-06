module MultiExtModuleTester(
  input   clock,
  input   reset
);
  wire  blackBoxInvPos_in; // @[ExtModule.scala 45:30]
  wire  blackBoxInvPos_out; // @[ExtModule.scala 45:30]
  wire  blackBoxInvNeg_in; // @[ExtModule.scala 46:30]
  wire  blackBoxInvNeg_out; // @[ExtModule.scala 46:30]
  wire  blackBoxPassPos_in; // @[ExtModule.scala 47:31]
  wire  blackBoxPassPos_out; // @[ExtModule.scala 47:31]
  wire  blackBoxPassNeg_in; // @[ExtModule.scala 48:31]
  wire  blackBoxPassNeg_out; // @[ExtModule.scala 48:31]
  BlackBoxInverter blackBoxInvPos ( // @[ExtModule.scala 45:30]
    .in(blackBoxInvPos_in),
    .out(blackBoxInvPos_out)
  );
  BlackBoxInverter blackBoxInvNeg ( // @[ExtModule.scala 46:30]
    .in(blackBoxInvNeg_in),
    .out(blackBoxInvNeg_out)
  );
  BlackBoxPassthrough blackBoxPassPos ( // @[ExtModule.scala 47:31]
    .in(blackBoxPassPos_in),
    .out(blackBoxPassPos_out)
  );
  BlackBoxPassthrough blackBoxPassNeg ( // @[ExtModule.scala 48:31]
    .in(blackBoxPassNeg_in),
    .out(blackBoxPassNeg_out)
  );
  assign blackBoxInvPos_in = 1'h1; // @[ExtModule.scala 50:21]
  assign blackBoxInvNeg_in = 1'h0; // @[ExtModule.scala 51:21]
  assign blackBoxPassPos_in = 1'h1; // @[ExtModule.scala 52:22]
  assign blackBoxPassNeg_in = 1'h0; // @[ExtModule.scala 53:22]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(blackBoxInvNeg_out | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at ExtModule.scala:55 assert(blackBoxInvNeg.out === 1.U)\n"); // @[ExtModule.scala 55:9]
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
          $fatal; // @[ExtModule.scala 55:9]
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
          $fwrite(32'h80000002,"Assertion failed\n    at ExtModule.scala:56 assert(blackBoxInvPos.out === 0.U)\n"); // @[ExtModule.scala 56:9]
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
          $fatal; // @[ExtModule.scala 56:9]
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
          $fwrite(32'h80000002,"Assertion failed\n    at ExtModule.scala:57 assert(blackBoxPassNeg.out === 0.U)\n"); // @[ExtModule.scala 57:9]
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
          $fatal; // @[ExtModule.scala 57:9]
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
          $fwrite(32'h80000002,"Assertion failed\n    at ExtModule.scala:58 assert(blackBoxPassPos.out === 1.U)\n"); // @[ExtModule.scala 58:9]
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
          $fatal; // @[ExtModule.scala 58:9]
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
          $finish; // @[ExtModule.scala 59:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
