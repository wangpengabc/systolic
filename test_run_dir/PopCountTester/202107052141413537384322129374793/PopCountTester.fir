;chisel3.BuildInfo$@527a8665
circuit PopCountTester : 
  module PopCountTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    reg x : UInt<2>, clock with : (reset => (reset, UInt<2>("h00"))) @[PopCount.scala 10:18]
    node _x_T = add(x, UInt<1>("h01")) @[PopCount.scala 11:10]
    node _x_T_1 = tail(_x_T, 1) @[PopCount.scala 11:10]
    x <= _x_T_1 @[PopCount.scala 11:5]
    node _T = not(UInt<2>("h00")) @[PopCount.scala 12:23]
    node _T_1 = eq(x, _T) @[PopCount.scala 12:19]
    reg REG : UInt<1>, clock @[PopCount.scala 12:16]
    REG <= _T_1 @[PopCount.scala 12:16]
    when REG : @[PopCount.scala 12:35]
      node _T_2 = bits(reset, 0, 0) @[PopCount.scala 12:41]
      node _T_3 = eq(_T_2, UInt<1>("h00")) @[PopCount.scala 12:41]
      when _T_3 : @[PopCount.scala 12:41]
        stop(clock, UInt<1>(1), 0) @[PopCount.scala 12:41]
        skip @[PopCount.scala 12:41]
      skip @[PopCount.scala 12:35]
    node _result_T = bits(x, 0, 0) @[PopCount.scala 14:27]
    node _result_T_1 = bits(x, 1, 1) @[PopCount.scala 14:27]
    node _result_T_2 = add(_result_T, _result_T_1) @[Bitwise.scala 47:55]
    node result = bits(_result_T_2, 1, 0) @[Bitwise.scala 47:55]
    node _expected_T = bits(x, 0, 0) @[PopCount.scala 15:20]
    node _expected_T_1 = bits(x, 1, 1) @[PopCount.scala 15:20]
    node _expected_T_2 = add(UInt<1>("h00"), _expected_T) @[PopCount.scala 15:44]
    node expected = add(_expected_T_2, _expected_T_1) @[PopCount.scala 15:44]
    node _T_4 = eq(result, expected) @[PopCount.scala 16:17]
    node _T_5 = bits(reset, 0, 0) @[PopCount.scala 16:9]
    node _T_6 = or(_T_4, _T_5) @[PopCount.scala 16:9]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[PopCount.scala 16:9]
    when _T_7 : @[PopCount.scala 16:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at PopCount.scala:16 assert(result === expected)\n") @[PopCount.scala 16:9]
      stop(clock, UInt<1>(1), 1) @[PopCount.scala 16:9]
      skip @[PopCount.scala 16:9]
    
