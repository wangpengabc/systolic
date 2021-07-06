;chisel3.BuildInfo$@527a8665
circuit MixedVecIOTester : 
  module MixedVecIOPassthroughModule : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : {3 : SInt<3>, 2 : UInt<10>, 1 : UInt<8>, 0 : UInt<1>}, out : {3 : SInt<3>, 2 : UInt<10>, 1 : UInt<8>, 0 : UInt<1>}}
    
    io.out.0 <= io.in.0 @[MixedVec.scala 115:9]
    io.out.1 <= io.in.1 @[MixedVec.scala 115:9]
    io.out.2 <= io.in.2 @[MixedVec.scala 115:9]
    io.out.3 <= io.in.3 @[MixedVec.scala 115:9]
    
  module MixedVecIOTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire v : {3 : SInt<3>, 2 : UInt<10>, 1 : UInt<8>, 0 : UInt<1>} @[MixedVec.scala 27:26]
    v.0 <= UInt<1>("h01") @[MixedVec.scala 30:9]
    v.1 <= UInt<8>("h0a8") @[MixedVec.scala 30:9]
    v.2 <= UInt<10>("h0378") @[MixedVec.scala 30:9]
    v.3 <= asSInt(UInt<3>("h05")) @[MixedVec.scala 30:9]
    inst dut of MixedVecIOPassthroughModule @[MixedVecSpec.scala 48:19]
    dut.clock <= clock
    dut.reset <= reset
    dut.io.in.0 <= v.0 @[MixedVec.scala 115:9]
    dut.io.in.1 <= v.1 @[MixedVec.scala 115:9]
    dut.io.in.2 <= v.2 @[MixedVec.scala 115:9]
    dut.io.in.3 <= v.3 @[MixedVec.scala 115:9]
    node _T = eq(dut.io.out.0, UInt<1>("h01")) @[MixedVecSpec.scala 51:21]
    node _T_1 = bits(reset, 0, 0) @[MixedVecSpec.scala 51:11]
    node _T_2 = or(_T, _T_1) @[MixedVecSpec.scala 51:11]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[MixedVecSpec.scala 51:11]
    when _T_3 : @[MixedVecSpec.scala 51:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:51 assert(a.asUInt === b.asUInt)\n") @[MixedVecSpec.scala 51:11]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 51:11]
      skip @[MixedVecSpec.scala 51:11]
    node _T_4 = eq(dut.io.out.1, UInt<8>("h0a8")) @[MixedVecSpec.scala 51:21]
    node _T_5 = bits(reset, 0, 0) @[MixedVecSpec.scala 51:11]
    node _T_6 = or(_T_4, _T_5) @[MixedVecSpec.scala 51:11]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[MixedVecSpec.scala 51:11]
    when _T_7 : @[MixedVecSpec.scala 51:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:51 assert(a.asUInt === b.asUInt)\n") @[MixedVecSpec.scala 51:11]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 51:11]
      skip @[MixedVecSpec.scala 51:11]
    node _T_8 = eq(dut.io.out.2, UInt<10>("h0378")) @[MixedVecSpec.scala 51:21]
    node _T_9 = bits(reset, 0, 0) @[MixedVecSpec.scala 51:11]
    node _T_10 = or(_T_8, _T_9) @[MixedVecSpec.scala 51:11]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[MixedVecSpec.scala 51:11]
    when _T_11 : @[MixedVecSpec.scala 51:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:51 assert(a.asUInt === b.asUInt)\n") @[MixedVecSpec.scala 51:11]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 51:11]
      skip @[MixedVecSpec.scala 51:11]
    node _T_12 = asUInt(dut.io.out.3) @[MixedVecSpec.scala 51:14]
    node _T_13 = asUInt(asSInt(UInt<3>("h05"))) @[MixedVecSpec.scala 51:27]
    node _T_14 = eq(_T_12, _T_13) @[MixedVecSpec.scala 51:21]
    node _T_15 = bits(reset, 0, 0) @[MixedVecSpec.scala 51:11]
    node _T_16 = or(_T_14, _T_15) @[MixedVecSpec.scala 51:11]
    node _T_17 = eq(_T_16, UInt<1>("h00")) @[MixedVecSpec.scala 51:11]
    when _T_17 : @[MixedVecSpec.scala 51:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:51 assert(a.asUInt === b.asUInt)\n") @[MixedVecSpec.scala 51:11]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 51:11]
      skip @[MixedVecSpec.scala 51:11]
    node _T_18 = bits(reset, 0, 0) @[MixedVecSpec.scala 53:7]
    node _T_19 = eq(_T_18, UInt<1>("h00")) @[MixedVecSpec.scala 53:7]
    when _T_19 : @[MixedVecSpec.scala 53:7]
      stop(clock, UInt<1>(1), 0) @[MixedVecSpec.scala 53:7]
      skip @[MixedVecSpec.scala 53:7]
    
