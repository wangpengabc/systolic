;chisel3.BuildInfo$@527a8665
circuit ShiftTester : 
  module ShiftTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire cntVal : UInt
    cntVal <= UInt<1>("h00")
    wire done : UInt<1>
    done <= UInt<1>("h00")
    when UInt<1>("h01") : @[Counter.scala 118:17]
      done <= UInt<1>("h01") @[Counter.scala 118:24]
      skip @[Counter.scala 118:17]
    node _sr_T = add(cntVal, UInt<5>("h017")) @[Reg.scala 47:33]
    node sr = tail(_sr_T, 1) @[Reg.scala 47:33]
    when done : @[Reg.scala 48:14]
      node _T = eq(sr, UInt<5>("h017")) @[Reg.scala 49:15]
      node _T_1 = bits(reset, 0, 0) @[Reg.scala 49:11]
      node _T_2 = or(_T, _T_1) @[Reg.scala 49:11]
      node _T_3 = eq(_T_2, UInt<1>("h00")) @[Reg.scala 49:11]
      when _T_3 : @[Reg.scala 49:11]
        printf(clock, UInt<1>(1), "Assertion failed\n    at Reg.scala:49 assert(sr === start)\n") @[Reg.scala 49:11]
        stop(clock, UInt<1>(1), 1) @[Reg.scala 49:11]
        skip @[Reg.scala 49:11]
      node _T_4 = bits(reset, 0, 0) @[Reg.scala 50:9]
      node _T_5 = eq(_T_4, UInt<1>("h00")) @[Reg.scala 50:9]
      when _T_5 : @[Reg.scala 50:9]
        stop(clock, UInt<1>(1), 0) @[Reg.scala 50:9]
        skip @[Reg.scala 50:9]
      skip @[Reg.scala 48:14]
    
