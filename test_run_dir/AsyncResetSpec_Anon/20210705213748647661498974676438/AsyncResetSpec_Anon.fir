;chisel3.BuildInfo$@527a8665
circuit AsyncResetSpec_Anon : 
  module AsyncResetSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    node _reg_T = asAsyncReset(reset) @[AsyncResetSpec.scala 227:33]
    reg reg : Interval[0, 13].0, clock with : (reset => (_reg_T, asInterval(UInt<5>("h0d"), 13, 13, 0))) @[AsyncResetSpec.scala 228:24]
    reg <= asInterval(UInt<4>("h07"), 7, 7, 0) @[AsyncResetSpec.scala 229:11]
    reg count : UInt<2>, clock with : (reset => (reset, UInt<2>("h00"))) @[Counter.scala 60:40]
    wire done : UInt<1>
    done <= UInt<1>("h00")
    when UInt<1>("h01") : @[Counter.scala 118:17]
      node wrap_wrap = eq(count, UInt<2>("h03")) @[Counter.scala 72:24]
      node _wrap_value_T = add(count, UInt<1>("h01")) @[Counter.scala 76:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 76:24]
      count <= _wrap_value_T_1 @[Counter.scala 76:15]
      done <= wrap_wrap @[Counter.scala 118:24]
      skip @[Counter.scala 118:17]
    node _T = eq(count, UInt<1>("h00")) @[AsyncResetSpec.scala 233:19]
    when _T : @[AsyncResetSpec.scala 233:28]
      node _T_1 = eq(reg, asInterval(UInt<5>("h0d"), 13, 13, 0)) @[AsyncResetSpec.scala 234:28]
      node _T_2 = bits(reset, 0, 0) @[AsyncResetSpec.scala 234:23]
      node _T_3 = or(_T_1, _T_2) @[AsyncResetSpec.scala 234:23]
      node _T_4 = eq(_T_3, UInt<1>("h00")) @[AsyncResetSpec.scala 234:23]
      when _T_4 : @[AsyncResetSpec.scala 234:23]
        printf(clock, UInt<1>(1), "Assertion failed\n    at AsyncResetSpec.scala:234 chisel3.assert(reg === 13.I)\n") @[AsyncResetSpec.scala 234:23]
        stop(clock, UInt<1>(1), 1) @[AsyncResetSpec.scala 234:23]
        skip @[AsyncResetSpec.scala 234:23]
      skip @[AsyncResetSpec.scala 233:28]
    else : @[AsyncResetSpec.scala 235:20]
      node _T_5 = eq(reg, asInterval(UInt<4>("h07"), 7, 7, 0)) @[AsyncResetSpec.scala 236:28]
      node _T_6 = bits(reset, 0, 0) @[AsyncResetSpec.scala 236:23]
      node _T_7 = or(_T_5, _T_6) @[AsyncResetSpec.scala 236:23]
      node _T_8 = eq(_T_7, UInt<1>("h00")) @[AsyncResetSpec.scala 236:23]
      when _T_8 : @[AsyncResetSpec.scala 236:23]
        printf(clock, UInt<1>(1), "Assertion failed\n    at AsyncResetSpec.scala:236 chisel3.assert(reg === 7.I)\n") @[AsyncResetSpec.scala 236:23]
        stop(clock, UInt<1>(1), 1) @[AsyncResetSpec.scala 236:23]
        skip @[AsyncResetSpec.scala 236:23]
      skip @[AsyncResetSpec.scala 235:20]
    when done : @[AsyncResetSpec.scala 238:19]
      node _T_9 = bits(reset, 0, 0) @[AsyncResetSpec.scala 238:25]
      node _T_10 = eq(_T_9, UInt<1>("h00")) @[AsyncResetSpec.scala 238:25]
      when _T_10 : @[AsyncResetSpec.scala 238:25]
        stop(clock, UInt<1>(1), 0) @[AsyncResetSpec.scala 238:25]
        skip @[AsyncResetSpec.scala 238:25]
      skip @[AsyncResetSpec.scala 238:19]
    
