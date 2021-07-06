;chisel3.BuildInfo$@527a8665
circuit MultiIOTester : 
  module MultiIOPlusOne : 
    input clock : Clock
    input reset : Reset
    input in : UInt<32>
    output out : UInt<32>
    
    node _out_T = add(in, UInt<1>("h01")) @[MultiIOModule.scala 12:13]
    node _out_T_1 = tail(_out_T, 1) @[MultiIOModule.scala 12:13]
    out <= _out_T_1 @[MultiIOModule.scala 12:7]
    
  module MultiIOTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst plusModule of MultiIOPlusOne @[MultiIOModule.scala 16:26]
    plusModule.clock <= clock
    plusModule.reset <= reset
    plusModule.in <= UInt<6>("h02a") @[MultiIOModule.scala 17:17]
    node _T = eq(plusModule.out, UInt<6>("h02b")) @[MultiIOModule.scala 18:25]
    node _T_1 = bits(reset, 0, 0) @[MultiIOModule.scala 18:9]
    node _T_2 = or(_T, _T_1) @[MultiIOModule.scala 18:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[MultiIOModule.scala 18:9]
    when _T_3 : @[MultiIOModule.scala 18:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MultiIOModule.scala:18 assert(plusModule.out === 43.U)\n") @[MultiIOModule.scala 18:9]
      stop(clock, UInt<1>(1), 1) @[MultiIOModule.scala 18:9]
      skip @[MultiIOModule.scala 18:9]
    node _T_4 = bits(reset, 0, 0) @[MultiIOModule.scala 19:7]
    node _T_5 = eq(_T_4, UInt<1>("h00")) @[MultiIOModule.scala 19:7]
    when _T_5 : @[MultiIOModule.scala 19:7]
      stop(clock, UInt<1>(1), 0) @[MultiIOModule.scala 19:7]
      skip @[MultiIOModule.scala 19:7]
    
