;chisel3.BuildInfo$@527a8665
circuit MixedVecZeroEntryTester : 
  module MixedVecZeroEntryTester_Anon : 
    input clock : Clock
    input reset : Reset
    output io : {foo : UInt<1>, bar : {}}
    
    io.foo <= UInt<1>("h00") @[MixedVecSpec.scala 70:12]
    
  module MixedVecZeroEntryTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire _WIRE : {foo : UInt<1>, bar : {}} @[MixedVecSpec.scala 65:23]
    _WIRE.foo <= UInt<1>("h00") @[MixedVecSpec.scala 65:23]
    inst m of MixedVecZeroEntryTester_Anon @[MixedVecSpec.scala 68:17]
    m.clock <= clock
    m.reset <= reset
    wire _WIRE_1 : {}
    node _T = bits(reset, 0, 0) @[MixedVecSpec.scala 74:7]
    node _T_1 = eq(_T, UInt<1>("h00")) @[MixedVecSpec.scala 74:7]
    when _T_1 : @[MixedVecSpec.scala 74:7]
      stop(clock, UInt<1>(1), 0) @[MixedVecSpec.scala 74:7]
      skip @[MixedVecSpec.scala 74:7]
    
