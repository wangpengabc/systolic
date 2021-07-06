;chisel3.BuildInfo$@527a8665
circuit ChiselRunners_Anon : 
  module ChiselRunners_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire x_x : UInt[1] @[WidthSpec.scala 146:19]
    x_x[0] <= UInt<4>("h00") @[WidthSpec.scala 147:12]
    wire x_w : UInt<4>[1]
    x_w[0] <= x_x[0]
    wire _w_0_WIRE : UInt<4> @[ChiselSpec.scala 55:24]
    _w_0_WIRE <= UInt<1>("h00") @[ChiselSpec.scala 55:24]
    x_w[0] <= _w_0_WIRE @[ChiselSpec.scala 55:9]
    reg done_value : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[Counter.scala 60:40]
    wire done : UInt<1>
    done <= UInt<1>("h00")
    when UInt<1>("h01") : @[Counter.scala 118:17]
      node done_wrap_wrap = eq(done_value, UInt<1>("h01")) @[Counter.scala 72:24]
      node _done_wrap_value_T = add(done_value, UInt<1>("h01")) @[Counter.scala 76:24]
      node _done_wrap_value_T_1 = tail(_done_wrap_value_T, 1) @[Counter.scala 76:24]
      done_value <= _done_wrap_value_T_1 @[Counter.scala 76:15]
      done <= done_wrap_wrap @[Counter.scala 118:24]
      skip @[Counter.scala 118:17]
    when done : @[ChiselSpec.scala 57:19]
      node _T = not(x_w[0]) @[ChiselSpec.scala 58:24]
      node _T_1 = asUInt(asSInt(UInt<4>("h0f"))) @[ChiselSpec.scala 58:57]
      node _T_2 = eq(_T, _T_1) @[ChiselSpec.scala 58:36]
      node _T_3 = bits(reset, 0, 0) @[ChiselSpec.scala 58:23]
      node _T_4 = or(_T_2, _T_3) @[ChiselSpec.scala 58:23]
      node _T_5 = eq(_T_4, UInt<1>("h00")) @[ChiselSpec.scala 58:23]
      when _T_5 : @[ChiselSpec.scala 58:23]
        printf(clock, UInt<1>(1), "Assertion failed\n    at ChiselSpec.scala:58 chisel3.assert(~(x.asUInt) === -1.S(expected.W).asUInt)\n") @[ChiselSpec.scala 58:23]
        stop(clock, UInt<1>(1), 1) @[ChiselSpec.scala 58:23]
        skip @[ChiselSpec.scala 58:23]
      node _T_6 = bits(reset, 0, 0) @[ChiselSpec.scala 59:13]
      node _T_7 = eq(_T_6, UInt<1>("h00")) @[ChiselSpec.scala 59:13]
      when _T_7 : @[ChiselSpec.scala 59:13]
        stop(clock, UInt<1>(1), 0) @[ChiselSpec.scala 59:13]
        skip @[ChiselSpec.scala 59:13]
      skip @[ChiselSpec.scala 57:19]
    
