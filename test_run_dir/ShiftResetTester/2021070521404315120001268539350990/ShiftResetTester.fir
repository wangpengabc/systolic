;chisel3.BuildInfo$@527a8665
circuit ShiftResetTester : 
  module ShiftResetTester : 
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
    node _sr_T = add(cntVal, UInt<5>("h017")) @[Reg.scala 57:33]
    node sr = tail(_sr_T, 1) @[Reg.scala 57:33]
    when done : @[Reg.scala 58:14]
      node _T = add(cntVal, UInt<5>("h017")) @[Reg.scala 59:38]
      node _T_1 = tail(_T, 1) @[Reg.scala 59:38]
      node _T_2 = eq(sr, _T_1) @[Reg.scala 59:15]
      node _T_3 = bits(reset, 0, 0) @[Reg.scala 59:11]
      node _T_4 = or(_T_2, _T_3) @[Reg.scala 59:11]
      node _T_5 = eq(_T_4, UInt<1>("h00")) @[Reg.scala 59:11]
      when _T_5 : @[Reg.scala 59:11]
        printf(clock, UInt<1>(1), "Assertion failed\n    at Reg.scala:59 assert(sr === (if(n == 0) cntVal + 23.U else 1.U))\n") @[Reg.scala 59:11]
        stop(clock, UInt<1>(1), 1) @[Reg.scala 59:11]
        skip @[Reg.scala 59:11]
      node _T_6 = bits(reset, 0, 0) @[Reg.scala 60:9]
      node _T_7 = eq(_T_6, UInt<1>("h00")) @[Reg.scala 60:9]
      when _T_7 : @[Reg.scala 60:9]
        stop(clock, UInt<1>(1), 0) @[Reg.scala 60:9]
        skip @[Reg.scala 60:9]
      skip @[Reg.scala 58:14]
    
