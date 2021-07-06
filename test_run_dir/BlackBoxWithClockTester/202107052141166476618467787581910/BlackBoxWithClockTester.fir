;chisel3.BuildInfo$@527a8665
circuit BlackBoxWithClockTester : 
  extmodule BlackBoxRegister : 
    input clock : Clock
    input in : UInt<1>
    output out : UInt<1>
    
    defname = BlackBoxRegister
    
    
  module BlackBoxWithClockTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst blackBox of BlackBoxRegister @[BlackBox.scala 107:24]
    blackBox.out is invalid
    blackBox.in is invalid
    blackBox.clock is invalid
    reg model : UInt<1>, clock @[BlackBox.scala 108:18]
    reg cycles : UInt<4>, clock with : (reset => (reset, UInt<4>("h00"))) @[Counter.scala 60:40]
    wire end : UInt<1>
    end <= UInt<1>("h00")
    when UInt<1>("h01") : @[Counter.scala 118:17]
      node wrap_wrap = eq(cycles, UInt<4>("h0e")) @[Counter.scala 72:24]
      node _wrap_value_T = add(cycles, UInt<1>("h01")) @[Counter.scala 76:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 76:24]
      cycles <= _wrap_value_T_1 @[Counter.scala 76:15]
      when wrap_wrap : @[Counter.scala 86:20]
        cycles <= UInt<1>("h00") @[Counter.scala 86:28]
        skip @[Counter.scala 86:20]
      end <= wrap_wrap @[Counter.scala 118:24]
      skip @[Counter.scala 118:17]
    node impetus = bits(cycles, 0, 0) @[BlackBox.scala 112:23]
    blackBox.clock <= clock @[BlackBox.scala 113:21]
    blackBox.in <= impetus @[BlackBox.scala 114:18]
    model <= impetus @[BlackBox.scala 115:9]
    node _T = gt(cycles, UInt<1>("h00")) @[BlackBox.scala 117:15]
    when _T : @[BlackBox.scala 117:22]
      node _T_1 = eq(blackBox.out, model) @[BlackBox.scala 118:28]
      node _T_2 = bits(reset, 0, 0) @[BlackBox.scala 118:11]
      node _T_3 = or(_T_1, _T_2) @[BlackBox.scala 118:11]
      node _T_4 = eq(_T_3, UInt<1>("h00")) @[BlackBox.scala 118:11]
      when _T_4 : @[BlackBox.scala 118:11]
        printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:118 assert(blackBox.io.out === model)\n") @[BlackBox.scala 118:11]
        stop(clock, UInt<1>(1), 1) @[BlackBox.scala 118:11]
        skip @[BlackBox.scala 118:11]
      skip @[BlackBox.scala 117:22]
    when end : @[BlackBox.scala 120:13]
      node _T_5 = bits(reset, 0, 0) @[BlackBox.scala 120:19]
      node _T_6 = eq(_T_5, UInt<1>("h00")) @[BlackBox.scala 120:19]
      when _T_6 : @[BlackBox.scala 120:19]
        stop(clock, UInt<1>(1), 0) @[BlackBox.scala 120:19]
        skip @[BlackBox.scala 120:19]
      skip @[BlackBox.scala 120:13]
    
