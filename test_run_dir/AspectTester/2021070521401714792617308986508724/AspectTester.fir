;chisel3.BuildInfo$@527a8665
circuit AspectTester : 
  module AspectTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire values : UInt<4>[3] @[InjectionSpec.scala 50:25]
    values[0] <= UInt<4>("h09") @[InjectionSpec.scala 50:25]
    values[1] <= UInt<4>("h09") @[InjectionSpec.scala 50:25]
    values[2] <= UInt<4>("h09") @[InjectionSpec.scala 50:25]
    reg counter : UInt<3>, clock with : (reset => (reset, UInt<3>("h00"))) @[InjectionSpec.scala 51:26]
    node _counter_T = add(counter, UInt<1>("h01")) @[InjectionSpec.scala 52:24]
    node _counter_T_1 = tail(_counter_T, 1) @[InjectionSpec.scala 52:24]
    counter <= _counter_T_1 @[InjectionSpec.scala 52:13]
    node _T = geq(counter, UInt<2>("h03")) @[InjectionSpec.scala 53:18]
    when _T : @[InjectionSpec.scala 53:38]
      node _T_1 = bits(reset, 0, 0) @[InjectionSpec.scala 54:11]
      node _T_2 = eq(_T_1, UInt<1>("h00")) @[InjectionSpec.scala 54:11]
      when _T_2 : @[InjectionSpec.scala 54:11]
        stop(clock, UInt<1>(1), 0) @[InjectionSpec.scala 54:11]
        skip @[InjectionSpec.scala 54:11]
      skip @[InjectionSpec.scala 53:38]
    else : @[InjectionSpec.scala 55:17]
      node _T_3 = bits(reset, 0, 0) @[InjectionSpec.scala 56:24]
      node _T_4 = eq(_T_3, UInt<1>("h00")) @[InjectionSpec.scala 56:27]
      when _T_4 : @[InjectionSpec.scala 56:40]
        node _T_5 = bits(counter, 1, 0)
        node _T_6 = eq(counter, values[_T_5]) @[InjectionSpec.scala 57:24]
        node _T_7 = bits(reset, 0, 0) @[InjectionSpec.scala 57:15]
        node _T_8 = or(_T_6, _T_7) @[InjectionSpec.scala 57:15]
        node _T_9 = eq(_T_8, UInt<1>("h00")) @[InjectionSpec.scala 57:15]
        when _T_9 : @[InjectionSpec.scala 57:15]
          printf(clock, UInt<1>(1), "Assertion failed\n    at InjectionSpec.scala:57 assert(counter === values(counter))\n") @[InjectionSpec.scala 57:15]
          stop(clock, UInt<1>(1), 1) @[InjectionSpec.scala 57:15]
          skip @[InjectionSpec.scala 57:15]
        skip @[InjectionSpec.scala 56:40]
      skip @[InjectionSpec.scala 55:17]
    
