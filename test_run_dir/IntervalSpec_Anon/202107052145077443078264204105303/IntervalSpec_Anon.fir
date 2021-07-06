;chisel3.BuildInfo$@527a8665
circuit IntervalSpec_Anon : 
  module IntervalSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire base : Interval[-4, 6].0 @[IntervalSpec.scala 558:26]
    base <= asInterval(UInt<4>("h06"), 6, 6, 0) @[IntervalSpec.scala 559:16]
    wire disjointLeft : Interval[7, 10].0
    disjointLeft <= asInterval(UInt<5>("h08"), 8, 8, 0)
    node w5 = wrap(base, disjointLeft) @[IntervalSpec.scala 561:29]
    node _T = bits(reset, 0, 0) @[IntervalSpec.scala 562:15]
    node _T_1 = eq(_T, UInt<1>("h00")) @[IntervalSpec.scala 562:15]
    when _T_1 : @[IntervalSpec.scala 562:15]
      stop(clock, UInt<1>(1), 0) @[IntervalSpec.scala 562:15]
      skip @[IntervalSpec.scala 562:15]
    
