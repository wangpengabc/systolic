;chisel3.BuildInfo$@527a8665
circuit IntervalSpec_Anon : 
  module IntervalSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {out : Interval[?, ?].0}
    
    wire base : Interval[-4, 6].0 @[IntervalSpec.scala 726:30]
    base <= asInterval(UInt<4>("h06"), 6, 6, 0) @[IntervalSpec.scala 727:20]
    wire disjointLeft : Interval[7, 10].0
    disjointLeft <= asInterval(UInt<5>("h08"), 8, 8, 0)
    node w5 = clip(base, disjointLeft) @[IntervalSpec.scala 730:33]
    io.out <= w5 @[IntervalSpec.scala 731:22]
    
