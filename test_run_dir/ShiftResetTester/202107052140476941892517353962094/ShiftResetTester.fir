;chisel3.BuildInfo$@527a8665
circuit ShiftResetTester : 
  module ShiftResetTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    reg cntVal : UInt<2>, clock with : (reset => (reset, UInt<2>("h00"))) @[Counter.scala 60:40]
    wire done : UInt<1>
    done <= UInt<1>("h00")
    when UInt<1>("h01") : @[Counter.scala 118:17]
      node wrap_wrap = eq(cntVal, UInt<2>("h02")) @[Counter.scala 72:24]
      node _wrap_value_T = add(cntVal, UInt<1>("h01")) @[Counter.scala 76:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 76:24]
      cntVal <= _wrap_value_T_1 @[Counter.scala 76:15]
      when wrap_wrap : @[Counter.scala 86:20]
        cntVal <= UInt<1>("h00") @[Counter.scala 86:28]
        skip @[Counter.scala 86:20]
      done <= wrap_wrap @[Counter.scala 118:24]
      skip @[Counter.scala 118:17]
    node _sr_T = add(cntVal, UInt<5>("h017")) @[Reg.scala 57:33]
    node _sr_T_1 = tail(_sr_T, 1) @[Reg.scala 57:33]
    reg sr_r : UInt, clock with : (reset => (reset, UInt<1>("h01"))) @[Reg.scala 27:20]
    when UInt<1>("h01") : @[Reg.scala 28:19]
      sr_r <= _sr_T_1 @[Reg.scala 28:23]
      skip @[Reg.scala 28:19]
    reg sr_r_1 : UInt, clock with : (reset => (reset, UInt<1>("h01"))) @[Reg.scala 27:20]
    when UInt<1>("h01") : @[Reg.scala 28:19]
      sr_r_1 <= sr_r @[Reg.scala 28:23]
      skip @[Reg.scala 28:19]
    reg sr_r_2 : UInt, clock with : (reset => (reset, UInt<1>("h01"))) @[Reg.scala 27:20]
    when UInt<1>("h01") : @[Reg.scala 28:19]
      sr_r_2 <= sr_r_1 @[Reg.scala 28:23]
      skip @[Reg.scala 28:19]
    reg sr : UInt, clock with : (reset => (reset, UInt<1>("h01"))) @[Reg.scala 27:20]
    when UInt<1>("h01") : @[Reg.scala 28:19]
      sr <= sr_r_2 @[Reg.scala 28:23]
      skip @[Reg.scala 28:19]
    when done : @[Reg.scala 58:14]
      node _T = eq(sr, UInt<1>("h01")) @[Reg.scala 59:15]
      node _T_1 = bits(reset, 0, 0) @[Reg.scala 59:11]
      node _T_2 = or(_T, _T_1) @[Reg.scala 59:11]
      node _T_3 = eq(_T_2, UInt<1>("h00")) @[Reg.scala 59:11]
      when _T_3 : @[Reg.scala 59:11]
        printf(clock, UInt<1>(1), "Assertion failed\n    at Reg.scala:59 assert(sr === (if(n == 0) cntVal + 23.U else 1.U))\n") @[Reg.scala 59:11]
        stop(clock, UInt<1>(1), 1) @[Reg.scala 59:11]
        skip @[Reg.scala 59:11]
      node _T_4 = bits(reset, 0, 0) @[Reg.scala 60:9]
      node _T_5 = eq(_T_4, UInt<1>("h00")) @[Reg.scala 60:9]
      when _T_5 : @[Reg.scala 60:9]
        stop(clock, UInt<1>(1), 0) @[Reg.scala 60:9]
        skip @[Reg.scala 60:9]
      skip @[Reg.scala 58:14]
    
