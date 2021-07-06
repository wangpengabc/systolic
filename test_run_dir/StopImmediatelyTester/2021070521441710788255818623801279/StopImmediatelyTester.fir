;chisel3.BuildInfo$@527a8665
circuit StopImmediatelyTester : 
  module StopImmediatelyTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    reg cycle : UInt<4>, clock with : (reset => (reset, UInt<4>("h00"))) @[Stop.scala 13:22]
    node _cycle_T = add(cycle, UInt<1>("h01")) @[Stop.scala 14:18]
    node _cycle_T_1 = tail(_cycle_T, 1) @[Stop.scala 14:18]
    cycle <= _cycle_T_1 @[Stop.scala 14:9]
    node _T = eq(cycle, UInt<3>("h04")) @[Stop.scala 15:15]
    when _T : @[Stop.scala 15:24]
      node _T_1 = bits(reset, 0, 0) @[Stop.scala 16:9]
      node _T_2 = eq(_T_1, UInt<1>("h00")) @[Stop.scala 16:9]
      when _T_2 : @[Stop.scala 16:9]
        stop(clock, UInt<1>(1), 0) @[Stop.scala 16:9]
        skip @[Stop.scala 16:9]
      skip @[Stop.scala 15:24]
    node _T_3 = neq(cycle, UInt<3>("h05")) @[Stop.scala 18:16]
    node _T_4 = bits(reset, 0, 0) @[Stop.scala 18:9]
    node _T_5 = or(_T_3, _T_4) @[Stop.scala 18:9]
    node _T_6 = eq(_T_5, UInt<1>("h00")) @[Stop.scala 18:9]
    when _T_6 : @[Stop.scala 18:9]
      printf(clock, UInt<1>(1), "Assertion failed: Simulation did not exit upon executing stop()\n    at Stop.scala:18 assert(cycle =/= 5.U, \"Simulation did not exit upon executing stop()\")\n") @[Stop.scala 18:9]
      stop(clock, UInt<1>(1), 1) @[Stop.scala 18:9]
      skip @[Stop.scala 18:9]
    
