;chisel3.BuildInfo$@527a8665
circuit BundleLiteralSpec_Anon : 
  module BundleLiteralSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire _x_WIRE : UInt<1>
    _x_WIRE is invalid
    node x = or(_x_WIRE, UInt<1>("h01")) @[BundleLiteralSpec.scala 231:49]
    node _T = eq(x, UInt<1>("h01")) @[BundleLiteralSpec.scala 232:24]
    node _T_1 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 232:21]
    node _T_2 = or(_T, _T_1) @[BundleLiteralSpec.scala 232:21]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[BundleLiteralSpec.scala 232:21]
    when _T_3 : @[BundleLiteralSpec.scala 232:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BundleLiteralSpec.scala:232 chisel3.assert(x === true.B)\n") @[BundleLiteralSpec.scala 232:21]
      stop(clock, UInt<1>(1), 1) @[BundleLiteralSpec.scala 232:21]
      skip @[BundleLiteralSpec.scala 232:21]
    node _T_4 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 233:11]
    node _T_5 = eq(_T_4, UInt<1>("h00")) @[BundleLiteralSpec.scala 233:11]
    when _T_5 : @[BundleLiteralSpec.scala 233:11]
      stop(clock, UInt<1>(1), 0) @[BundleLiteralSpec.scala 233:11]
      skip @[BundleLiteralSpec.scala 233:11]
    
