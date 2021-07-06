;chisel3.BuildInfo$@527a8665
circuit IntervalSpec_Anon : 
  module IntervalSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire base : Interval[-4, 6].0 @[IntervalSpec.scala 578:24]
    base <= asInterval(UInt<4>("h06"), 6, 6, 0) @[IntervalSpec.scala 579:14]
    wire disjointLeft : Interval[7, 10].0
    disjointLeft <= asInterval(UInt<5>("h08"), 8, 8, 0)
    node w5 = clip(base, disjointLeft) @[IntervalSpec.scala 581:27]
    node _T = asSInt(w5) @[IntervalSpec.scala 582:27]
    node _T_1 = eq(_T, asSInt(UInt<4>("h07"))) @[IntervalSpec.scala 582:34]
    node _T_2 = bits(reset, 0, 0) @[IntervalSpec.scala 582:23]
    node _T_3 = or(_T_1, _T_2) @[IntervalSpec.scala 582:23]
    node _T_4 = eq(_T_3, UInt<1>("h00")) @[IntervalSpec.scala 582:23]
    when _T_4 : @[IntervalSpec.scala 582:23]
      printf(clock, UInt<1>(1), "Assertion failed\n    at IntervalSpec.scala:582 chisel3.assert(w5.asSInt === 7.S)\n") @[IntervalSpec.scala 582:23]
      stop(clock, UInt<1>(1), 1) @[IntervalSpec.scala 582:23]
      skip @[IntervalSpec.scala 582:23]
    node _T_5 = bits(reset, 0, 0) @[IntervalSpec.scala 583:13]
    node _T_6 = eq(_T_5, UInt<1>("h00")) @[IntervalSpec.scala 583:13]
    when _T_6 : @[IntervalSpec.scala 583:13]
      stop(clock, UInt<1>(1), 0) @[IntervalSpec.scala 583:13]
      skip @[IntervalSpec.scala 583:13]
    
