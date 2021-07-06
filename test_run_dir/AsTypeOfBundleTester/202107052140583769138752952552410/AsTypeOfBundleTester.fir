;chisel3.BuildInfo$@527a8665
circuit AsTypeOfBundleTester : 
  module AsTypeOfBundleTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire bunAsTypeOf : {u : UInt<4>, s : SInt<4>, fp : Fixed<4><<3>>} @[AsTypeOfTester.scala 18:66]
    node _bunAsTypeOf_T = asFixedPoint(UInt<4>("h0c"), 3) @[AsTypeOfTester.scala 18:66]
    bunAsTypeOf.fp <= _bunAsTypeOf_T @[AsTypeOfTester.scala 18:66]
    node _bunAsTypeOf_T_1 = asSInt(UInt<4>("h0f")) @[AsTypeOfTester.scala 18:66]
    bunAsTypeOf.s <= _bunAsTypeOf_T_1 @[AsTypeOfTester.scala 18:66]
    bunAsTypeOf.u <= UInt<4>("h04") @[AsTypeOfTester.scala 18:66]
    node _T = eq(bunAsTypeOf.u, UInt<3>("h04")) @[AsTypeOfTester.scala 20:24]
    node _T_1 = bits(reset, 0, 0) @[AsTypeOfTester.scala 20:9]
    node _T_2 = or(_T, _T_1) @[AsTypeOfTester.scala 20:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[AsTypeOfTester.scala 20:9]
    when _T_3 : @[AsTypeOfTester.scala 20:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at AsTypeOfTester.scala:20 assert(bunAsTypeOf.u === 4.U)\n") @[AsTypeOfTester.scala 20:9]
      stop(clock, UInt<1>(1), 1) @[AsTypeOfTester.scala 20:9]
      skip @[AsTypeOfTester.scala 20:9]
    node _T_4 = eq(bunAsTypeOf.s, asSInt(UInt<1>("h01"))) @[AsTypeOfTester.scala 21:24]
    node _T_5 = bits(reset, 0, 0) @[AsTypeOfTester.scala 21:9]
    node _T_6 = or(_T_4, _T_5) @[AsTypeOfTester.scala 21:9]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[AsTypeOfTester.scala 21:9]
    when _T_7 : @[AsTypeOfTester.scala 21:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at AsTypeOfTester.scala:21 assert(bunAsTypeOf.s === -1.S)\n") @[AsTypeOfTester.scala 21:9]
      stop(clock, UInt<1>(1), 1) @[AsTypeOfTester.scala 21:9]
      skip @[AsTypeOfTester.scala 21:9]
    node _T_8 = eq(bunAsTypeOf.fp, asFixedPoint(UInt<4>("h0c"), 3)) @[AsTypeOfTester.scala 22:25]
    node _T_9 = bits(reset, 0, 0) @[AsTypeOfTester.scala 22:9]
    node _T_10 = or(_T_8, _T_9) @[AsTypeOfTester.scala 22:9]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[AsTypeOfTester.scala 22:9]
    when _T_11 : @[AsTypeOfTester.scala 22:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at AsTypeOfTester.scala:22 assert(bunAsTypeOf.fp === FixedPoint.fromDouble(-0.5, 4.W, 3.BP))\n") @[AsTypeOfTester.scala 22:9]
      stop(clock, UInt<1>(1), 1) @[AsTypeOfTester.scala 22:9]
      skip @[AsTypeOfTester.scala 22:9]
    node _T_12 = bits(reset, 0, 0) @[AsTypeOfTester.scala 24:7]
    node _T_13 = eq(_T_12, UInt<1>("h00")) @[AsTypeOfTester.scala 24:7]
    when _T_13 : @[AsTypeOfTester.scala 24:7]
      stop(clock, UInt<1>(1), 0) @[AsTypeOfTester.scala 24:7]
      skip @[AsTypeOfTester.scala 24:7]
    
