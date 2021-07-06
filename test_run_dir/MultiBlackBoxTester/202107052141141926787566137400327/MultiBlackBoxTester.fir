;chisel3.BuildInfo$@527a8665
circuit MultiBlackBoxTester : 
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
    
    
  module MultiBlackBoxTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst blackBoxInvPos of BlackBoxInverter @[BlackBox.scala 89:30]
    blackBoxInvPos.out is invalid
    blackBoxInvPos.in is invalid
    inst blackBoxInvNeg of BlackBoxInverter_1 @[BlackBox.scala 90:30]
    blackBoxInvNeg.out is invalid
    blackBoxInvNeg.in is invalid
    inst blackBoxPassPos of BlackBoxPassthrough @[BlackBox.scala 91:31]
    blackBoxPassPos.out is invalid
    blackBoxPassPos.in is invalid
    inst blackBoxPassNeg of BlackBoxPassthrough_1 @[BlackBox.scala 92:31]
    blackBoxPassNeg.out is invalid
    blackBoxPassNeg.in is invalid
    blackBoxInvPos.in <= UInt<1>("h01") @[BlackBox.scala 94:24]
    blackBoxInvNeg.in <= UInt<1>("h00") @[BlackBox.scala 95:24]
    blackBoxPassPos.in <= UInt<1>("h01") @[BlackBox.scala 96:25]
    blackBoxPassNeg.in <= UInt<1>("h00") @[BlackBox.scala 97:25]
    node _T = eq(blackBoxInvNeg.out, UInt<1>("h01")) @[BlackBox.scala 99:32]
    node _T_1 = bits(reset, 0, 0) @[BlackBox.scala 99:9]
    node _T_2 = or(_T, _T_1) @[BlackBox.scala 99:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[BlackBox.scala 99:9]
    when _T_3 : @[BlackBox.scala 99:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:99 assert(blackBoxInvNeg.io.out === 1.U)\n") @[BlackBox.scala 99:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 99:9]
      skip @[BlackBox.scala 99:9]
    node _T_4 = eq(blackBoxInvPos.out, UInt<1>("h00")) @[BlackBox.scala 100:32]
    node _T_5 = bits(reset, 0, 0) @[BlackBox.scala 100:9]
    node _T_6 = or(_T_4, _T_5) @[BlackBox.scala 100:9]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[BlackBox.scala 100:9]
    when _T_7 : @[BlackBox.scala 100:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:100 assert(blackBoxInvPos.io.out === 0.U)\n") @[BlackBox.scala 100:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 100:9]
      skip @[BlackBox.scala 100:9]
    node _T_8 = eq(blackBoxPassNeg.out, UInt<1>("h00")) @[BlackBox.scala 101:33]
    node _T_9 = bits(reset, 0, 0) @[BlackBox.scala 101:9]
    node _T_10 = or(_T_8, _T_9) @[BlackBox.scala 101:9]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[BlackBox.scala 101:9]
    when _T_11 : @[BlackBox.scala 101:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:101 assert(blackBoxPassNeg.io.out === 0.U)\n") @[BlackBox.scala 101:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 101:9]
      skip @[BlackBox.scala 101:9]
    node _T_12 = eq(blackBoxPassPos.out, UInt<1>("h01")) @[BlackBox.scala 102:33]
    node _T_13 = bits(reset, 0, 0) @[BlackBox.scala 102:9]
    node _T_14 = or(_T_12, _T_13) @[BlackBox.scala 102:9]
    node _T_15 = eq(_T_14, UInt<1>("h00")) @[BlackBox.scala 102:9]
    when _T_15 : @[BlackBox.scala 102:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:102 assert(blackBoxPassPos.io.out === 1.U)\n") @[BlackBox.scala 102:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 102:9]
      skip @[BlackBox.scala 102:9]
    node _T_16 = bits(reset, 0, 0) @[BlackBox.scala 103:7]
    node _T_17 = eq(_T_16, UInt<1>("h00")) @[BlackBox.scala 103:7]
    when _T_17 : @[BlackBox.scala 103:7]
      stop(clock, UInt<1>(1), 0) @[BlackBox.scala 103:7]
      skip @[BlackBox.scala 103:7]
    
