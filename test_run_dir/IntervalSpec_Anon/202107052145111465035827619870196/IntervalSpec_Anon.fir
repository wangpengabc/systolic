;chisel3.BuildInfo$@527a8665
circuit IntervalSpec_Anon : 
  module IntervalSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire base : Interval[-4, 6].0 @[IntervalSpec.scala 758:26]
    base <= asInterval(UInt<4>("h08"), -8, -8, 0) @[IntervalSpec.scala 759:16]
    
