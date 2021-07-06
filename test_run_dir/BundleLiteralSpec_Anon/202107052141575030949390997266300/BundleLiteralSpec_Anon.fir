;chisel3.BuildInfo$@527a8665
circuit BundleLiteralSpec_Anon : 
  module BundleLiteralSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire bundleWire : {a : UInt<8>, b : UInt<1>, c : UInt<1>} @[BundleLiteralSpec.scala 180:28]
    bundleWire.c is invalid @[BundleLiteralSpec.scala 182:18]
    bundleWire.b is invalid @[BundleLiteralSpec.scala 182:18]
    bundleWire.a <= UInt<6>("h02a") @[BundleLiteralSpec.scala 182:18]
    node _T = eq(bundleWire.a, UInt<6>("h02a")) @[BundleLiteralSpec.scala 184:35]
    node _T_1 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 184:21]
    node _T_2 = or(_T, _T_1) @[BundleLiteralSpec.scala 184:21]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[BundleLiteralSpec.scala 184:21]
    when _T_3 : @[BundleLiteralSpec.scala 184:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BundleLiteralSpec.scala:184 chisel3.assert(bundleWire.a === 42.U)\n") @[BundleLiteralSpec.scala 184:21]
      stop(clock, UInt<1>(1), 1) @[BundleLiteralSpec.scala 184:21]
      skip @[BundleLiteralSpec.scala 184:21]
    node _T_4 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 185:11]
    node _T_5 = eq(_T_4, UInt<1>("h00")) @[BundleLiteralSpec.scala 185:11]
    when _T_5 : @[BundleLiteralSpec.scala 185:11]
      stop(clock, UInt<1>(1), 0) @[BundleLiteralSpec.scala 185:11]
      skip @[BundleLiteralSpec.scala 185:11]
    
