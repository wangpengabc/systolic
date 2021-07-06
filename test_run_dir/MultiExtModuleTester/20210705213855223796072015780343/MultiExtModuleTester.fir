;chisel3.BuildInfo$@527a8665
circuit MultiExtModuleTester : 
  extmodule BlackBoxInverter : 
    input in : UInt<1>
    output out : UInt<1>
    
    defname = BlackBoxInverter
    
    
  extmodule BlackBoxInverter_1 : 
    input in : UInt<1>
    output out : UInt<1>
    
    defname = BlackBoxInverter
    
    
  extmodule BlackBoxPassthrough : 
    input in : UInt<1>
    output out : UInt<1>
    
    defname = BlackBoxPassthrough
    
    
  extmodule BlackBoxPassthrough_1 : 
    input in : UInt<1>
    output out : UInt<1>
    
    defname = BlackBoxPassthrough
    
    
  module MultiExtModuleTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst blackBoxInvPos of BlackBoxInverter @[ExtModule.scala 45:30]
    blackBoxInvPos.in is invalid
    blackBoxInvPos.out is invalid
    inst blackBoxInvNeg of BlackBoxInverter_1 @[ExtModule.scala 46:30]
    blackBoxInvNeg.in is invalid
    blackBoxInvNeg.out is invalid
    inst blackBoxPassPos of BlackBoxPassthrough @[ExtModule.scala 47:31]
    blackBoxPassPos.in is invalid
    blackBoxPassPos.out is invalid
    inst blackBoxPassNeg of BlackBoxPassthrough_1 @[ExtModule.scala 48:31]
    blackBoxPassNeg.in is invalid
    blackBoxPassNeg.out is invalid
    blackBoxInvPos.in <= UInt<1>("h01") @[ExtModule.scala 50:21]
    blackBoxInvNeg.in <= UInt<1>("h00") @[ExtModule.scala 51:21]
    blackBoxPassPos.in <= UInt<1>("h01") @[ExtModule.scala 52:22]
    blackBoxPassNeg.in <= UInt<1>("h00") @[ExtModule.scala 53:22]
    node _T = eq(blackBoxInvNeg.out, UInt<1>("h01")) @[ExtModule.scala 55:29]
    node _T_1 = bits(reset, 0, 0) @[ExtModule.scala 55:9]
    node _T_2 = or(_T, _T_1) @[ExtModule.scala 55:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[ExtModule.scala 55:9]
    when _T_3 : @[ExtModule.scala 55:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at ExtModule.scala:55 assert(blackBoxInvNeg.out === 1.U)\n") @[ExtModule.scala 55:9]
      stop(clock, UInt<1>(1), 1) @[ExtModule.scala 55:9]
      skip @[ExtModule.scala 55:9]
    node _T_4 = eq(blackBoxInvPos.out, UInt<1>("h00")) @[ExtModule.scala 56:29]
    node _T_5 = bits(reset, 0, 0) @[ExtModule.scala 56:9]
    node _T_6 = or(_T_4, _T_5) @[ExtModule.scala 56:9]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[ExtModule.scala 56:9]
    when _T_7 : @[ExtModule.scala 56:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at ExtModule.scala:56 assert(blackBoxInvPos.out === 0.U)\n") @[ExtModule.scala 56:9]
      stop(clock, UInt<1>(1), 1) @[ExtModule.scala 56:9]
      skip @[ExtModule.scala 56:9]
    node _T_8 = eq(blackBoxPassNeg.out, UInt<1>("h00")) @[ExtModule.scala 57:30]
    node _T_9 = bits(reset, 0, 0) @[ExtModule.scala 57:9]
    node _T_10 = or(_T_8, _T_9) @[ExtModule.scala 57:9]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[ExtModule.scala 57:9]
    when _T_11 : @[ExtModule.scala 57:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at ExtModule.scala:57 assert(blackBoxPassNeg.out === 0.U)\n") @[ExtModule.scala 57:9]
      stop(clock, UInt<1>(1), 1) @[ExtModule.scala 57:9]
      skip @[ExtModule.scala 57:9]
    node _T_12 = eq(blackBoxPassPos.out, UInt<1>("h01")) @[ExtModule.scala 58:30]
    node _T_13 = bits(reset, 0, 0) @[ExtModule.scala 58:9]
    node _T_14 = or(_T_12, _T_13) @[ExtModule.scala 58:9]
    node _T_15 = eq(_T_14, UInt<1>("h00")) @[ExtModule.scala 58:9]
    when _T_15 : @[ExtModule.scala 58:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at ExtModule.scala:58 assert(blackBoxPassPos.out === 1.U)\n") @[ExtModule.scala 58:9]
      stop(clock, UInt<1>(1), 1) @[ExtModule.scala 58:9]
      skip @[ExtModule.scala 58:9]
    node _T_16 = bits(reset, 0, 0) @[ExtModule.scala 59:7]
    node _T_17 = eq(_T_16, UInt<1>("h00")) @[ExtModule.scala 59:7]
    when _T_17 : @[ExtModule.scala 59:7]
      stop(clock, UInt<1>(1), 0) @[ExtModule.scala 59:7]
      skip @[ExtModule.scala 59:7]
    
