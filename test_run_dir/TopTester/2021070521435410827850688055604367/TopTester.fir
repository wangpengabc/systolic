;chisel3.BuildInfo$@527a8665
circuit TopTester : 
  module Source : 
    input in : UInt
    
    wire x : UInt<4> @[BoringUtilsSpec.scala 57:17]
    x <= in @[BoringUtilsSpec.scala 65:7]
    
  module Source_1 : 
    input in : UInt
    
    wire x : UInt<4> @[BoringUtilsSpec.scala 57:17]
    x <= in @[BoringUtilsSpec.scala 65:7]
    
  module Source_2 : 
    input in : UInt
    
    wire x : UInt<4> @[BoringUtilsSpec.scala 57:17]
    x <= in @[BoringUtilsSpec.scala 65:7]
    
  module Sink : 
    output out : UInt
    
    wire x : UInt<4> @[BoringUtilsSpec.scala 57:17]
    x <= UInt<1>("h00") @[BoringUtilsSpec.scala 70:7]
    out <= x @[BoringUtilsSpec.scala 71:9]
    
  module Sink_1 : 
    output out : UInt
    
    wire x : UInt<4> @[BoringUtilsSpec.scala 57:17]
    x <= UInt<1>("h00") @[BoringUtilsSpec.scala 70:7]
    out <= x @[BoringUtilsSpec.scala 71:9]
    
  module Sink_2 : 
    output out : UInt
    
    wire x : UInt<4> @[BoringUtilsSpec.scala 57:17]
    x <= UInt<1>("h00") @[BoringUtilsSpec.scala 70:7]
    out <= x @[BoringUtilsSpec.scala 71:9]
    
  module Sink_3 : 
    output out : UInt
    
    wire x : UInt<4> @[BoringUtilsSpec.scala 57:17]
    x <= UInt<1>("h00") @[BoringUtilsSpec.scala 70:7]
    out <= x @[BoringUtilsSpec.scala 71:9]
    
  module Sink_4 : 
    output out : UInt
    
    wire x : UInt<4> @[BoringUtilsSpec.scala 57:17]
    x <= UInt<1>("h00") @[BoringUtilsSpec.scala 70:7]
    out <= x @[BoringUtilsSpec.scala 71:9]
    
  module Sink_5 : 
    output out : UInt
    
    wire x : UInt<4> @[BoringUtilsSpec.scala 57:17]
    x <= UInt<1>("h00") @[BoringUtilsSpec.scala 70:7]
    out <= x @[BoringUtilsSpec.scala 71:9]
    
  module Top : 
    input clock : Clock
    input reset : Reset
    
    inst sources_0 of Source @[BoringUtilsSpec.scala 76:37]
    inst sources_1 of Source_1 @[BoringUtilsSpec.scala 76:37]
    inst sources_2 of Source_2 @[BoringUtilsSpec.scala 76:37]
    inst sinks_0 of Sink @[BoringUtilsSpec.scala 77:35]
    inst sinks_1 of Sink_1 @[BoringUtilsSpec.scala 77:35]
    inst sinks_2 of Sink_2 @[BoringUtilsSpec.scala 77:35]
    inst sinks_3 of Sink_3 @[BoringUtilsSpec.scala 77:35]
    inst sinks_4 of Sink_4 @[BoringUtilsSpec.scala 77:35]
    inst sinks_5 of Sink_5 @[BoringUtilsSpec.scala 77:35]
    sources_0.in <= UInt<1>("h00") @[BoringUtilsSpec.scala 80:56]
    sources_1.in <= UInt<1>("h01") @[BoringUtilsSpec.scala 80:56]
    sources_2.in <= UInt<2>("h02") @[BoringUtilsSpec.scala 80:56]
    node _T = eq(sinks_0.out, UInt<1>("h00")) @[BoringUtilsSpec.scala 83:79]
    node _T_1 = asUInt(reset) @[BoringUtilsSpec.scala 83:72]
    node _T_2 = or(_T, _T_1) @[BoringUtilsSpec.scala 83:72]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[BoringUtilsSpec.scala 83:72]
    when _T_3 : @[BoringUtilsSpec.scala 83:72]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BoringUtilsSpec.scala:83 sinks.zip(Seq(0, 1, 1, 2, 2, 2)).map{ case (a, b) => chisel3.assert(a.out === b.U) }\n") @[BoringUtilsSpec.scala 83:72]
      stop(clock, UInt<1>(1), 1) @[BoringUtilsSpec.scala 83:72]
      skip @[BoringUtilsSpec.scala 83:72]
    node _T_4 = eq(sinks_1.out, UInt<1>("h01")) @[BoringUtilsSpec.scala 83:79]
    node _T_5 = asUInt(reset) @[BoringUtilsSpec.scala 83:72]
    node _T_6 = or(_T_4, _T_5) @[BoringUtilsSpec.scala 83:72]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[BoringUtilsSpec.scala 83:72]
    when _T_7 : @[BoringUtilsSpec.scala 83:72]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BoringUtilsSpec.scala:83 sinks.zip(Seq(0, 1, 1, 2, 2, 2)).map{ case (a, b) => chisel3.assert(a.out === b.U) }\n") @[BoringUtilsSpec.scala 83:72]
      stop(clock, UInt<1>(1), 1) @[BoringUtilsSpec.scala 83:72]
      skip @[BoringUtilsSpec.scala 83:72]
    node _T_8 = eq(sinks_2.out, UInt<1>("h01")) @[BoringUtilsSpec.scala 83:79]
    node _T_9 = asUInt(reset) @[BoringUtilsSpec.scala 83:72]
    node _T_10 = or(_T_8, _T_9) @[BoringUtilsSpec.scala 83:72]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[BoringUtilsSpec.scala 83:72]
    when _T_11 : @[BoringUtilsSpec.scala 83:72]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BoringUtilsSpec.scala:83 sinks.zip(Seq(0, 1, 1, 2, 2, 2)).map{ case (a, b) => chisel3.assert(a.out === b.U) }\n") @[BoringUtilsSpec.scala 83:72]
      stop(clock, UInt<1>(1), 1) @[BoringUtilsSpec.scala 83:72]
      skip @[BoringUtilsSpec.scala 83:72]
    node _T_12 = eq(sinks_3.out, UInt<2>("h02")) @[BoringUtilsSpec.scala 83:79]
    node _T_13 = asUInt(reset) @[BoringUtilsSpec.scala 83:72]
    node _T_14 = or(_T_12, _T_13) @[BoringUtilsSpec.scala 83:72]
    node _T_15 = eq(_T_14, UInt<1>("h00")) @[BoringUtilsSpec.scala 83:72]
    when _T_15 : @[BoringUtilsSpec.scala 83:72]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BoringUtilsSpec.scala:83 sinks.zip(Seq(0, 1, 1, 2, 2, 2)).map{ case (a, b) => chisel3.assert(a.out === b.U) }\n") @[BoringUtilsSpec.scala 83:72]
      stop(clock, UInt<1>(1), 1) @[BoringUtilsSpec.scala 83:72]
      skip @[BoringUtilsSpec.scala 83:72]
    node _T_16 = eq(sinks_4.out, UInt<2>("h02")) @[BoringUtilsSpec.scala 83:79]
    node _T_17 = asUInt(reset) @[BoringUtilsSpec.scala 83:72]
    node _T_18 = or(_T_16, _T_17) @[BoringUtilsSpec.scala 83:72]
    node _T_19 = eq(_T_18, UInt<1>("h00")) @[BoringUtilsSpec.scala 83:72]
    when _T_19 : @[BoringUtilsSpec.scala 83:72]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BoringUtilsSpec.scala:83 sinks.zip(Seq(0, 1, 1, 2, 2, 2)).map{ case (a, b) => chisel3.assert(a.out === b.U) }\n") @[BoringUtilsSpec.scala 83:72]
      stop(clock, UInt<1>(1), 1) @[BoringUtilsSpec.scala 83:72]
      skip @[BoringUtilsSpec.scala 83:72]
    node _T_20 = eq(sinks_5.out, UInt<2>("h02")) @[BoringUtilsSpec.scala 83:79]
    node _T_21 = asUInt(reset) @[BoringUtilsSpec.scala 83:72]
    node _T_22 = or(_T_20, _T_21) @[BoringUtilsSpec.scala 83:72]
    node _T_23 = eq(_T_22, UInt<1>("h00")) @[BoringUtilsSpec.scala 83:72]
    when _T_23 : @[BoringUtilsSpec.scala 83:72]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BoringUtilsSpec.scala:83 sinks.zip(Seq(0, 1, 1, 2, 2, 2)).map{ case (a, b) => chisel3.assert(a.out === b.U) }\n") @[BoringUtilsSpec.scala 83:72]
      stop(clock, UInt<1>(1), 1) @[BoringUtilsSpec.scala 83:72]
      skip @[BoringUtilsSpec.scala 83:72]
    
  module TopTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    reg done_value : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[Counter.scala 60:40]
    wire done : UInt<1>
    done <= UInt<1>("h00")
    when UInt<1>("h01") : @[Counter.scala 118:17]
      node done_wrap_wrap = eq(done_value, UInt<1>("h01")) @[Counter.scala 72:24]
      node _done_wrap_value_T = add(done_value, UInt<1>("h01")) @[Counter.scala 76:24]
      node _done_wrap_value_T_1 = tail(_done_wrap_value_T, 1) @[Counter.scala 76:24]
      done_value <= _done_wrap_value_T_1 @[Counter.scala 76:15]
      done <= done_wrap_wrap @[Counter.scala 118:24]
      skip @[Counter.scala 118:17]
    when done : @[BoringUtilsSpec.scala 21:15]
      node _T = bits(reset, 0, 0) @[BoringUtilsSpec.scala 21:21]
      node _T_1 = eq(_T, UInt<1>("h00")) @[BoringUtilsSpec.scala 21:21]
      when _T_1 : @[BoringUtilsSpec.scala 21:21]
        stop(clock, UInt<1>(1), 0) @[BoringUtilsSpec.scala 21:21]
        skip @[BoringUtilsSpec.scala 21:21]
      skip @[BoringUtilsSpec.scala 21:15]
    inst dut of Top @[BoringUtilsSpec.scala 91:21]
    dut.clock <= clock
    dut.reset <= reset
    
