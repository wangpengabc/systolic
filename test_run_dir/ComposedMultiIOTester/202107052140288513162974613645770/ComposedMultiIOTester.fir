;chisel3.BuildInfo$@527a8665
circuit ComposedMultiIOTester : 
  module ComposedMultiIOModule : 
    input clock : Clock
    input reset : Reset
    output myLiteralIO : UInt<32>
    output myTraitIO : UInt<32>
    input topModuleIO : UInt<32>
    
    myLiteralIO <= UInt<2>("h02") @[MultiIOModule.scala 25:15]
    myTraitIO <= topModuleIO @[MultiIOModule.scala 39:13]
    
  module ComposedMultiIOTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst composedModule of ComposedMultiIOModule @[MultiIOModule.scala 43:30]
    composedModule.clock <= clock
    composedModule.reset <= reset
    composedModule.topModuleIO <= UInt<6>("h02a") @[MultiIOModule.scala 44:30]
    node _T = eq(composedModule.myTraitIO, UInt<6>("h02a")) @[MultiIOModule.scala 45:35]
    node _T_1 = bits(reset, 0, 0) @[MultiIOModule.scala 45:9]
    node _T_2 = or(_T, _T_1) @[MultiIOModule.scala 45:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[MultiIOModule.scala 45:9]
    when _T_3 : @[MultiIOModule.scala 45:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MultiIOModule.scala:45 assert(composedModule.myTraitIO === 42.U)\n") @[MultiIOModule.scala 45:9]
      stop(clock, UInt<1>(1), 1) @[MultiIOModule.scala 45:9]
      skip @[MultiIOModule.scala 45:9]
    node _T_4 = eq(composedModule.myLiteralIO, UInt<2>("h02")) @[MultiIOModule.scala 46:37]
    node _T_5 = bits(reset, 0, 0) @[MultiIOModule.scala 46:9]
    node _T_6 = or(_T_4, _T_5) @[MultiIOModule.scala 46:9]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[MultiIOModule.scala 46:9]
    when _T_7 : @[MultiIOModule.scala 46:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MultiIOModule.scala:46 assert(composedModule.myLiteralIO === 2.U)\n") @[MultiIOModule.scala 46:9]
      stop(clock, UInt<1>(1), 1) @[MultiIOModule.scala 46:9]
      skip @[MultiIOModule.scala 46:9]
    node _T_8 = bits(reset, 0, 0) @[MultiIOModule.scala 47:7]
    node _T_9 = eq(_T_8, UInt<1>("h00")) @[MultiIOModule.scala 47:7]
    when _T_9 : @[MultiIOModule.scala 47:7]
      stop(clock, UInt<1>(1), 0) @[MultiIOModule.scala 47:7]
      skip @[MultiIOModule.scala 47:7]
    
