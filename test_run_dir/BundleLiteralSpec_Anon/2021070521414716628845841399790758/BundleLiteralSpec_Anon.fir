;chisel3.BuildInfo$@527a8665
circuit BundleLiteralSpec_Anon : 
  module BundleLiteralSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    node lo = asUInt(UInt<1>("h01")) @[BundleLiteralSpec.scala 35:38]
    node hi = cat(UInt<6>("h02a"), UInt<1>("h00")) @[BundleLiteralSpec.scala 35:38]
    node _T = cat(hi, lo) @[BundleLiteralSpec.scala 35:38]
    node _T_1 = eq(_T, UInt<8>("h0a9")) @[BundleLiteralSpec.scala 35:41]
    node _T_2 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 35:21]
    node _T_3 = or(_T_1, _T_2) @[BundleLiteralSpec.scala 35:21]
    node _T_4 = eq(_T_3, UInt<1>("h00")) @[BundleLiteralSpec.scala 35:21]
    when _T_4 : @[BundleLiteralSpec.scala 35:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BundleLiteralSpec.scala:35 chisel3.assert(bundleLit.asUInt() === bundleLit.litOption.get.U)  // sanity-check consistency with runtime\n") @[BundleLiteralSpec.scala 35:21]
      stop(clock, UInt<1>(1), 1) @[BundleLiteralSpec.scala 35:21]
      skip @[BundleLiteralSpec.scala 35:21]
    node lo_1 = asUInt(asFixedPoint(UInt<16>("h048"), 4)) @[BundleLiteralSpec.scala 43:42]
    node hi_lo = asUInt(asSInt(UInt<32>("h0f4110ff3"))) @[BundleLiteralSpec.scala 43:42]
    node hi_1 = cat(UInt<48>("h0deaddeadbeef"), hi_lo) @[BundleLiteralSpec.scala 43:42]
    node _T_5 = cat(hi_1, lo_1) @[BundleLiteralSpec.scala 43:42]
    node _T_6 = eq(_T_5, UInt<96>("h0deaddeadbeeff4110ff30048")) @[BundleLiteralSpec.scala 43:45]
    node _T_7 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 43:21]
    node _T_8 = or(_T_6, _T_7) @[BundleLiteralSpec.scala 43:21]
    node _T_9 = eq(_T_8, UInt<1>("h00")) @[BundleLiteralSpec.scala 43:21]
    when _T_9 : @[BundleLiteralSpec.scala 43:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BundleLiteralSpec.scala:43 chisel3.assert(longBundleLit.asUInt() === longBundleLit.litOption.get.U)\n") @[BundleLiteralSpec.scala 43:21]
      stop(clock, UInt<1>(1), 1) @[BundleLiteralSpec.scala 43:21]
      skip @[BundleLiteralSpec.scala 43:21]
    node _T_10 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 45:11]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[BundleLiteralSpec.scala 45:11]
    when _T_11 : @[BundleLiteralSpec.scala 45:11]
      stop(clock, UInt<1>(1), 0) @[BundleLiteralSpec.scala 45:11]
      skip @[BundleLiteralSpec.scala 45:11]
    
