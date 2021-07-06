;chisel3.BuildInfo$@527a8665
circuit InternalBoreTester : 
  module InternalBore : 
    input in : UInt<1>
    output out : UInt<1>
    
    out <= UInt<1>("h00") @[BoringUtilsSpec.scala 119:9]
    
  module InternalBoreTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
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
    when done : @[BoringUtilsSpec.scala 21:15]
      node _T = bits(reset, 0, 0) @[BoringUtilsSpec.scala 21:21]
      node _T_1 = eq(_T, UInt<1>("h00")) @[BoringUtilsSpec.scala 21:21]
      when _T_1 : @[BoringUtilsSpec.scala 21:21]
        stop(clock, UInt<1>(1), 0) @[BoringUtilsSpec.scala 21:21]
        skip @[BoringUtilsSpec.scala 21:21]
      skip @[BoringUtilsSpec.scala 21:15]
    inst dut of InternalBore @[BoringUtilsSpec.scala 124:21]
    dut.in <= UInt<1>("h01") @[BoringUtilsSpec.scala 125:12]
    node _T_2 = eq(dut.out, UInt<1>("h01")) @[BoringUtilsSpec.scala 126:28]
    node _T_3 = bits(reset, 0, 0) @[BoringUtilsSpec.scala 126:19]
    node _T_4 = or(_T_2, _T_3) @[BoringUtilsSpec.scala 126:19]
    node _T_5 = eq(_T_4, UInt<1>("h00")) @[BoringUtilsSpec.scala 126:19]
    when _T_5 : @[BoringUtilsSpec.scala 126:19]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BoringUtilsSpec.scala:126 chisel3.assert(dut.out === true.B)\n") @[BoringUtilsSpec.scala 126:19]
      stop(clock, UInt<1>(1), 1) @[BoringUtilsSpec.scala 126:19]
      skip @[BoringUtilsSpec.scala 126:19]
    
