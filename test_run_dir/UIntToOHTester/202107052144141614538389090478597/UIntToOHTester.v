module UIntToOHTester(
  input   clock,
  input   reset
);
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset) begin
          $finish; // @[OneHotMuxSpec.scala 305:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
