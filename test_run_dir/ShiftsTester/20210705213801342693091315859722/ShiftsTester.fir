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
    reg REG : UInt<1>, clock @[Reg.scala 78:15]
    REG <= done @[Reg.scala 78:15]
    when REG : @[Reg.scala 78:23]
      node _T = bits(reset, 0, 0) @[Reg.scala 82:9]
      node _T_1 = eq(_T, UInt<1>("h00")) @[Reg.scala 82:9]
      when _T_1 : @[Reg.scala 82:9]
        stop(clock, UInt<1>(1), 0) @[Reg.scala 82:9]
        skip @[Reg.scala 82:9]
      skip @[Reg.scala 78:23]
    
