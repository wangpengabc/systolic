;chisel3.BuildInfo$@527a8665
circuit BundleLiteralSpec_Anon : 
  module BundleLiteralSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire _r_WIRE : {a : UInt<8>, b : UInt<1>, c : UInt<1>}
    _r_WIRE.c <= UInt<1>("h01")
    _r_WIRE.b <= UInt<1>("h01")
    _r_WIRE.a <= UInt<6>("h02a")
    reg r : {a : UInt<8>, b : UInt<1>, c : UInt<1>}, clock with : (reset => (reset, _r_WIRE)) @[BundleLiteralSpec.scala 191:22]
    node r_lo = asUInt(r.c) @[BundleLiteralSpec.scala 192:15]
    node r_hi = cat(r.a, r.b) @[BundleLiteralSpec.scala 192:15]
    node _r_T = cat(r_hi, r_lo) @[BundleLiteralSpec.scala 192:15]
    node _r_T_1 = add(_r_T, UInt<1>("h01")) @[BundleLiteralSpec.scala 192:22]
    node _r_T_2 = tail(_r_T_1, 1) @[BundleLiteralSpec.scala 192:22]
    wire _r_WIRE_1 : {a : UInt<8>, b : UInt<1>, c : UInt<1>} @[BundleLiteralSpec.scala 192:37]
    wire _r_WIRE_2 : UInt<10>
    _r_WIRE_2 <= _r_T_2
    node _r_T_3 = bits(_r_WIRE_2, 0, 0) @[BundleLiteralSpec.scala 192:37]
    wire _r_WIRE_3 : UInt<1> @[BundleLiteralSpec.scala 192:37]
    _r_WIRE_3 <= _r_T_3 @[BundleLiteralSpec.scala 192:37]
    wire _r_WIRE_4 : UInt<1> @[BundleLiteralSpec.scala 192:37]
    _r_WIRE_4 <= _r_WIRE_3 @[BundleLiteralSpec.scala 192:37]
    _r_WIRE_1.c <= _r_WIRE_4 @[BundleLiteralSpec.scala 192:37]
    node _r_T_4 = bits(_r_WIRE_2, 1, 1) @[BundleLiteralSpec.scala 192:37]
    _r_WIRE_1.b <= _r_T_4 @[BundleLiteralSpec.scala 192:37]
    node _r_T_5 = bits(_r_WIRE_2, 9, 2) @[BundleLiteralSpec.scala 192:37]
    _r_WIRE_1.a <= _r_T_5 @[BundleLiteralSpec.scala 192:37]
    r.c <= _r_WIRE_1.c @[BundleLiteralSpec.scala 192:9]
    r.b <= _r_WIRE_1.b @[BundleLiteralSpec.scala 192:9]
    r.a <= _r_WIRE_1.a @[BundleLiteralSpec.scala 192:9]
    node _T = eq(r.a, UInt<6>("h02a")) @[BundleLiteralSpec.scala 195:26]
    node _T_1 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 195:21]
    node _T_2 = or(_T, _T_1) @[BundleLiteralSpec.scala 195:21]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[BundleLiteralSpec.scala 195:21]
    when _T_3 : @[BundleLiteralSpec.scala 195:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BundleLiteralSpec.scala:195 chisel3.assert(r.a === 42.U)\n") @[BundleLiteralSpec.scala 195:21]
      stop(clock, UInt<1>(1), 1) @[BundleLiteralSpec.scala 195:21]
      skip @[BundleLiteralSpec.scala 195:21]
    node _T_4 = eq(r.b, UInt<1>("h01")) @[BundleLiteralSpec.scala 196:26]
    node _T_5 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 196:21]
    node _T_6 = or(_T_4, _T_5) @[BundleLiteralSpec.scala 196:21]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[BundleLiteralSpec.scala 196:21]
    when _T_7 : @[BundleLiteralSpec.scala 196:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BundleLiteralSpec.scala:196 chisel3.assert(r.b === true.B)\n") @[BundleLiteralSpec.scala 196:21]
      stop(clock, UInt<1>(1), 1) @[BundleLiteralSpec.scala 196:21]
      skip @[BundleLiteralSpec.scala 196:21]
    node _T_8 = eq(r.c, UInt<1>("h01")) @[BundleLiteralSpec.scala 197:26]
    node _T_9 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 197:21]
    node _T_10 = or(_T_8, _T_9) @[BundleLiteralSpec.scala 197:21]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[BundleLiteralSpec.scala 197:21]
    when _T_11 : @[BundleLiteralSpec.scala 197:21]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BundleLiteralSpec.scala:197 chisel3.assert(r.c === MyEnum.sB)\n") @[BundleLiteralSpec.scala 197:21]
      stop(clock, UInt<1>(1), 1) @[BundleLiteralSpec.scala 197:21]
      skip @[BundleLiteralSpec.scala 197:21]
    node _T_12 = bits(reset, 0, 0) @[BundleLiteralSpec.scala 198:11]
    node _T_13 = eq(_T_12, UInt<1>("h00")) @[BundleLiteralSpec.scala 198:11]
    when _T_13 : @[BundleLiteralSpec.scala 198:11]
      stop(clock, UInt<1>(1), 0) @[BundleLiteralSpec.scala 198:11]
      skip @[BundleLiteralSpec.scala 198:11]
    
