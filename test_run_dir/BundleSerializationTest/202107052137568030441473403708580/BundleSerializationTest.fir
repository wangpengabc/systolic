;chisel3.BuildInfo$@527a8665
circuit BundleSerializationTest : 
  module BundleSerializationTest : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire bundle : {foo : UInt<16>, bar : UInt<16>} @[BundleSpec.scala 44:22]
    bundle.foo <= UInt<13>("h01234") @[BundleSpec.scala 45:16]
    bundle.bar <= UInt<15>("h05678") @[BundleSpec.scala 46:16]
    node uint = cat(bundle.foo, bundle.bar) @[BundleSpec.scala 48:23]
    node _T = eq(uint, UInt<32>("h012345678")) @[BundleSpec.scala 50:17]
    node _T_1 = bits(reset, 0, 0) @[BundleSpec.scala 50:11]
    node _T_2 = or(_T, _T_1) @[BundleSpec.scala 50:11]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[BundleSpec.scala 50:11]
    when _T_3 : @[BundleSpec.scala 50:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BundleSpec.scala:50 assert(uint === \"h12345678\".asUInt(32.W))\n") @[BundleSpec.scala 50:11]
      stop(clock, UInt<1>(1), 1) @[BundleSpec.scala 50:11]
      skip @[BundleSpec.scala 50:11]
    wire bundle2 : {foo : UInt<16>, bar : UInt<16>} @[BundleSpec.scala 52:32]
    wire _bundle2_WIRE : UInt<32>
    _bundle2_WIRE <= uint
    node _bundle2_T = bits(_bundle2_WIRE, 15, 0) @[BundleSpec.scala 52:32]
    bundle2.bar <= _bundle2_T @[BundleSpec.scala 52:32]
    node _bundle2_T_1 = bits(_bundle2_WIRE, 31, 16) @[BundleSpec.scala 52:32]
    bundle2.foo <= _bundle2_T_1 @[BundleSpec.scala 52:32]
    node _T_4 = eq(UInt<13>("h01234"), bundle2.foo) @[BundleSpec.scala 53:21]
    node _T_5 = bits(reset, 0, 0) @[BundleSpec.scala 53:11]
    node _T_6 = or(_T_4, _T_5) @[BundleSpec.scala 53:11]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[BundleSpec.scala 53:11]
    when _T_7 : @[BundleSpec.scala 53:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BundleSpec.scala:53 assert(0x1234.U === bundle2.foo)\n") @[BundleSpec.scala 53:11]
      stop(clock, UInt<1>(1), 1) @[BundleSpec.scala 53:11]
      skip @[BundleSpec.scala 53:11]
    node _T_8 = eq(UInt<15>("h05678"), bundle2.bar) @[BundleSpec.scala 54:21]
    node _T_9 = bits(reset, 0, 0) @[BundleSpec.scala 54:11]
    node _T_10 = or(_T_8, _T_9) @[BundleSpec.scala 54:11]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[BundleSpec.scala 54:11]
    when _T_11 : @[BundleSpec.scala 54:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BundleSpec.scala:54 assert(0x5678.U === bundle2.bar)\n") @[BundleSpec.scala 54:11]
      stop(clock, UInt<1>(1), 1) @[BundleSpec.scala 54:11]
      skip @[BundleSpec.scala 54:11]
    node _T_12 = bits(reset, 0, 0) @[BundleSpec.scala 55:9]
    node _T_13 = eq(_T_12, UInt<1>("h00")) @[BundleSpec.scala 55:9]
    when _T_13 : @[BundleSpec.scala 55:9]
      stop(clock, UInt<1>(1), 0) @[BundleSpec.scala 55:9]
      skip @[BundleSpec.scala 55:9]
    
