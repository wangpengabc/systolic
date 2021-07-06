;chisel3.BuildInfo$@527a8665
circuit NoneOptionBundleTester : 
  module OptionBundleModule : 
    input clock : Clock
    input reset : Reset
    output io : {out : UInt<1>}
    
    io.out <= UInt<1>("h00") @[OptionBundle.scala 23:12]
    
  module NoneOptionBundleTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst mod of OptionBundleModule @[OptionBundle.scala 35:19]
    mod.clock <= clock
    mod.reset <= reset
    node _T = eq(mod.io.out, UInt<1>("h00")) @[OptionBundle.scala 36:21]
    node _T_1 = bits(reset, 0, 0) @[OptionBundle.scala 36:9]
    node _T_2 = or(_T, _T_1) @[OptionBundle.scala 36:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[OptionBundle.scala 36:9]
    when _T_3 : @[OptionBundle.scala 36:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at OptionBundle.scala:36 assert(mod.io.out === false.B)\n") @[OptionBundle.scala 36:9]
      stop(clock, UInt<1>(1), 1) @[OptionBundle.scala 36:9]
      skip @[OptionBundle.scala 36:9]
    node _T_4 = bits(reset, 0, 0) @[OptionBundle.scala 37:7]
    node _T_5 = eq(_T_4, UInt<1>("h00")) @[OptionBundle.scala 37:7]
    when _T_5 : @[OptionBundle.scala 37:7]
      stop(clock, UInt<1>(1), 0) @[OptionBundle.scala 37:7]
      skip @[OptionBundle.scala 37:7]
    
