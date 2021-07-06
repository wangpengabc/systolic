;chisel3.BuildInfo$@527a8665
circuit IntervalSpec_Anon : 
  module IntervalSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    node shifted1 = shr(asInterval(UInt<5>("h0c"), 12, 12, 0), 2) @[IntervalSpec.scala 810:25]
    node shifted2 = dshr(asInterval(UInt<5>("h0c"), 12, 12, 0), UInt<1>("h01")) @[IntervalSpec.scala 812:25]
    node _T = eq(shifted1, asInterval(UInt<3>("h03"), 3, 3, 0)) @[IntervalSpec.scala 814:31]
    node _T_1 = bits(reset, 0, 0) @[IntervalSpec.scala 814:21]
    node _T_2 = or(_T, _T_1) @[IntervalSpec.scala 814:21]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[IntervalSpec.scala 814:21]
    when _T_3 : @[IntervalSpec.scala 814:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at IntervalSpec.scala:814 chisel3.assert(shifted1 === 3.I)\n") @[IntervalSpec.scala 814:21]
      stop(clock, UInt<1>(1), 1) @[IntervalSpec.scala 814:21]
      skip @[IntervalSpec.scala 814:21]
    node _T_4 = eq(shifted2, asInterval(UInt<4>("h06"), 6, 6, 0)) @[IntervalSpec.scala 815:31]
    node _T_5 = bits(reset, 0, 0) @[IntervalSpec.scala 815:21]
    node _T_6 = or(_T_4, _T_5) @[IntervalSpec.scala 815:21]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[IntervalSpec.scala 815:21]
    when _T_7 : @[IntervalSpec.scala 815:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at IntervalSpec.scala:815 chisel3.assert(shifted2 === 6.I)\n") @[IntervalSpec.scala 815:21]
      stop(clock, UInt<1>(1), 1) @[IntervalSpec.scala 815:21]
      skip @[IntervalSpec.scala 815:21]
    node _T_8 = bits(reset, 0, 0) @[IntervalSpec.scala 816:11]
    node _T_9 = eq(_T_8, UInt<1>("h00")) @[IntervalSpec.scala 816:11]
    when _T_9 : @[IntervalSpec.scala 816:11]
      stop(clock, UInt<1>(1), 0) @[IntervalSpec.scala 816:11]
      skip @[IntervalSpec.scala 816:11]
    
