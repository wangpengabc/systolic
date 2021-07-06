;chisel3.BuildInfo$@527a8665
circuit ShiftsTester : 
  module ShiftsTester : 
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
    node _srs_T = add(cntVal, UInt<5>("h017")) @[Reg.scala 77:35]
    node _srs_T_1 = tail(_srs_T, 1) @[Reg.scala 77:35]
    reg srs_0 : UInt, clock @[Reg.scala 15:16]
    when UInt<1>("h01") : @[Reg.scala 16:19]
      srs_0 <= _srs_T_1 @[Reg.scala 16:23]
      skip @[Reg.scala 16:19]
    reg REG : UInt<1>, clock @[Reg.scala 78:15]
    REG <= done @[Reg.scala 78:15]
    when REG : @[Reg.scala 78:23]
      node _T = eq(srs_0, UInt<5>("h017")) @[Reg.scala 80:19]
      node _T_1 = bits(reset, 0, 0) @[Reg.scala 80:13]
      node _T_2 = or(_T, _T_1) @[Reg.scala 80:13]
      node _T_3 = eq(_T_2, UInt<1>("h00")) @[Reg.scala 80:13]
      when _T_3 : @[Reg.scala 80:13]
        printf(clock, UInt<1>(1), "Assertion failed\n    at Reg.scala:80 assert(data === (23 + n - 1 - index).U)\n") @[Reg.scala 80:13]
        stop(clock, UInt<1>(1), 1) @[Reg.scala 80:13]
        skip @[Reg.scala 80:13]
      node _T_4 = bits(reset, 0, 0) @[Reg.scala 82:9]
      node _T_5 = eq(_T_4, UInt<1>("h00")) @[Reg.scala 82:9]
      when _T_5 : @[Reg.scala 82:9]
        stop(clock, UInt<1>(1), 0) @[Reg.scala 82:9]
        skip @[Reg.scala 82:9]
      skip @[Reg.scala 78:23]
    
