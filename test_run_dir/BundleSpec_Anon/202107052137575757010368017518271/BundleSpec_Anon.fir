;chisel3.BuildInfo$@527a8665
circuit BundleSpec_Anon : 
  module _4_Anon : 
    input clock : Clock
    input reset : Reset
    output io : {b : {}}
    
    
  module BundleSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst m of _4_Anon @[BundleSpec.scala 93:23]
    m.clock <= clock
    m.reset <= reset
    node _T = bits(reset, 0, 0) @[BundleSpec.scala 98:13]
    node _T_1 = eq(_T, UInt<1>("h00")) @[BundleSpec.scala 98:13]
    when _T_1 : @[BundleSpec.scala 98:13]
      stop(clock, UInt<1>(1), 0) @[BundleSpec.scala 98:13]
      skip @[BundleSpec.scala 98:13]
    
