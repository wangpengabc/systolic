module ParameterizedAggregateOneHot(
  input        io_selectors_1,
  input        io_selectors_2,
  input        io_selectors_3,
  output [7:0] io_out_v_0,
  output [7:0] io_out_v_1,
  output [6:0] io_out_a_f1,
  output [8:0] io_out_a_f2
);
  wire [8:0] _io_out_T_3 = io_selectors_1 ? 9'h20 : 9'h0; // @[Mux.scala 27:72]
  wire [8:0] _io_out_T_5 = io_selectors_2 ? 9'h40 : 9'h0; // @[Mux.scala 27:72]
  wire [8:0] _io_out_T_7 = io_selectors_3 ? 9'h60 : 9'h0; // @[Mux.scala 27:72]
  wire [8:0] _io_out_T_9 = _io_out_T_3 | _io_out_T_5; // @[Mux.scala 27:72]
  wire [6:0] _io_out_T_15 = io_selectors_1 ? 7'h6 : 7'h0; // @[Mux.scala 27:72]
  wire [6:0] _io_out_T_17 = io_selectors_2 ? 7'hc : 7'h0; // @[Mux.scala 27:72]
  wire [6:0] _io_out_T_19 = io_selectors_3 ? 7'h12 : 7'h0; // @[Mux.scala 27:72]
  wire [6:0] _io_out_T_21 = _io_out_T_15 | _io_out_T_17; // @[Mux.scala 27:72]
  wire [7:0] _io_out_T_27 = io_selectors_1 ? 8'h4 : 8'h0; // @[Mux.scala 27:72]
  wire [7:0] _io_out_T_29 = io_selectors_2 ? 8'h8 : 8'h0; // @[Mux.scala 27:72]
  wire [7:0] _io_out_T_31 = io_selectors_3 ? 8'hc : 8'h0; // @[Mux.scala 27:72]
  wire [7:0] _io_out_T_33 = _io_out_T_27 | _io_out_T_29; // @[Mux.scala 27:72]
  wire [7:0] _io_out_T_39 = io_selectors_1 ? 8'h8 : 8'h0; // @[Mux.scala 27:72]
  wire [7:0] _io_out_T_41 = io_selectors_2 ? 8'h10 : 8'h0; // @[Mux.scala 27:72]
  wire [7:0] _io_out_T_43 = io_selectors_3 ? 8'h18 : 8'h0; // @[Mux.scala 27:72]
  wire [7:0] _io_out_T_45 = _io_out_T_39 | _io_out_T_41; // @[Mux.scala 27:72]
  assign io_out_v_0 = _io_out_T_33 | _io_out_T_31; // @[Mux.scala 27:72]
  assign io_out_v_1 = _io_out_T_45 | _io_out_T_43; // @[Mux.scala 27:72]
  assign io_out_a_f1 = _io_out_T_21 | _io_out_T_19; // @[Mux.scala 27:72]
  assign io_out_a_f2 = _io_out_T_9 | _io_out_T_7; // @[Mux.scala 27:72]
