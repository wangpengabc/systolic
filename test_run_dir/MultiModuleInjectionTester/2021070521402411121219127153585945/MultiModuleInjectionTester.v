module SubmoduleA(
  input   clock,
  input   reset
);
  wire  wire_ = reset; // @[InjectionSpec.scala 119:29]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset) begin
          $finish; // @[InjectionSpec.scala 121:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module MultiModuleInjectionTester(
  input   clock,
  input   reset
);
  wire  subA0_clock; // @[InjectionSpec.scala 19:23]
  wire  subA0_reset; // @[InjectionSpec.scala 19:23]
  wire  subA1_clock; // @[InjectionSpec.scala 20:23]
  wire  subA1_reset; // @[InjectionSpec.scala 20:23]
  SubmoduleA subA0 ( // @[InjectionSpec.scala 19:23]
    .clock(subA0_clock),
    .reset(subA0_reset)
  );
  SubmoduleA subA1 ( // @[InjectionSpec.scala 20:23]
    .clock(subA1_clock),
    .reset(subA1_reset)
  );
  assign subA0_clock = clock;
  assign subA0_reset = reset;
  assign subA1_clock = clock;
  assign subA1_reset = reset;
endmodule
