;chisel3.BuildInfo$@527a8665
circuit IntervalSpec_Anon : 
  module IntervalSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire base : Interval[-4, 6].0 @[IntervalSpec.scala 589:26]
    base <= asInterval(UInt<4>("h06"), 6, 6, 0) @[IntervalSpec.scala 590:16]
    wire disjointLeft : Interval[7, 10].0
    disjointLeft <= asInterval(UInt<5>("h08"), 8, 8, 0)
    node w5 = squz(base, disjointLeft) @[IntervalSpec.scala 592:32]
    node _T = asSInt(w5) @[IntervalSpec.scala 593:29]
    node _T_1 = eq(_T, asSInt(UInt<4>("h06"))) @[IntervalSpec.scala 593:36]
    node _T_2 = bits(reset, 0, 0) @[IntervalSpec.scala 593:25]
    node _T_3 = or(_T_1, _T_2) @[IntervalSpec.scala 593:25]
    node _T_4 = eq(_T_3, UInt<1>("h00")) @[IntervalSpec.scala 593:25]
    when _T_4 : @[IntervalSpec.scala 593:25]
      printf(clock, UInt<1>(1), "Assertion failed\n    at IntervalSpec.scala:593 chisel3.assert(w5.asSInt === 6.S)\n") @[IntervalSpec.scala 593:25]
      stop(clock, UInt<1>(1), 1) @[IntervalSpec.scala 593:25]
      skip @[IntervalSpec.scala 593:25]
    node _T_5 = bits(reset, 0, 0) @[IntervalSpec.scala 594:15]
    node _T_6 = eq(_T_5, UInt<1>("h00")) @[IntervalSpec.scala 594:15]
    when _T_6 : @[IntervalSpec.scala 594:15]
      stop(clock, UInt<1>(1), 0) @[IntervalSpec.scala 594:15]
      skip @[IntervalSpec.scala 594:15]
    
