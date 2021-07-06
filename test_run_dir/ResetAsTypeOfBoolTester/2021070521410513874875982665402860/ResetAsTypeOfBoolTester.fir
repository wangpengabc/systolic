;chisel3.BuildInfo$@527a8665
circuit ResetAsTypeOfBoolTester : 
  module ResetAsTypeOfBoolTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire _WIRE : UInt<1> @[AsTypeOfTester.scala 69:24]
    _WIRE <= reset @[AsTypeOfTester.scala 69:24]
    node _T = bits(reset, 0, 0) @[AsTypeOfTester.scala 69:43]
    node _T_1 = eq(_WIRE, _T) @[AsTypeOfTester.scala 69:33]
    node _T_2 = bits(reset, 0, 0) @[AsTypeOfTester.scala 69:9]
    node _T_3 = or(_T_1, _T_2) @[AsTypeOfTester.scala 69:9]
    node _T_4 = eq(_T_3, UInt<1>("h00")) @[AsTypeOfTester.scala 69:9]
    when _T_4 : @[AsTypeOfTester.scala 69:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at AsTypeOfTester.scala:69 assert(reset.asTypeOf(Bool()) === reset.asBool)\n") @[AsTypeOfTester.scala 69:9]
      stop(clock, UInt<1>(1), 1) @[AsTypeOfTester.scala 69:9]
      skip @[AsTypeOfTester.scala 69:9]
    node _T_5 = bits(reset, 0, 0) @[AsTypeOfTester.scala 70:7]
    node _T_6 = eq(_T_5, UInt<1>("h00")) @[AsTypeOfTester.scala 70:7]
    when _T_6 : @[AsTypeOfTester.scala 70:7]
      stop(clock, UInt<1>(1), 0) @[AsTypeOfTester.scala 70:7]
      skip @[AsTypeOfTester.scala 70:7]
    
