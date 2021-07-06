;chisel3.BuildInfo$@527a8665
circuit MixedVecConnectWithSeqTester : 
  module MixedVecIOPassthroughModule : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : {2 : UInt<8>, 1 : UInt<8>, 0 : UInt<8>}, out : {2 : UInt<8>, 1 : UInt<8>, 0 : UInt<8>}}
    
    io.out.0 <= io.in.0 @[MixedVec.scala 115:9]
    io.out.1 <= io.in.1 @[MixedVec.scala 115:9]
    io.out.2 <= io.in.2 @[MixedVec.scala 115:9]
    
  module MixedVecConnectWithSeqTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst m of MixedVecIOPassthroughModule @[MixedVecSpec.scala 131:17]
    m.clock <= clock
    m.reset <= reset
    m.io.in.0 <= UInt<5>("h014") @[MixedVec.scala 115:9]
    m.io.in.1 <= UInt<6>("h028") @[MixedVec.scala 115:9]
    m.io.in.2 <= UInt<7>("h050") @[MixedVec.scala 115:9]
    node _T = eq(m.io.out.0, UInt<5>("h014")) @[MixedVecSpec.scala 135:18]
    node _T_1 = bits(reset, 0, 0) @[MixedVecSpec.scala 135:9]
    node _T_2 = or(_T, _T_1) @[MixedVecSpec.scala 135:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[MixedVecSpec.scala 135:9]
    when _T_3 : @[MixedVecSpec.scala 135:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:135 assert(wire(0) === 20.U)\n") @[MixedVecSpec.scala 135:9]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 135:9]
      skip @[MixedVecSpec.scala 135:9]
    node _T_4 = eq(m.io.out.1, UInt<6>("h028")) @[MixedVecSpec.scala 136:18]
    node _T_5 = bits(reset, 0, 0) @[MixedVecSpec.scala 136:9]
    node _T_6 = or(_T_4, _T_5) @[MixedVecSpec.scala 136:9]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[MixedVecSpec.scala 136:9]
    when _T_7 : @[MixedVecSpec.scala 136:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:136 assert(wire(1) === 40.U)\n") @[MixedVecSpec.scala 136:9]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 136:9]
      skip @[MixedVecSpec.scala 136:9]
    node _T_8 = eq(m.io.out.2, UInt<7>("h050")) @[MixedVecSpec.scala 137:18]
    node _T_9 = bits(reset, 0, 0) @[MixedVecSpec.scala 137:9]
    node _T_10 = or(_T_8, _T_9) @[MixedVecSpec.scala 137:9]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[MixedVecSpec.scala 137:9]
    when _T_11 : @[MixedVecSpec.scala 137:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:137 assert(wire(2) === 80.U)\n") @[MixedVecSpec.scala 137:9]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 137:9]
      skip @[MixedVecSpec.scala 137:9]
    node _T_12 = bits(reset, 0, 0) @[MixedVecSpec.scala 139:7]
    node _T_13 = eq(_T_12, UInt<1>("h00")) @[MixedVecSpec.scala 139:7]
    when _T_13 : @[MixedVecSpec.scala 139:7]
      stop(clock, UInt<1>(1), 0) @[MixedVecSpec.scala 139:7]
      skip @[MixedVecSpec.scala 139:7]
    
