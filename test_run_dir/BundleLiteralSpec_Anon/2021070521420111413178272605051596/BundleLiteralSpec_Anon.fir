;chisel3.BuildInfo$@527a8665
circuit BundleLiteralSpec_Anon : 
  module BundleLiteralSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire _r_WIRE : {a : UInt<8>, b : UInt<1>, c : UInt<1>}
    _r_WIRE.c is invalid
    _r_WIRE.b is invalid
    _r_WIRE.a <= UInt<6>("h02a")
    reg r : {a : UInt<8>, b : UInt<1>, c : UInt<1>}, clock with : (reset => (reset, _r_WIRE)) @[BundleLiteralSpec.scala 204:22]
    node _r_a_T = add(r.a, UInt<1>("h01")) @[BundleLiteralSpec.scala 205:18]
    node _r_a_T_1 = tail(_r_a_T, 1) @[BundleLiteralSpec.scala 205:18]
    r.a <= _r_a_T_1 @[BundleLiteralSpec.scala 205:11]
    node _T = eq(r.a, UInt<6>("h02a")) @[BundleLiteralSpec.scala 206:26]
    node _T_1 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 206:21]
    node _T_2 = or(_T, _T_1) @[BundleLiteralSpec.scala 206:21]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[BundleLiteralSpec.scala 206:21]
    when _T_3 : @[BundleLiteralSpec.scala 206:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BundleLiteralSpec.scala:206 chisel3.assert(r.a === 42.U) // coming out of reset\n") @[BundleLiteralSpec.scala 206:21]
      stop(clock, UInt<1>(1), 1) @[BundleLiteralSpec.scala 206:21]
      skip @[BundleLiteralSpec.scala 206:21]
    node _T_4 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 207:11]
    node _T_5 = eq(_T_4, UInt<1>("h00")) @[BundleLiteralSpec.scala 207:11]
    when _T_5 : @[BundleLiteralSpec.scala 207:11]
      stop(clock, UInt<1>(1), 0) @[BundleLiteralSpec.scala 207:11]
      skip @[BundleLiteralSpec.scala 207:11]
    
