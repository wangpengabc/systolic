;chisel3.BuildInfo$@527a8665
circuit ModuloAssertTester : 
  module ModuloAssertTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    node _T = rem(UInt<3>("h04"), UInt<2>("h02")) @[Assert.scala 48:15]
    node _T_1 = eq(_T, UInt<1>("h00")) @[Assert.scala 48:22]
    node _T_2 = bits(reset, 0, 0) @[Assert.scala 48:9]
    node _T_3 = or(_T_1, _T_2) @[Assert.scala 48:9]
    node _T_4 = eq(_T_3, UInt<1>("h00")) @[Assert.scala 48:9]
    when _T_4 : @[Assert.scala 48:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at Assert.scala:48 assert((4.U %% 2.U) === 0.U)\n") @[Assert.scala 48:9]
      stop(clock, UInt<1>(1), 1) @[Assert.scala 48:9]
      skip @[Assert.scala 48:9]
    node _T_5 = bits(reset, 0, 0) @[Assert.scala 49:7]
    node _T_6 = eq(_T_5, UInt<1>("h00")) @[Assert.scala 49:7]
    when _T_6 : @[Assert.scala 49:7]
      stop(clock, UInt<1>(1), 0) @[Assert.scala 49:7]
      skip @[Assert.scala 49:7]
    
