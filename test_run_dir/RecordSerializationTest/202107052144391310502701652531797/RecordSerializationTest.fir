;chisel3.BuildInfo$@527a8665
circuit RecordSerializationTest : 
  module RecordSerializationTest : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire record : {buzz : UInt<16>, fizz : UInt<16>} @[RecordSpec.scala 48:22]
    record.fizz <= UInt<16>("h0dead") @[RecordSpec.scala 50:20]
    record.buzz <= UInt<16>("h0beef") @[RecordSpec.scala 51:20]
    node uint = cat(record.buzz, record.fizz) @[RecordSpec.scala 53:23]
    node _T = eq(uint, UInt<32>("h0beefdead")) @[RecordSpec.scala 55:17]
    node _T_1 = bits(reset, 0, 0) @[RecordSpec.scala 55:11]
    node _T_2 = or(_T, _T_1) @[RecordSpec.scala 55:11]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[RecordSpec.scala 55:11]
    when _T_3 : @[RecordSpec.scala 55:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at RecordSpec.scala:55 assert(uint === \"hbeefdead\".U)\n") @[RecordSpec.scala 55:11]
      stop(clock, UInt<1>(1), 1) @[RecordSpec.scala 55:11]
      skip @[RecordSpec.scala 55:11]
    wire record2 : {buzz : UInt<16>, fizz : UInt<16>} @[RecordSpec.scala 57:32]
    wire _record2_WIRE : UInt<32>
    _record2_WIRE <= uint
    node _record2_T = bits(_record2_WIRE, 15, 0) @[RecordSpec.scala 57:32]
    record2.fizz <= _record2_T @[RecordSpec.scala 57:32]
    node _record2_T_1 = bits(_record2_WIRE, 31, 16) @[RecordSpec.scala 57:32]
    record2.buzz <= _record2_T_1 @[RecordSpec.scala 57:32]
    node _T_4 = eq(UInt<16>("h0dead"), record2.fizz) @[RecordSpec.scala 58:22]
    node _T_5 = bits(reset, 0, 0) @[RecordSpec.scala 58:11]
    node _T_6 = or(_T_4, _T_5) @[RecordSpec.scala 58:11]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[RecordSpec.scala 58:11]
    when _T_7 : @[RecordSpec.scala 58:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at RecordSpec.scala:58 assert(\"hdead\".U === record2(\"fizz\").asUInt)\n") @[RecordSpec.scala 58:11]
      stop(clock, UInt<1>(1), 1) @[RecordSpec.scala 58:11]
      skip @[RecordSpec.scala 58:11]
    node _T_8 = eq(UInt<16>("h0beef"), record2.buzz) @[RecordSpec.scala 59:22]
    node _T_9 = bits(reset, 0, 0) @[RecordSpec.scala 59:11]
    node _T_10 = or(_T_8, _T_9) @[RecordSpec.scala 59:11]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[RecordSpec.scala 59:11]
    when _T_11 : @[RecordSpec.scala 59:11]
      printf(clock, UInt<1>(1), "Assertion failed\n    at RecordSpec.scala:59 assert(\"hbeef\".U === record2(\"buzz\").asUInt)\n") @[RecordSpec.scala 59:11]
      stop(clock, UInt<1>(1), 1) @[RecordSpec.scala 59:11]
      skip @[RecordSpec.scala 59:11]
    node _T_12 = bits(reset, 0, 0) @[RecordSpec.scala 60:9]
    node _T_13 = eq(_T_12, UInt<1>("h00")) @[RecordSpec.scala 60:9]
    when _T_13 : @[RecordSpec.scala 60:9]
      stop(clock, UInt<1>(1), 0) @[RecordSpec.scala 60:9]
      skip @[RecordSpec.scala 60:9]
    
