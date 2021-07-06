;chisel3.BuildInfo$@527a8665
circuit Foo : 
  module Foo : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire seq_0 : UInt<4> @[CompatibilitySpec.scala 507:25]
    seq_0 is invalid @[CompatibilitySpec.scala 507:25]
    wire seq_1 : UInt<4> @[CompatibilitySpec.scala 507:49]
    seq_1 is invalid @[CompatibilitySpec.scala 507:49]
    wire seq_2 : UInt<4> @[CompatibilitySpec.scala 507:73]
    seq_2 is invalid @[CompatibilitySpec.scala 507:73]
    wire vec : UInt<4>[3] @[CompatibilitySpec.scala 508:20]
    vec is invalid @[CompatibilitySpec.scala 508:20]
    vec[0] <= seq_0 @[CompatibilitySpec.scala 508:20]
    vec[1] <= seq_1 @[CompatibilitySpec.scala 508:20]
    vec[2] <= seq_2 @[CompatibilitySpec.scala 508:20]
    node _T = eq(vec[UInt<1>("h00")], UInt<1>("h00")) @[CompatibilitySpec.scala 511:40]
    node _T_1 = bits(reset, 0, 0) @[CompatibilitySpec.scala 511:21]
    node _T_2 = or(_T, _T_1) @[CompatibilitySpec.scala 511:21]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[CompatibilitySpec.scala 511:21]
    when _T_3 : @[CompatibilitySpec.scala 511:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at CompatibilitySpec.scala:511 chisel3.assert(vec.read(UInt(0)) === UInt(0))\n") @[CompatibilitySpec.scala 511:21]
      stop(clock, UInt<1>(1), 1) @[CompatibilitySpec.scala 511:21]
      skip @[CompatibilitySpec.scala 511:21]
    vec[UInt<1>("h01")] <= UInt<2>("h03")
    node _T_4 = eq(vec[UInt<1>("h01")], UInt<2>("h03")) @[CompatibilitySpec.scala 515:40]
    node _T_5 = bits(reset, 0, 0) @[CompatibilitySpec.scala 515:21]
    node _T_6 = or(_T_4, _T_5) @[CompatibilitySpec.scala 515:21]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[CompatibilitySpec.scala 515:21]
    when _T_7 : @[CompatibilitySpec.scala 515:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at CompatibilitySpec.scala:515 chisel3.assert(vec.read(UInt(1)) === UInt(3))\n") @[CompatibilitySpec.scala 515:21]
      stop(clock, UInt<1>(1), 1) @[CompatibilitySpec.scala 515:21]
      skip @[CompatibilitySpec.scala 515:21]
    reg done_value : UInt<2>, clock with : (reset => (reset, UInt<2>("h00"))) @[Counter.scala 60:40]
    wire done : UInt<1>
    done <= UInt<1>("h00")
    when UInt<1>("h01") : @[Counter.scala 118:17]
      node done_wrap_wrap = eq(done_value, UInt<2>("h03")) @[Counter.scala 72:24]
      node _done_wrap_value_T = add(done_value, UInt<1>("h01")) @[Counter.scala 76:24]
      node _done_wrap_value_T_1 = tail(_done_wrap_value_T, 1) @[Counter.scala 76:24]
      done_value <= _done_wrap_value_T_1 @[Counter.scala 76:15]
      done <= done_wrap_wrap @[Counter.scala 118:24]
      skip @[Counter.scala 118:17]
    when done : @[CompatibilitySpec.scala 518:19]
      node _T_8 = bits(reset, 0, 0) @[CompatibilitySpec.scala 518:21]
      node _T_9 = eq(_T_8, UInt<1>("h00")) @[CompatibilitySpec.scala 518:21]
      when _T_9 : @[CompatibilitySpec.scala 518:21]
        stop(clock, UInt<1>(1), 0) @[CompatibilitySpec.scala 518:21]
        skip @[CompatibilitySpec.scala 518:21]
      skip @[CompatibilitySpec.scala 518:19]
    