endmodule
module ParameterizedAggregateOneHotTester(
  input   clock,
  input   reset
);
  wire  dut_io_selectors_1; // @[OneHotMuxSpec.scala 173:21]
  wire  dut_io_selectors_2; // @[OneHotMuxSpec.scala 173:21]
  wire  dut_io_selectors_3; // @[OneHotMuxSpec.scala 173:21]
  wire [7:0] dut_io_out_v_0; // @[OneHotMuxSpec.scala 173:21]
  wire [7:0] dut_io_out_v_1; // @[OneHotMuxSpec.scala 173:21]
  wire [6:0] dut_io_out_a_f1; // @[OneHotMuxSpec.scala 173:21]
  wire [8:0] dut_io_out_a_f2; // @[OneHotMuxSpec.scala 173:21]
  wire  dut_1_io_selectors_1; // @[OneHotMuxSpec.scala 173:21]
  wire  dut_1_io_selectors_2; // @[OneHotMuxSpec.scala 173:21]
  wire  dut_1_io_selectors_3; // @[OneHotMuxSpec.scala 173:21]
  wire [7:0] dut_1_io_out_v_0; // @[OneHotMuxSpec.scala 173:21]
  wire [7:0] dut_1_io_out_v_1; // @[OneHotMuxSpec.scala 173:21]
  wire [6:0] dut_1_io_out_a_f1; // @[OneHotMuxSpec.scala 173:21]
  wire [8:0] dut_1_io_out_a_f2; // @[OneHotMuxSpec.scala 173:21]
  wire  dut_2_io_selectors_1; // @[OneHotMuxSpec.scala 173:21]
  wire  dut_2_io_selectors_2; // @[OneHotMuxSpec.scala 173:21]
  wire  dut_2_io_selectors_3; // @[OneHotMuxSpec.scala 173:21]
  wire [7:0] dut_2_io_out_v_0; // @[OneHotMuxSpec.scala 173:21]
  wire [7:0] dut_2_io_out_v_1; // @[OneHotMuxSpec.scala 173:21]
  wire [6:0] dut_2_io_out_a_f1; // @[OneHotMuxSpec.scala 173:21]
  wire [8:0] dut_2_io_out_a_f2; // @[OneHotMuxSpec.scala 173:21]
  wire  dut_3_io_selectors_1; // @[OneHotMuxSpec.scala 173:21]
  wire  dut_3_io_selectors_2; // @[OneHotMuxSpec.scala 173:21]
  wire  dut_3_io_selectors_3; // @[OneHotMuxSpec.scala 173:21]
  wire [7:0] dut_3_io_out_v_0; // @[OneHotMuxSpec.scala 173:21]
  wire [7:0] dut_3_io_out_v_1; // @[OneHotMuxSpec.scala 173:21]
  wire [6:0] dut_3_io_out_a_f1; // @[OneHotMuxSpec.scala 173:21]
  wire [8:0] dut_3_io_out_a_f2; // @[OneHotMuxSpec.scala 173:21]
  wire [31:0] _T = {dut_io_out_v_1,dut_io_out_v_0,dut_io_out_a_f1,dut_io_out_a_f2}; // @[OneHotMuxSpec.scala 176:29]
  wire [31:0] _T_6 = {dut_1_io_out_v_1,dut_1_io_out_v_0,dut_1_io_out_a_f1,dut_1_io_out_a_f2}; // @[OneHotMuxSpec.scala 176:29]
  wire [31:0] _T_12 = {dut_2_io_out_v_1,dut_2_io_out_v_0,dut_2_io_out_a_f1,dut_2_io_out_a_f2}; // @[OneHotMuxSpec.scala 176:29]
  wire [31:0] _T_18 = {dut_3_io_out_v_1,dut_3_io_out_v_0,dut_3_io_out_a_f1,dut_3_io_out_a_f2}; // @[OneHotMuxSpec.scala 176:29]
  ParameterizedAggregateOneHot dut ( // @[OneHotMuxSpec.scala 173:21]
    .io_selectors_1(dut_io_selectors_1),
    .io_selectors_2(dut_io_selectors_2),
    .io_selectors_3(dut_io_selectors_3),
    .io_out_v_0(dut_io_out_v_0),
    .io_out_v_1(dut_io_out_v_1),
    .io_out_a_f1(dut_io_out_a_f1),
    .io_out_a_f2(dut_io_out_a_f2)
  );
  ParameterizedAggregateOneHot dut_1 ( // @[OneHotMuxSpec.scala 173:21]
    .io_selectors_1(dut_1_io_selectors_1),
    .io_selectors_2(dut_1_io_selectors_2),
    .io_selectors_3(dut_1_io_selectors_3),
    .io_out_v_0(dut_1_io_out_v_0),
    .io_out_v_1(dut_1_io_out_v_1),
    .io_out_a_f1(dut_1_io_out_a_f1),
    .io_out_a_f2(dut_1_io_out_a_f2)
  );
  ParameterizedAggregateOneHot dut_2 ( // @[OneHotMuxSpec.scala 173:21]
    .io_selectors_1(dut_2_io_selectors_1),
    .io_selectors_2(dut_2_io_selectors_2),
    .io_selectors_3(dut_2_io_selectors_3),
    .io_out_v_0(dut_2_io_out_v_0),
    .io_out_v_1(dut_2_io_out_v_1),
    .io_out_a_f1(dut_2_io_out_a_f1),
    .io_out_a_f2(dut_2_io_out_a_f2)
  );
  ParameterizedAggregateOneHot dut_3 ( // @[OneHotMuxSpec.scala 173:21]
    .io_selectors_1(dut_3_io_selectors_1),
    .io_selectors_2(dut_3_io_selectors_2),
    .io_selectors_3(dut_3_io_selectors_3),
    .io_out_v_0(dut_3_io_out_v_0),
    .io_out_v_1(dut_3_io_out_v_1),
    .io_out_a_f1(dut_3_io_out_a_f1),
    .io_out_a_f2(dut_3_io_out_a_f2)
  );
  assign dut_io_selectors_1 = 1'h0; // @[OneHotMuxSpec.scala 174:22]
  assign dut_io_selectors_2 = 1'h0; // @[OneHotMuxSpec.scala 174:22]
  assign dut_io_selectors_3 = 1'h0; // @[OneHotMuxSpec.scala 174:22]
  assign dut_1_io_selectors_1 = 1'h1; // @[OneHotMuxSpec.scala 174:22]
  assign dut_1_io_selectors_2 = 1'h0; // @[OneHotMuxSpec.scala 174:22]
  assign dut_1_io_selectors_3 = 1'h0; // @[OneHotMuxSpec.scala 174:22]
  assign dut_2_io_selectors_1 = 1'h0; // @[OneHotMuxSpec.scala 174:22]
  assign dut_2_io_selectors_2 = 1'h1; // @[OneHotMuxSpec.scala 174:22]
  assign dut_2_io_selectors_3 = 1'h0; // @[OneHotMuxSpec.scala 174:22]
  assign dut_3_io_selectors_1 = 1'h0; // @[OneHotMuxSpec.scala 174:22]
  assign dut_3_io_selectors_2 = 1'h0; // @[OneHotMuxSpec.scala 174:22]
  assign dut_3_io_selectors_3 = 1'h1; // @[OneHotMuxSpec.scala 174:22]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(_T == 32'h0 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at OneHotMuxSpec.scala:176 assert(dut.io.out.asUInt() === values(i).asUInt())\n"); // @[OneHotMuxSpec.scala 176:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(_T == 32'h0 | reset)) begin
          $fatal; // @[OneHotMuxSpec.scala 176:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(_T_6 == 32'h8040c20 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at OneHotMuxSpec.scala:176 assert(dut.io.out.asUInt() === values(i).asUInt())\n"); // @[OneHotMuxSpec.scala 176:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(_T_6 == 32'h8040c20 | reset)) begin
          $fatal; // @[OneHotMuxSpec.scala 176:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(_T_12 == 32'h10081840 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at OneHotMuxSpec.scala:176 assert(dut.io.out.asUInt() === values(i).asUInt())\n"); // @[OneHotMuxSpec.scala 176:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(_T_12 == 32'h10081840 | reset)) begin
          $fatal; // @[OneHotMuxSpec.scala 176:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(_T_18 == 32'h180c2460 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at OneHotMuxSpec.scala:176 assert(dut.io.out.asUInt() === values(i).asUInt())\n"); // @[OneHotMuxSpec.scala 176:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(_T_18 == 32'h180c2460 | reset)) begin
          $fatal; // @[OneHotMuxSpec.scala 176:11]
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
          $finish; // @[OneHotMuxSpec.scala 179:7]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
