;chisel3.BuildInfo$@527a8665
circuit AsTypeOfTruncationTester : 
  module AsTypeOfTruncationTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire truncate : UInt<3> @[AsTypeOfTester.scala 57:37]
    truncate <= UInt<7>("h043") @[AsTypeOfTester.scala 57:37]
    wire expand : UInt<3> @[AsTypeOfTester.scala 58:30]
    expand <= UInt<1>("h01") @[AsTypeOfTester.scala 58:30]
    node _T = eq(truncate, UInt<2>("h03")) @[AsTypeOfTester.scala 61:20]
    node _T_1 = bits(reset, 0, 0) @[AsTypeOfTester.scala 61:9]
    node _T_2 = or(_T, _T_1) @[AsTypeOfTester.scala 61:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[AsTypeOfTester.scala 61:9]
    when _T_3 : @[AsTypeOfTester.scala 61:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at AsTypeOfTester.scala:61 assert( truncate === 3.U )\n") @[AsTypeOfTester.scala 61:9]
      stop(clock, UInt<1>(1), 1) @[AsTypeOfTester.scala 61:9]
      skip @[AsTypeOfTester.scala 61:9]
    node _T_4 = eq(expand, UInt<1>("h01")) @[AsTypeOfTester.scala 63:18]
    node _T_5 = bits(reset, 0, 0) @[AsTypeOfTester.scala 63:9]
    node _T_6 = or(_T_4, _T_5) @[AsTypeOfTester.scala 63:9]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[AsTypeOfTester.scala 63:9]
    when _T_7 : @[AsTypeOfTester.scala 63:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at AsTypeOfTester.scala:63 assert( expand === 1.U )\n") @[AsTypeOfTester.scala 63:9]
      stop(clock, UInt<1>(1), 1) @[AsTypeOfTester.scala 63:9]
      skip @[AsTypeOfTester.scala 63:9]
    node _T_8 = bits(reset, 0, 0) @[AsTypeOfTester.scala 65:7]
    node _T_9 = eq(_T_8, UInt<1>("h00")) @[AsTypeOfTester.scala 65:7]
    when _T_9 : @[AsTypeOfTester.scala 65:7]
      stop(clock, UInt<1>(1), 0) @[AsTypeOfTester.scala 65:7]
      skip @[AsTypeOfTester.scala 65:7]
    
