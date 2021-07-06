;chisel3.BuildInfo$@527a8665
circuit BundleLiteralSpec_Anon : 
  module BundleLiteralSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire _r_WIRE : UInt<1>
    _r_WIRE is invalid
    reg r : UInt<1>, clock with : (reset => (reset, _r_WIRE)) @[BundleLiteralSpec.scala 222:22]
    node _r_T = bits(reset, 0, 0) @[BundleLiteralSpec.scala 223:18]
    r <= _r_T @[BundleLiteralSpec.scala 223:9]
    node _T = bits(reset, 0, 0) @[BundleLiteralSpec.scala 224:13]
    node _T_1 = eq(_T, UInt<1>("h00")) @[BundleLiteralSpec.scala 224:13]
    when _T_1 : @[BundleLiteralSpec.scala 224:13]
      printf(clock, UInt<1>(1), "r = %d\n", r) @[BundleLiteralSpec.scala 224:13]
      skip @[BundleLiteralSpec.scala 224:13]
    node _T_2 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 225:11]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[BundleLiteralSpec.scala 225:11]
    when _T_3 : @[BundleLiteralSpec.scala 225:11]
      stop(clock, UInt<1>(1), 0) @[BundleLiteralSpec.scala 225:11]
      skip @[BundleLiteralSpec.scala 225:11]
    
