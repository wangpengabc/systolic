;chisel3.BuildInfo$@527a8665
circuit BundleLiteralSpec_Anon : 
  module BundleLiteralSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    reg r : UInt, clock with : (reset => (reset, UInt<6>("h02a"))) @[BundleLiteralSpec.scala 213:22]
    node _r_T = add(r, UInt<1>("h01")) @[BundleLiteralSpec.scala 214:14]
    node _r_T_1 = tail(_r_T, 1) @[BundleLiteralSpec.scala 214:14]
    r <= _r_T_1 @[BundleLiteralSpec.scala 214:9]
    node _T = eq(r, UInt<6>("h02a")) @[BundleLiteralSpec.scala 215:24]
    node _T_1 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 215:21]
    node _T_2 = or(_T, _T_1) @[BundleLiteralSpec.scala 215:21]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[BundleLiteralSpec.scala 215:21]
    when _T_3 : @[BundleLiteralSpec.scala 215:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BundleLiteralSpec.scala:215 chisel3.assert(r === 42.U) // coming out of reset\n") @[BundleLiteralSpec.scala 215:21]
      stop(clock, UInt<1>(1), 1) @[BundleLiteralSpec.scala 215:21]
      skip @[BundleLiteralSpec.scala 215:21]
    node _T_4 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 216:11]
    node _T_5 = eq(_T_4, UInt<1>("h00")) @[BundleLiteralSpec.scala 216:11]
    when _T_5 : @[BundleLiteralSpec.scala 216:11]
      stop(clock, UInt<1>(1), 0) @[BundleLiteralSpec.scala 216:11]
      skip @[BundleLiteralSpec.scala 216:11]
    
