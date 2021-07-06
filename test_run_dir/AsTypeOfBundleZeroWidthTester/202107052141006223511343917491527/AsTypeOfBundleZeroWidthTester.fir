;chisel3.BuildInfo$@527a8665
circuit AsTypeOfBundleZeroWidthTester : 
  module AsTypeOfBundleZeroWidthTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire bunAsTypeOf : {a : UInt<0>, b : UInt<1>, c : UInt<0>} @[AsTypeOfTester.scala 36:33]
    bunAsTypeOf.c is invalid @[AsTypeOfTester.scala 36:33]
    bunAsTypeOf.b <= UInt<1>("h01") @[AsTypeOfTester.scala 36:33]
    bunAsTypeOf.a is invalid @[AsTypeOfTester.scala 36:33]
    node _T = eq(bunAsTypeOf.a, UInt<1>("h00")) @[AsTypeOfTester.scala 38:24]
    node _T_1 = bits(reset, 0, 0) @[AsTypeOfTester.scala 38:9]
    node _T_2 = or(_T, _T_1) @[AsTypeOfTester.scala 38:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[AsTypeOfTester.scala 38:9]
    when _T_3 : @[AsTypeOfTester.scala 38:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at AsTypeOfTester.scala:38 assert(bunAsTypeOf.a === 0.U)\n") @[AsTypeOfTester.scala 38:9]
      stop(clock, UInt<1>(1), 1) @[AsTypeOfTester.scala 38:9]
      skip @[AsTypeOfTester.scala 38:9]
    node _T_4 = eq(bunAsTypeOf.b, UInt<1>("h01")) @[AsTypeOfTester.scala 39:24]
    node _T_5 = bits(reset, 0, 0) @[AsTypeOfTester.scala 39:9]
    node _T_6 = or(_T_4, _T_5) @[AsTypeOfTester.scala 39:9]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[AsTypeOfTester.scala 39:9]
    when _T_7 : @[AsTypeOfTester.scala 39:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at AsTypeOfTester.scala:39 assert(bunAsTypeOf.b === 1.U)\n") @[AsTypeOfTester.scala 39:9]
      stop(clock, UInt<1>(1), 1) @[AsTypeOfTester.scala 39:9]
      skip @[AsTypeOfTester.scala 39:9]
    node _T_8 = eq(bunAsTypeOf.c, UInt<1>("h00")) @[AsTypeOfTester.scala 40:24]
    node _T_9 = bits(reset, 0, 0) @[AsTypeOfTester.scala 40:9]
    node _T_10 = or(_T_8, _T_9) @[AsTypeOfTester.scala 40:9]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[AsTypeOfTester.scala 40:9]
    when _T_11 : @[AsTypeOfTester.scala 40:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at AsTypeOfTester.scala:40 assert(bunAsTypeOf.c === 0.U)\n") @[AsTypeOfTester.scala 40:9]
      stop(clock, UInt<1>(1), 1) @[AsTypeOfTester.scala 40:9]
      skip @[AsTypeOfTester.scala 40:9]
    node _T_12 = bits(reset, 0, 0) @[AsTypeOfTester.scala 42:7]
    node _T_13 = eq(_T_12, UInt<1>("h00")) @[AsTypeOfTester.scala 42:7]
    when _T_13 : @[AsTypeOfTester.scala 42:7]
      stop(clock, UInt<1>(1), 0) @[AsTypeOfTester.scala 42:7]
      skip @[AsTypeOfTester.scala 42:7]
    
