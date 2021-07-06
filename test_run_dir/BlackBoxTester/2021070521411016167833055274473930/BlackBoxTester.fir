;chisel3.BuildInfo$@527a8665
circuit BlackBoxTester : 
  extmodule BlackBoxInverter : 
    input in : UInt<1>
    output out : UInt<1>
    
    defname = BlackBoxInverter
    
    
  extmodule BlackBoxInverter_1 : 
    input in : UInt<1>
    output out : UInt<1>
    
    defname = BlackBoxInverter
    
    
  module BlackBoxTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst blackBoxPos of BlackBoxInverter @[BlackBox.scala 52:27]
    blackBoxPos.out is invalid
    blackBoxPos.in is invalid
    inst blackBoxNeg of BlackBoxInverter_1 @[BlackBox.scala 53:27]
    blackBoxNeg.out is invalid
    blackBoxNeg.in is invalid
    blackBoxPos.in <= UInt<1>("h01") @[BlackBox.scala 55:21]
    blackBoxNeg.in <= UInt<1>("h00") @[BlackBox.scala 56:21]
    node _T = eq(blackBoxNeg.out, UInt<1>("h01")) @[BlackBox.scala 58:29]
    node _T_1 = bits(reset, 0, 0) @[BlackBox.scala 58:9]
    node _T_2 = or(_T, _T_1) @[BlackBox.scala 58:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[BlackBox.scala 58:9]
    when _T_3 : @[BlackBox.scala 58:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:58 assert(blackBoxNeg.io.out === 1.U)\n") @[BlackBox.scala 58:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 58:9]
      skip @[BlackBox.scala 58:9]
    node _T_4 = eq(blackBoxPos.out, UInt<1>("h00")) @[BlackBox.scala 59:29]
    node _T_5 = bits(reset, 0, 0) @[BlackBox.scala 59:9]
    node _T_6 = or(_T_4, _T_5) @[BlackBox.scala 59:9]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[BlackBox.scala 59:9]
    when _T_7 : @[BlackBox.scala 59:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:59 assert(blackBoxPos.io.out === 0.U)\n") @[BlackBox.scala 59:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 59:9]
      skip @[BlackBox.scala 59:9]
    node _T_8 = bits(reset, 0, 0) @[BlackBox.scala 60:7]
    node _T_9 = eq(_T_8, UInt<1>("h00")) @[BlackBox.scala 60:7]
    when _T_9 : @[BlackBox.scala 60:7]
      stop(clock, UInt<1>(1), 0) @[BlackBox.scala 60:7]
      skip @[BlackBox.scala 60:7]
    
