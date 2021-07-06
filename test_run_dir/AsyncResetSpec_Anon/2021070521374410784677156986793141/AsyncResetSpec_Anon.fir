;chisel3.BuildInfo$@527a8665
circuit AsyncResetSpec_Anon : 
  module AsyncResetSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire initValue : SInt @[AsyncResetSpec.scala 198:27]
    node _reg_T = asAsyncReset(reset) @[AsyncResetSpec.scala 199:33]
    reg reg : SInt, clock with : (reset => (_reg_T, asSInt(UInt<6>("h01b")))) @[AsyncResetSpec.scala 199:54]
    reg <= initValue @[AsyncResetSpec.scala 199:54]
    initValue <= asSInt(UInt<7>("h055")) @[AsyncResetSpec.scala 200:17]
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
    node _T = eq(count, UInt<1>("h00")) @[AsyncResetSpec.scala 202:19]
    when _T : @[AsyncResetSpec.scala 202:28]
      node _T_1 = eq(reg, asSInt(UInt<6>("h01b"))) @[AsyncResetSpec.scala 203:28]
      node _T_2 = bits(reset, 0, 0) @[AsyncResetSpec.scala 203:23]
      node _T_3 = or(_T_1, _T_2) @[AsyncResetSpec.scala 203:23]
      node _T_4 = eq(_T_3, UInt<1>("h00")) @[AsyncResetSpec.scala 203:23]
      when _T_4 : @[AsyncResetSpec.scala 203:23]
        printf(clock, UInt<1>(1), "Assertion failed\n    at AsyncResetSpec.scala:203 chisel3.assert(reg === 27.S)\n") @[AsyncResetSpec.scala 203:23]
        stop(clock, UInt<1>(1), 1) @[AsyncResetSpec.scala 203:23]
        skip @[AsyncResetSpec.scala 203:23]
      skip @[AsyncResetSpec.scala 202:28]
    else : @[AsyncResetSpec.scala 204:20]
      node _T_5 = eq(reg, asSInt(UInt<7>("h055"))) @[AsyncResetSpec.scala 205:28]
      node _T_6 = bits(reset, 0, 0) @[AsyncResetSpec.scala 205:23]
      node _T_7 = or(_T_5, _T_6) @[AsyncResetSpec.scala 205:23]
      node _T_8 = eq(_T_7, UInt<1>("h00")) @[AsyncResetSpec.scala 205:23]
      when _T_8 : @[AsyncResetSpec.scala 205:23]
        printf(clock, UInt<1>(1), "Assertion failed\n    at AsyncResetSpec.scala:205 chisel3.assert(reg === -43.S)\n") @[AsyncResetSpec.scala 205:23]
        stop(clock, UInt<1>(1), 1) @[AsyncResetSpec.scala 205:23]
        skip @[AsyncResetSpec.scala 205:23]
      skip @[AsyncResetSpec.scala 204:20]
    when done : @[AsyncResetSpec.scala 207:19]
      node _T_9 = bits(reset, 0, 0) @[AsyncResetSpec.scala 207:25]
      node _T_10 = eq(_T_9, UInt<1>("h00")) @[AsyncResetSpec.scala 207:25]
      when _T_10 : @[AsyncResetSpec.scala 207:25]
        stop(clock, UInt<1>(1), 0) @[AsyncResetSpec.scala 207:25]
        skip @[AsyncResetSpec.scala 207:25]
      skip @[AsyncResetSpec.scala 207:19]
    
