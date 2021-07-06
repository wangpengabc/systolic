;chisel3.BuildInfo$@527a8665
circuit SelectTester : 
  module SelectTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire values : UInt<2>[3] @[SelectSpec.scala 17:23]
    values[0] <= UInt<1>("h00") @[SelectSpec.scala 17:23]
    values[1] <= UInt<1>("h01") @[SelectSpec.scala 17:23]
    values[2] <= UInt<2>("h02") @[SelectSpec.scala 17:23]
    reg counter : UInt<3>, clock with : (reset => (reset, UInt<3>("h00"))) @[SelectSpec.scala 18:24]
    node _added_T = add(counter, UInt<1>("h01")) @[SelectSpec.scala 19:23]
    node added = tail(_added_T, 1) @[SelectSpec.scala 19:23]
    counter <= added @[SelectSpec.scala 20:11]
    node overflow = geq(counter, UInt<2>("h03")) @[SelectSpec.scala 21:26]
    node _nreset_T = bits(reset, 0, 0) @[SelectSpec.scala 22:28]
    node nreset = eq(_nreset_T, UInt<1>("h00")) @[SelectSpec.scala 22:31]
    node _selected_T = bits(counter, 1, 0)
    node _zero_T = add(UInt<1>("h00"), UInt<1>("h00")) @[SelectSpec.scala 24:18]
    node zero = tail(_zero_T, 1) @[SelectSpec.scala 24:18]
    when overflow : @[SelectSpec.scala 25:18]
      counter <= zero @[SelectSpec.scala 26:13]
      node _T = bits(reset, 0, 0) @[SelectSpec.scala 27:9]
      node _T_1 = eq(_T, UInt<1>("h00")) @[SelectSpec.scala 27:9]
      when _T_1 : @[SelectSpec.scala 27:9]
        stop(clock, UInt<1>(1), 0) @[SelectSpec.scala 27:9]
        skip @[SelectSpec.scala 27:9]
      skip @[SelectSpec.scala 25:18]
    else : @[SelectSpec.scala 28:15]
      when nreset : @[SelectSpec.scala 29:18]
        node _T_2 = bits(counter, 1, 0)
        node _T_3 = eq(counter, values[_T_2]) @[SelectSpec.scala 30:22]
        node _T_4 = bits(reset, 0, 0) @[SelectSpec.scala 30:13]
        node _T_5 = or(_T_3, _T_4) @[SelectSpec.scala 30:13]
        node _T_6 = eq(_T_5, UInt<1>("h00")) @[SelectSpec.scala 30:13]
        when _T_6 : @[SelectSpec.scala 30:13]
          printf(clock, UInt<1>(1), "Assertion failed\n    at SelectSpec.scala:30 assert(counter === values(counter))\n") @[SelectSpec.scala 30:13]
          stop(clock, UInt<1>(1), 1) @[SelectSpec.scala 30:13]
          skip @[SelectSpec.scala 30:13]
        node _T_7 = bits(reset, 0, 0) @[SelectSpec.scala 31:13]
        node _T_8 = eq(_T_7, UInt<1>("h00")) @[SelectSpec.scala 31:13]
        when _T_8 : @[SelectSpec.scala 31:13]
          printf(clock, UInt<1>(1), "values(%d) = %d\n", counter, values[_selected_T]) @[SelectSpec.scala 31:13]
          skip @[SelectSpec.scala 31:13]
        skip @[SelectSpec.scala 29:18]
      skip @[SelectSpec.scala 28:15]
    
