;chisel3.BuildInfo$@527a8665
circuit MultiModuleInjectionTester : 
  module SubmoduleA : 
    input clock : Clock
    input reset : Reset
    output io : {out : UInt<1>}
    
    io.out <= UInt<1>("h00") @[InjectionSpec.scala 27:12]
    
  module SubmoduleA_1 : 
    input clock : Clock
    input reset : Reset
    output io : {out : UInt<1>}
    
    io.out <= UInt<1>("h00") @[InjectionSpec.scala 27:12]
    
  module MultiModuleInjectionTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst subA0 of SubmoduleA @[InjectionSpec.scala 19:23]
    subA0.clock <= clock
    subA0.reset <= reset
    inst subA1 of SubmoduleA_1 @[InjectionSpec.scala 20:23]
    subA1.clock <= clock
    subA1.reset <= reset
    
