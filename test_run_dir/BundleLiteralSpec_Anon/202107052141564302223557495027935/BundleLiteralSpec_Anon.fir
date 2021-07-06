;chisel3.BuildInfo$@527a8665
circuit BundleLiteralSpec_Anon : 
  module BundleLiteralSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire bundleWire : {a : UInt<8>, b : UInt<1>, c : UInt<1>} @[BundleLiteralSpec.scala 167:28]
    bundleWire.c <= UInt<1>("h01") @[BundleLiteralSpec.scala 169:18]
    bundleWire.b <= UInt<1>("h01") @[BundleLiteralSpec.scala 169:18]
    bundleWire.a <= UInt<6>("h02a") @[BundleLiteralSpec.scala 169:18]
    node _T = eq(bundleWire.a, UInt<6>("h02a")) @[BundleLiteralSpec.scala 171:35]
    node _T_1 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 171:21]
    node _T_2 = or(_T, _T_1) @[BundleLiteralSpec.scala 171:21]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[BundleLiteralSpec.scala 171:21]
    when _T_3 : @[BundleLiteralSpec.scala 171:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BundleLiteralSpec.scala:171 chisel3.assert(bundleWire.a === 42.U)\n") @[BundleLiteralSpec.scala 171:21]
      stop(clock, UInt<1>(1), 1) @[BundleLiteralSpec.scala 171:21]
      skip @[BundleLiteralSpec.scala 171:21]
    node _T_4 = eq(bundleWire.b, UInt<1>("h01")) @[BundleLiteralSpec.scala 172:35]
    node _T_5 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 172:21]
    node _T_6 = or(_T_4, _T_5) @[BundleLiteralSpec.scala 172:21]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[BundleLiteralSpec.scala 172:21]
    when _T_7 : @[BundleLiteralSpec.scala 172:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BundleLiteralSpec.scala:172 chisel3.assert(bundleWire.b === true.B)\n") @[BundleLiteralSpec.scala 172:21]
      stop(clock, UInt<1>(1), 1) @[BundleLiteralSpec.scala 172:21]
      skip @[BundleLiteralSpec.scala 172:21]
    node _T_8 = eq(bundleWire.c, UInt<1>("h01")) @[BundleLiteralSpec.scala 173:35]
    node _T_9 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 173:21]
    node _T_10 = or(_T_8, _T_9) @[BundleLiteralSpec.scala 173:21]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[BundleLiteralSpec.scala 173:21]
    when _T_11 : @[BundleLiteralSpec.scala 173:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BundleLiteralSpec.scala:173 chisel3.assert(bundleWire.c === MyEnum.sB)\n") @[BundleLiteralSpec.scala 173:21]
      stop(clock, UInt<1>(1), 1) @[BundleLiteralSpec.scala 173:21]
      skip @[BundleLiteralSpec.scala 173:21]
    node _T_12 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 174:11]
    node _T_13 = eq(_T_12, UInt<1>("h00")) @[BundleLiteralSpec.scala 174:11]
    when _T_13 : @[BundleLiteralSpec.scala 174:11]
      stop(clock, UInt<1>(1), 0) @[BundleLiteralSpec.scala 174:11]
      skip @[BundleLiteralSpec.scala 174:11]
    
