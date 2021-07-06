;chisel3.BuildInfo$@527a8665
circuit AsTypeOfClockTester : 
  module AsTypeOfClockTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire _WIRE : Clock @[AsTypeOfTester.scala 78:25]
    node _T = asClock(UInt<1>("h01")) @[AsTypeOfTester.scala 78:25]
    _WIRE <= _T @[AsTypeOfTester.scala 78:25]
    node _T_1 = asUInt(_WIRE) @[AsTypeOfTester.scala 78:35]
    node _T_2 = bits(_T_1, 0, 0) @[AsTypeOfTester.scala 78:42]
    node _T_3 = eq(_T_2, UInt<1>("h01")) @[AsTypeOfTester.scala 78:49]
    node _T_4 = bits(reset, 0, 0) @[AsTypeOfTester.scala 78:9]
    node _T_5 = or(_T_3, _T_4) @[AsTypeOfTester.scala 78:9]
    node _T_6 = eq(_T_5, UInt<1>("h00")) @[AsTypeOfTester.scala 78:9]
    when _T_6 : @[AsTypeOfTester.scala 78:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at AsTypeOfTester.scala:78 assert(true.B.asTypeOf(Clock()).asUInt.asBool === true.B)\n") @[AsTypeOfTester.scala 78:9]
      stop(clock, UInt<1>(1), 1) @[AsTypeOfTester.scala 78:9]
      skip @[AsTypeOfTester.scala 78:9]
    wire _WIRE_1 : {x : UInt<4>, y : Clock} @[AsTypeOfTester.scala 80:25]
    node _T_7 = asClock(UInt<1>("h01")) @[AsTypeOfTester.scala 80:25]
    _WIRE_1.y <= _T_7 @[AsTypeOfTester.scala 80:25]
    _WIRE_1.x <= UInt<4>("h0f") @[AsTypeOfTester.scala 80:25]
    node lo = asUInt(_WIRE_1.y) @[AsTypeOfTester.scala 80:40]
    node _T_8 = cat(_WIRE_1.x, lo) @[AsTypeOfTester.scala 80:40]
    node _T_9 = eq(_T_8, UInt<5>("h01f")) @[AsTypeOfTester.scala 80:47]
    node _T_10 = bits(reset, 0, 0) @[AsTypeOfTester.scala 80:9]
    node _T_11 = or(_T_9, _T_10) @[AsTypeOfTester.scala 80:9]
    node _T_12 = eq(_T_11, UInt<1>("h00")) @[AsTypeOfTester.scala 80:9]
    when _T_12 : @[AsTypeOfTester.scala 80:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at AsTypeOfTester.scala:80 assert(0x1f.U.asTypeOf(new MyBundle).asUInt === 0x1f.U)\n") @[AsTypeOfTester.scala 80:9]
      stop(clock, UInt<1>(1), 1) @[AsTypeOfTester.scala 80:9]
      skip @[AsTypeOfTester.scala 80:9]
    node _T_13 = bits(reset, 0, 0) @[AsTypeOfTester.scala 81:7]
    node _T_14 = eq(_T_13, UInt<1>("h00")) @[AsTypeOfTester.scala 81:7]
    when _T_14 : @[AsTypeOfTester.scala 81:7]
      stop(clock, UInt<1>(1), 0) @[AsTypeOfTester.scala 81:7]
      skip @[AsTypeOfTester.scala 81:7]
    
