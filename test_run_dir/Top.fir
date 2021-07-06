;chisel3.BuildInfo$@527a8665
circuit Top : 
  module Sub : 
    input clock : Clock
    input reset : Reset
    output io : {flip a : UInt<1>}
    
    
  module _2_Anon : 
    input clock : Clock
    input reset : Reset
    output io : {flip a : UInt<1>}
    
    inst sub of Sub @[InlineSpec.scala 24:21]
    sub.clock <= clock
    sub.reset <= reset
    sub.io.a <= io.a @[InlineSpec.scala 25:14]
    
  module Top : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip a : UInt<1>}
    
    inst x of _2_Anon @[InlineSpec.scala 69:21]
    x.clock <= clock
    x.reset <= reset
    x.io.a <= io.a @[InlineSpec.scala 70:14]
    
