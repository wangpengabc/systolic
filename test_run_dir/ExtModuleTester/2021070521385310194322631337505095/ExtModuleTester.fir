;chisel3.BuildInfo$@527a8665
circuit ExtModuleTester : 
  extmodule BlackBoxInverter : 
    input in : UInt<1>
    output out : UInt<1>
    
    defname = BlackBoxInverter
    
    
  extmodule BlackBoxInverter_1 : 
    input in : UInt<1>
    output out : UInt<1>
    
    defname = BlackBoxInverter
    
    
  module ExtModuleTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst blackBoxPos of BlackBoxInverter @[ExtModule.scala 28:27]
    blackBoxPos.in is invalid
    blackBoxPos.out is invalid
    inst blackBoxNeg of BlackBoxInverter_1 @[ExtModule.scala 29:27]
    blackBoxNeg.in is invalid
    blackBoxNeg.out is invalid
    blackBoxPos.in <= UInt<1>("h01") @[ExtModule.scala 31:18]
    blackBoxNeg.in <= UInt<1>("h00") @[ExtModule.scala 32:18]
    node _T = eq(blackBoxNeg.out, UInt<1>("h01")) @[ExtModule.scala 34:26]
    node _T_1 = bits(reset, 0, 0) @[ExtModule.scala 34:9]
    node _T_2 = or(_T, _T_1) @[ExtModule.scala 34:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[ExtModule.scala 34:9]
    when _T_3 : @[ExtModule.scala 34:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at ExtModule.scala:34 assert(blackBoxNeg.out === 1.U)\n") @[ExtModule.scala 34:9]
      stop(clock, UInt<1>(1), 1) @[ExtModule.scala 34:9]
      skip @[ExtModule.scala 34:9]
    node _T_4 = eq(blackBoxPos.out, UInt<1>("h00")) @[ExtModule.scala 35:26]
    node _T_5 = bits(reset, 0, 0) @[ExtModule.scala 35:9]
    node _T_6 = or(_T_4, _T_5) @[ExtModule.scala 35:9]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[ExtModule.scala 35:9]
    when _T_7 : @[ExtModule.scala 35:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at ExtModule.scala:35 assert(blackBoxPos.out === 0.U)\n") @[ExtModule.scala 35:9]
      stop(clock, UInt<1>(1), 1) @[ExtModule.scala 35:9]
      skip @[ExtModule.scala 35:9]
    node _T_8 = bits(reset, 0, 0) @[ExtModule.scala 36:7]
    node _T_9 = eq(_T_8, UInt<1>("h00")) @[ExtModule.scala 36:7]
    when _T_9 : @[ExtModule.scala 36:7]
      stop(clock, UInt<1>(1), 0) @[ExtModule.scala 36:7]
      skip @[ExtModule.scala 36:7]
    
