;chisel3.BuildInfo$@527a8665
circuit LFSRMaxPeriod : 
  module GaloisLFSR : 
    input clock : Clock
    input reset : Reset
    output io : {flip seed : {valid : UInt<1>, bits : UInt<1>[4]}, flip increment : UInt<1>, out : UInt<1>[4]}
    
    wire _state_WIRE : UInt<1>[4] @[PRNG.scala 38:28]
    _state_WIRE[0] <= UInt<1>("h01") @[PRNG.scala 38:28]
    _state_WIRE[1] <= UInt<1>("h00") @[PRNG.scala 38:28]
    _state_WIRE[2] <= UInt<1>("h00") @[PRNG.scala 38:28]
    _state_WIRE[3] <= UInt<1>("h00") @[PRNG.scala 38:28]
    reg state : UInt<1>[4], clock with : (reset => (reset, _state_WIRE)) @[PRNG.scala 47:50]
    when io.increment : @[PRNG.scala 61:23]
      node _T = xor(state[3], state[0]) @[LFSR.scala 20:43]
      node _T_1 = eq(_T, UInt<1>("h00")) @[LFSR.scala 20:39]
      state[0] <= state[1] @[PRNG.scala 62:11]
      state[1] <= state[2] @[PRNG.scala 62:11]
      state[2] <= _T_1 @[PRNG.scala 62:11]
      state[3] <= state[0] @[PRNG.scala 62:11]
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
    
  module LFSRMaxPeriod : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst rv_prng of GaloisLFSR @[PRNG.scala 82:22]
    rv_prng.clock <= clock
    rv_prng.reset <= reset
    rv_prng.io.seed.valid <= UInt<1>("h00") @[PRNG.scala 83:24]
    rv_prng.io.seed.bits[0] is invalid @[PRNG.scala 84:23]
    rv_prng.io.seed.bits[1] is invalid @[PRNG.scala 84:23]
    rv_prng.io.seed.bits[2] is invalid @[PRNG.scala 84:23]
    rv_prng.io.seed.bits[3] is invalid @[PRNG.scala 84:23]
    rv_prng.io.increment <= UInt<1>("h01") @[PRNG.scala 85:23]
    node rv_lo = cat(rv_prng.io.out[1], rv_prng.io.out[0]) @[PRNG.scala 86:17]
    node rv_hi = cat(rv_prng.io.out[3], rv_prng.io.out[2]) @[PRNG.scala 86:17]
    node rv = cat(rv_hi, rv_lo) @[PRNG.scala 86:17]
    reg started : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[LFSRSpec.scala 21:24]
    started <= UInt<1>("h01") @[LFSRSpec.scala 21:24]
    node _seed_T = eq(started, UInt<1>("h00")) @[LFSRSpec.scala 22:24]
    reg seed : UInt, clock with : (reset => (_seed_T, rv)) @[LFSRSpec.scala 22:43]
    reg wrap_value : UInt<4>, clock with : (reset => (reset, UInt<4>("h00"))) @[Counter.scala 60:40]
    wire wrap : UInt<1>
    wrap <= UInt<1>("h00")
    when started : @[Counter.scala 118:17]
      node wrap_wrap_wrap = eq(wrap_value, UInt<4>("h0e")) @[Counter.scala 72:24]
      node _wrap_wrap_value_T = add(wrap_value, UInt<1>("h01")) @[Counter.scala 76:24]
      node _wrap_wrap_value_T_1 = tail(_wrap_wrap_value_T, 1) @[Counter.scala 76:24]
      wrap_value <= _wrap_wrap_value_T_1 @[Counter.scala 76:15]
      when wrap_wrap_wrap : @[Counter.scala 86:20]
        wrap_value <= UInt<1>("h00") @[Counter.scala 86:28]
        skip @[Counter.scala 86:20]
      wrap <= wrap_wrap_wrap @[Counter.scala 118:24]
      skip @[Counter.scala 118:17]
    node _T = eq(rv, seed) @[LFSRSpec.scala 26:12]
    node _T_1 = and(_T, started) @[LFSRSpec.scala 26:21]
    when _T_1 : @[LFSRSpec.scala 26:33]
      node _T_2 = bits(reset, 0, 0) @[LFSRSpec.scala 27:19]
      node _T_3 = or(wrap, _T_2) @[LFSRSpec.scala 27:19]
      node _T_4 = eq(_T_3, UInt<1>("h00")) @[LFSRSpec.scala 27:19]
      when _T_4 : @[LFSRSpec.scala 27:19]
        printf(clock, UInt<1>(1), "Assertion failed\n    at LFSRSpec.scala:27 chisel3.assert(wrap)\n") @[LFSRSpec.scala 27:19]
        stop(clock, UInt<1>(1), 1) @[LFSRSpec.scala 27:19]
        skip @[LFSRSpec.scala 27:19]
      node _T_5 = bits(reset, 0, 0) @[LFSRSpec.scala 28:9]
      node _T_6 = eq(_T_5, UInt<1>("h00")) @[LFSRSpec.scala 28:9]
      when _T_6 : @[LFSRSpec.scala 28:9]
        stop(clock, UInt<1>(1), 0) @[LFSRSpec.scala 28:9]
        skip @[LFSRSpec.scala 28:9]
      skip @[LFSRSpec.scala 26:33]
    reg last : UInt, clock @[LFSRSpec.scala 31:21]
    last <= rv @[LFSRSpec.scala 31:21]
    node _T_7 = neq(rv, last) @[LFSRSpec.scala 32:21]
    node _T_8 = bits(reset, 0, 0) @[LFSRSpec.scala 32:17]
    node _T_9 = or(_T_7, _T_8) @[LFSRSpec.scala 32:17]
    node _T_10 = eq(_T_9, UInt<1>("h00")) @[LFSRSpec.scala 32:17]
    when _T_10 : @[LFSRSpec.scala 32:17]
      printf(clock, UInt<1>(1), "Assertion failed: LFSR last value (0b%b) was equal to current value (0b%b)\n    at LFSRSpec.scala:32 chisel3.assert(rv =/= last, \"LFSR last value (0b%%b) was equal to current value (0b%%b)\", rv, last)\n", rv, last) @[LFSRSpec.scala 32:17]
      stop(clock, UInt<1>(1), 1) @[LFSRSpec.scala 32:17]
      skip @[LFSRSpec.scala 32:17]
    
