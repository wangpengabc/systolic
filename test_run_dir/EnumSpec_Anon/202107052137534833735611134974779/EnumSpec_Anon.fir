;chisel3.BuildInfo$@527a8665
circuit EnumSpec_Anon : 
  module EnumSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire wire : UInt<1>
    wire <= UInt<1>("h00")
    node _T = eq(wire, UInt<1>("h00")) @[EnumSpec.scala 15:27]
    node _T_1 = bits(reset, 0, 0) @[EnumSpec.scala 15:21]
    node _T_2 = or(_T, _T_1) @[EnumSpec.scala 15:21]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[EnumSpec.scala 15:21]
    when _T_3 : @[EnumSpec.scala 15:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at EnumSpec.scala:15 chisel3.assert(wire === onlyState)\n") @[EnumSpec.scala 15:21]
      stop(clock, UInt<1>(1), 1) @[EnumSpec.scala 15:21]
      skip @[EnumSpec.scala 15:21]
    node _T_4 = bits(reset, 0, 0) @[EnumSpec.scala 16:11]
    node _T_5 = eq(_T_4, UInt<1>("h00")) @[EnumSpec.scala 16:11]
    when _T_5 : @[EnumSpec.scala 16:11]
      stop(clock, UInt<1>(1), 0) @[EnumSpec.scala 16:11]
      skip @[EnumSpec.scala 16:11]
    
