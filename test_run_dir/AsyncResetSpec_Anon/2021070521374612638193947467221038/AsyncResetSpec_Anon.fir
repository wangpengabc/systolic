;chisel3.BuildInfo$@527a8665
circuit AsyncResetSpec_Anon : 
  module AsyncResetSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    node _reg_T = asAsyncReset(reset) @[AsyncResetSpec.scala 213:33]
    reg reg : Fixed<<2>>, clock with : (reset => (_reg_T, asFixedPoint(UInt<5>("h0c"), 2))) @[AsyncResetSpec.scala 213:54]
    reg <= asFixedPoint(UInt<6>("h028"), 2) @[AsyncResetSpec.scala 213:54]
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
    node _T = eq(count, UInt<1>("h00")) @[AsyncResetSpec.scala 215:19]
    when _T : @[AsyncResetSpec.scala 215:28]
      node _T_1 = eq(reg, asFixedPoint(UInt<5>("h0c"), 2)) @[AsyncResetSpec.scala 216:28]
      node _T_2 = bits(reset, 0, 0) @[AsyncResetSpec.scala 216:23]
      node _T_3 = or(_T_1, _T_2) @[AsyncResetSpec.scala 216:23]
      node _T_4 = eq(_T_3, UInt<1>("h00")) @[AsyncResetSpec.scala 216:23]
      when _T_4 : @[AsyncResetSpec.scala 216:23]
        printf(clock, UInt<1>(1), "Assertion failed\n    at AsyncResetSpec.scala:216 chisel3.assert(reg === 3.F(2.BP))\n") @[AsyncResetSpec.scala 216:23]
        stop(clock, UInt<1>(1), 1) @[AsyncResetSpec.scala 216:23]
        skip @[AsyncResetSpec.scala 216:23]
      skip @[AsyncResetSpec.scala 215:28]
    else : @[AsyncResetSpec.scala 217:20]
      node _T_5 = eq(reg, asFixedPoint(UInt<6>("h028"), 2)) @[AsyncResetSpec.scala 218:28]
      node _T_6 = bits(reset, 0, 0) @[AsyncResetSpec.scala 218:23]
      node _T_7 = or(_T_5, _T_6) @[AsyncResetSpec.scala 218:23]
      node _T_8 = eq(_T_7, UInt<1>("h00")) @[AsyncResetSpec.scala 218:23]
      when _T_8 : @[AsyncResetSpec.scala 218:23]
        printf(clock, UInt<1>(1), "Assertion failed\n    at AsyncResetSpec.scala:218 chisel3.assert(reg === -6.0.F(2.BP))\n") @[AsyncResetSpec.scala 218:23]
        stop(clock, UInt<1>(1), 1) @[AsyncResetSpec.scala 218:23]
        skip @[AsyncResetSpec.scala 218:23]
      skip @[AsyncResetSpec.scala 217:20]
    when done : @[AsyncResetSpec.scala 220:19]
      node _T_9 = bits(reset, 0, 0) @[AsyncResetSpec.scala 220:25]
      node _T_10 = eq(_T_9, UInt<1>("h00")) @[AsyncResetSpec.scala 220:25]
      when _T_10 : @[AsyncResetSpec.scala 220:25]
        stop(clock, UInt<1>(1), 0) @[AsyncResetSpec.scala 220:25]
        skip @[AsyncResetSpec.scala 220:25]
      skip @[AsyncResetSpec.scala 220:19]
    
