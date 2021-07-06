;chisel3.BuildInfo$@527a8665
circuit IntervalSpec_Anon : 
  module IntervalSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire base : Interval[-4, 6].0 @[IntervalSpec.scala 568:24]
    base <= asInterval(UInt<4>("h06"), 6, 6, 0) @[IntervalSpec.scala 569:14]
    wire disjointLeft : Interval[-7, -5].0
    disjointLeft <= asInterval(UInt<4>("h0a"), -6, -6, 0)
    node w5 = clip(base, disjointLeft) @[IntervalSpec.scala 571:27]
    node _T = eq(w5, asInterval(UInt<4>("h0b"), -5, -5, 0)) @[IntervalSpec.scala 572:27]
    node _T_1 = bits(reset, 0, 0) @[IntervalSpec.scala 572:23]
    node _T_2 = or(_T, _T_1) @[IntervalSpec.scala 572:23]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[IntervalSpec.scala 572:23]
    when _T_3 : @[IntervalSpec.scala 572:23]
      printf(clock, UInt<1>(1), "Assertion failed\n    at IntervalSpec.scala:572 chisel3.assert(w5 === (-5).I)\n") @[IntervalSpec.scala 572:23]
      stop(clock, UInt<1>(1), 1) @[IntervalSpec.scala 572:23]
      skip @[IntervalSpec.scala 572:23]
    node _T_4 = bits(reset, 0, 0) @[IntervalSpec.scala 573:13]
    node _T_5 = eq(_T_4, UInt<1>("h00")) @[IntervalSpec.scala 573:13]
    when _T_5 : @[IntervalSpec.scala 573:13]
      stop(clock, UInt<1>(1), 0) @[IntervalSpec.scala 573:13]
      skip @[IntervalSpec.scala 573:13]
    
