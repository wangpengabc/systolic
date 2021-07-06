;chisel3.BuildInfo$@527a8665
circuit RecordIOTester : 
  module RecordIOModule : 
    input clock : Clock
    input reset : Reset
    output io : {out : UInt<32>, flip in : UInt<32>}
    
    io.out <= io.in @[RecordSpec.scala 87:15]
    
  module RecordIOTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst mod of RecordIOModule @[RecordSpec.scala 91:21]
    mod.clock <= clock
    mod.reset <= reset
    mod.io.in <= UInt<11>("h04d2") @[RecordSpec.scala 92:18]
    node _T = eq(mod.io.out, UInt<11>("h04d2")) @[RecordSpec.scala 93:33]
    node _T_1 = bits(reset, 0, 0) @[RecordSpec.scala 93:11]
    node _T_2 = or(_T, _T_1) @[RecordSpec.scala 93:11]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[RecordSpec.scala 93:11]
    when _T_3 : @[RecordSpec.scala 93:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at RecordSpec.scala:93 assert(mod.io(\"out\").asUInt === 1234.U)\n") @[RecordSpec.scala 93:11]
      stop(clock, UInt<1>(1), 1) @[RecordSpec.scala 93:11]
      skip @[RecordSpec.scala 93:11]
    node _T_4 = bits(reset, 0, 0) @[RecordSpec.scala 94:9]
    node _T_5 = eq(_T_4, UInt<1>("h00")) @[RecordSpec.scala 94:9]
    when _T_5 : @[RecordSpec.scala 94:9]
      stop(clock, UInt<1>(1), 0) @[RecordSpec.scala 94:9]
      skip @[RecordSpec.scala 94:9]
    
