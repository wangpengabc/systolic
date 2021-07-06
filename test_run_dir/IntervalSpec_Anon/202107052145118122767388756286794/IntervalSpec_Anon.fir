;chisel3.BuildInfo$@527a8665
circuit IntervalSpec_Anon : 
  module IntervalSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    node shifted1 = shl(asInterval(UInt<4>("h03"), 3, 3, 0), 2) @[IntervalSpec.scala 797:25]
    wire shiftUInt : UInt<8>
    shiftUInt <= UInt<8>("h01")
    node shifted2 = dshl(asInterval(UInt<4>("h03"), 3, 3, 0), shiftUInt) @[IntervalSpec.scala 799:25]
    node _T = eq(shifted1, asInterval(UInt<5>("h0c"), 12, 12, 0)) @[IntervalSpec.scala 801:31]
    node _T_1 = bits(reset, 0, 0) @[IntervalSpec.scala 801:21]
    node _T_2 = or(_T, _T_1) @[IntervalSpec.scala 801:21]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[IntervalSpec.scala 801:21]
    when _T_3 : @[IntervalSpec.scala 801:21]
      printf(clock, UInt<1>(1), "Assertion failed: shifted 1 should be 12, it wasn't\n    at IntervalSpec.scala:801 chisel3.assert(shifted1 === 12.I, \"shifted 1 should be 12, it wasn't\")\n") @[IntervalSpec.scala 801:21]
      stop(clock, UInt<1>(1), 1) @[IntervalSpec.scala 801:21]
      skip @[IntervalSpec.scala 801:21]
    node _T_4 = eq(shifted2, asInterval(UInt<4>("h06"), 6, 6, 0)) @[IntervalSpec.scala 802:31]
    node _T_5 = bits(reset, 0, 0) @[IntervalSpec.scala 802:21]
    node _T_6 = or(_T_4, _T_5) @[IntervalSpec.scala 802:21]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[IntervalSpec.scala 802:21]
    when _T_7 : @[IntervalSpec.scala 802:21]
      printf(clock, UInt<1>(1), "Assertion failed: shifted 2 should be 6 it wasn't\n    at IntervalSpec.scala:802 chisel3.assert(shifted2 === 6.I, \"shifted 2 should be 6 it wasn't\")\n") @[IntervalSpec.scala 802:21]
      stop(clock, UInt<1>(1), 1) @[IntervalSpec.scala 802:21]
      skip @[IntervalSpec.scala 802:21]
    node _T_8 = bits(reset, 0, 0) @[IntervalSpec.scala 803:11]
    node _T_9 = eq(_T_8, UInt<1>("h00")) @[IntervalSpec.scala 803:11]
    when _T_9 : @[IntervalSpec.scala 803:11]
      stop(clock, UInt<1>(1), 0) @[IntervalSpec.scala 803:11]
      skip @[IntervalSpec.scala 803:11]
    
