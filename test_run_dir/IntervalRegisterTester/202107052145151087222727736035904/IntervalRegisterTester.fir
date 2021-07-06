;chisel3.BuildInfo$@527a8665
circuit IntervalRegisterTester : 
  module IntervalRegisterTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    reg counter : Interval[-2, 5].0, clock with : (reset => (reset, asInterval(UInt<1>("h01"), -1, -1, 0))) @[IntervalSpec.scala 254:24]
    node _counter_T = add(counter, asInterval(UInt<2>("h01"), 1, 1, 0)) @[IntervalSpec.scala 255:23]
    node _counter_T_1 = squz(_counter_T, counter) @[IntervalSpec.scala 256:13]
    counter <= _counter_T_1 @[IntervalSpec.scala 255:11]
    node _T = gt(counter, asInterval(UInt<4>("h04"), 4, 4, 0)) @[IntervalSpec.scala 257:16]
    when _T : @[IntervalSpec.scala 257:23]
      node _T_1 = bits(reset, 0, 0) @[IntervalSpec.scala 258:9]
      node _T_2 = eq(_T_1, UInt<1>("h00")) @[IntervalSpec.scala 258:9]
      when _T_2 : @[IntervalSpec.scala 258:9]
        stop(clock, UInt<1>(1), 0) @[IntervalSpec.scala 258:9]
        skip @[IntervalSpec.scala 258:9]
      skip @[IntervalSpec.scala 257:23]
    
