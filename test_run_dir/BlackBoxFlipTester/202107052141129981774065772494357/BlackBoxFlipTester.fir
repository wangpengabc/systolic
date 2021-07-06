;chisel3.BuildInfo$@527a8665
circuit BlackBoxFlipTester : 
  extmodule BlackBoxPassthrough2 : 
    input in : UInt<1>
    output out : UInt<1>
    
    defname = BlackBoxPassthrough2
    
    
  module BlackBoxFlipTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst blackBox of BlackBoxPassthrough2 @[BlackBox.scala 76:24]
    blackBox.out is invalid
    blackBox.in is invalid
    blackBox.in <= UInt<1>("h01") @[BlackBox.scala 78:18]
    node _T = eq(blackBox.out, UInt<1>("h01")) @[BlackBox.scala 79:26]
    node _T_1 = bits(reset, 0, 0) @[BlackBox.scala 79:9]
    node _T_2 = or(_T, _T_1) @[BlackBox.scala 79:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[BlackBox.scala 79:9]
    when _T_3 : @[BlackBox.scala 79:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:79 assert(blackBox.io.out === 1.U)\n") @[BlackBox.scala 79:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 79:9]
      skip @[BlackBox.scala 79:9]
    node _T_4 = bits(reset, 0, 0) @[BlackBox.scala 80:7]
    node _T_5 = eq(_T_4, UInt<1>("h00")) @[BlackBox.scala 80:7]
    when _T_5 : @[BlackBox.scala 80:7]
      stop(clock, UInt<1>(1), 0) @[BlackBox.scala 80:7]
      skip @[BlackBox.scala 80:7]
    
