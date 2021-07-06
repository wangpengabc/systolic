;chisel3.BuildInfo$@527a8665
circuit LFSRResetTester : 
  module FooLFSR : 
    input clock : Clock
    input reset : Reset
    output io : {flip seed : {valid : UInt<1>, bits : UInt<1>[4]}, flip increment : UInt<1>, out : UInt<1>[4]}
    
    wire state_res : UInt<1>[4]
    state_res[0] is invalid
    state_res[1] is invalid
    state_res[2] is invalid
    state_res[3] is invalid
    state_res[0] <= UInt<1>("h00") @[LFSR.scala 62:29]
    reg state : UInt<1>[4], clock with : (reset => (reset, state_res)) @[PRNG.scala 47:50]
    when io.increment : @[PRNG.scala 61:23]
      state[0] <= state[0] @[PRNG.scala 62:11]
      state[1] <= state[1] @[PRNG.scala 62:11]
      state[2] <= state[2] @[PRNG.scala 62:11]
      state[3] <= state[3] @[PRNG.scala 62:11]
      skip @[PRNG.scala 61:23]
    when io.seed.valid : @[PRNG.scala 65:25]
      state[0] <= io.seed.bits[0] @[PRNG.scala 66:11]
      state[1] <= io.seed.bits[1] @[PRNG.scala 66:11]
      state[2] <= io.seed.bits[2] @[PRNG.scala 66:11]
      state[3] <= io.seed.bits[3] @[PRNG.scala 66:11]
      skip @[PRNG.scala 65:25]
    io.out[0] <= state[0] @[PRNG.scala 69:10]
    io.out[1] <= state[1] @[PRNG.scala 69:10]
    io.out[2] <= state[2] @[PRNG.scala 69:10]
    io.out[3] <= state[3] @[PRNG.scala 69:10]
    
  module LFSRResetTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst lfsr of FooLFSR @[LFSRSpec.scala 80:20]
    lfsr.clock <= clock
    lfsr.reset <= reset
    lfsr.io.seed.valid <= UInt<1>("h00") @[LFSRSpec.scala 81:22]
    lfsr.io.seed.bits[0] is invalid @[LFSRSpec.scala 82:21]
    lfsr.io.seed.bits[1] is invalid @[LFSRSpec.scala 82:21]
    lfsr.io.seed.bits[2] is invalid @[LFSRSpec.scala 82:21]
    lfsr.io.seed.bits[3] is invalid @[LFSRSpec.scala 82:21]
    lfsr.io.increment <= UInt<1>("h01") @[LFSRSpec.scala 83:21]
    reg count : UInt<3>, clock with : (reset => (reset, UInt<3>("h00"))) @[Counter.scala 60:40]
    wire done : UInt<1>
    done <= UInt<1>("h00")
    when UInt<1>("h01") : @[Counter.scala 118:17]
      node wrap_wrap = eq(count, UInt<3>("h04")) @[Counter.scala 72:24]
      node _wrap_value_T = add(count, UInt<1>("h01")) @[Counter.scala 76:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 76:24]
      count <= _wrap_value_T_1 @[Counter.scala 76:15]
      when wrap_wrap : @[Counter.scala 86:20]
        count <= UInt<1>("h00") @[Counter.scala 86:28]
        skip @[Counter.scala 86:20]
      done <= wrap_wrap @[Counter.scala 118:24]
      skip @[Counter.scala 118:17]
    node _lfsr_io_seed_valid_T = eq(count, UInt<1>("h01")) @[LFSRSpec.scala 87:31]
    lfsr.io.seed.valid <= _lfsr_io_seed_valid_T @[LFSRSpec.scala 87:22]
    lfsr.io.seed.bits[0] <= UInt<1>("h01") @[LFSRSpec.scala 88:21]
    lfsr.io.seed.bits[1] <= UInt<1>("h01") @[LFSRSpec.scala 88:21]
    lfsr.io.seed.bits[2] <= UInt<1>("h01") @[LFSRSpec.scala 88:21]
    lfsr.io.seed.bits[3] <= UInt<1>("h01") @[LFSRSpec.scala 88:21]
    lfsr.io.increment <= UInt<1>("h01") @[LFSRSpec.scala 89:21]
    node _T = eq(count, UInt<2>("h02")) @[LFSRSpec.scala 91:15]
    when _T : @[LFSRSpec.scala 91:24]
      node lo = cat(lfsr.io.out[1], lfsr.io.out[0]) @[LFSRSpec.scala 92:24]
      node hi = cat(lfsr.io.out[3], lfsr.io.out[2]) @[LFSRSpec.scala 92:24]
      node _T_1 = cat(hi, lo) @[LFSRSpec.scala 92:24]
      node _T_2 = eq(_T_1, UInt<4>("h0f")) @[LFSRSpec.scala 92:31]
      node _T_3 = bits(reset, 0, 0) @[LFSRSpec.scala 92:11]
      node _T_4 = or(_T_2, _T_3) @[LFSRSpec.scala 92:11]
      node _T_5 = eq(_T_4, UInt<1>("h00")) @[LFSRSpec.scala 92:11]
      when _T_5 : @[LFSRSpec.scala 92:11]
        printf(clock, UInt<1>(1), "Assertion failed: LFSR is NOT locked up, but should be!\n    at LFSRSpec.scala:92 assert(lfsr.io.out.asUInt === lockUpValue.U, \"LFSR is NOT locked up, but should be!\")\n") @[LFSRSpec.scala 92:11]
        stop(clock, UInt<1>(1), 1) @[LFSRSpec.scala 92:11]
        skip @[LFSRSpec.scala 92:11]
      skip @[LFSRSpec.scala 91:24]
    node _lfsr_reset_T = eq(count, UInt<2>("h03")) @[LFSRSpec.scala 95:23]
    lfsr.reset <= _lfsr_reset_T @[LFSRSpec.scala 95:14]
    node _T_6 = eq(count, UInt<3>("h04")) @[LFSRSpec.scala 97:15]
    when _T_6 : @[LFSRSpec.scala 97:24]
      node lo_1 = cat(lfsr.io.out[1], lfsr.io.out[0]) @[LFSRSpec.scala 98:24]
      node hi_1 = cat(lfsr.io.out[3], lfsr.io.out[2]) @[LFSRSpec.scala 98:24]
      node _T_7 = cat(hi_1, lo_1) @[LFSRSpec.scala 98:24]
      node _T_8 = neq(_T_7, UInt<4>("h0f")) @[LFSRSpec.scala 98:31]
      node _T_9 = bits(reset, 0, 0) @[LFSRSpec.scala 98:11]
      node _T_10 = or(_T_8, _T_9) @[LFSRSpec.scala 98:11]
      node _T_11 = eq(_T_10, UInt<1>("h00")) @[LFSRSpec.scala 98:11]
      when _T_11 : @[LFSRSpec.scala 98:11]
        printf(clock, UInt<1>(1), "Assertion failed: LFSR is locked up, but should not be after reset!\n    at LFSRSpec.scala:98 assert(lfsr.io.out.asUInt =/= lockUpValue.U, \"LFSR is locked up, but should not be after reset!\")\n") @[LFSRSpec.scala 98:11]
        stop(clock, UInt<1>(1), 1) @[LFSRSpec.scala 98:11]
        skip @[LFSRSpec.scala 98:11]
      skip @[LFSRSpec.scala 97:24]
    when done : @[LFSRSpec.scala 101:15]
      node _T_12 = bits(reset, 0, 0) @[LFSRSpec.scala 102:9]
      node _T_13 = eq(_T_12, UInt<1>("h00")) @[LFSRSpec.scala 102:9]
      when _T_13 : @[LFSRSpec.scala 102:9]
        stop(clock, UInt<1>(1), 0) @[LFSRSpec.scala 102:9]
        skip @[LFSRSpec.scala 102:9]
      skip @[LFSRSpec.scala 101:15]
    
