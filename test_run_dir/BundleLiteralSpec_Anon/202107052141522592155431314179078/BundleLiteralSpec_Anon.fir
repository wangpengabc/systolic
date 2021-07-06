;chisel3.BuildInfo$@527a8665
circuit BundleLiteralSpec_Anon : 
  module BundleLiteralSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    node _T = eq(UInt<6>("h02a"), UInt<6>("h02a")) @[BundleLiteralSpec.scala 99:34]
    node _T_1 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 99:21]
    node _T_2 = or(_T, _T_1) @[BundleLiteralSpec.scala 99:21]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[BundleLiteralSpec.scala 99:21]
    when _T_3 : @[BundleLiteralSpec.scala 99:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BundleLiteralSpec.scala:99 chisel3.assert(bundleLit.a === 42.U)\n") @[BundleLiteralSpec.scala 99:21]
      stop(clock, UInt<1>(1), 1) @[BundleLiteralSpec.scala 99:21]
      skip @[BundleLiteralSpec.scala 99:21]
    wire bundleWire : {a : UInt<8>, b : UInt<1>, c : UInt<1>} @[BundleLiteralSpec.scala 101:28]
    bundleWire.c is invalid @[BundleLiteralSpec.scala 102:18]
    bundleWire.b is invalid @[BundleLiteralSpec.scala 102:18]
    bundleWire.a <= UInt<6>("h02a") @[BundleLiteralSpec.scala 102:18]
    node _T_4 = eq(bundleWire.a, UInt<6>("h02a")) @[BundleLiteralSpec.scala 104:35]
    node _T_5 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 104:21]
    node _T_6 = or(_T_4, _T_5) @[BundleLiteralSpec.scala 104:21]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[BundleLiteralSpec.scala 104:21]
    when _T_7 : @[BundleLiteralSpec.scala 104:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BundleLiteralSpec.scala:104 chisel3.assert(bundleWire.a === 42.U)\n") @[BundleLiteralSpec.scala 104:21]
      stop(clock, UInt<1>(1), 1) @[BundleLiteralSpec.scala 104:21]
      skip @[BundleLiteralSpec.scala 104:21]
    node _T_8 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 106:11]
    node _T_9 = eq(_T_8, UInt<1>("h00")) @[BundleLiteralSpec.scala 106:11]
    when _T_9 : @[BundleLiteralSpec.scala 106:11]
      stop(clock, UInt<1>(1), 0) @[BundleLiteralSpec.scala 106:11]
      skip @[BundleLiteralSpec.scala 106:11]
    
