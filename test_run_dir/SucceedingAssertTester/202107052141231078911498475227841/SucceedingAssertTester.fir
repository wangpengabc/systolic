;chisel3.BuildInfo$@527a8665
circuit SucceedingAssertTester : 
  module SucceedingAssertTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    node _T = bits(reset, 0, 0) @[Assert.scala 20:9]
    node _T_1 = or(UInt<1>("h01"), _T) @[Assert.scala 20:9]
    node _T_2 = eq(_T_1, UInt<1>("h00")) @[Assert.scala 20:9]
    when _T_2 : @[Assert.scala 20:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at Assert.scala:20 assert(true.B)\n") @[Assert.scala 20:9]
      stop(clock, UInt<1>(1), 1) @[Assert.scala 20:9]
      skip @[Assert.scala 20:9]
    node _done_T = bits(reset, 0, 0) @[Assert.scala 22:34]
    node _done_T_1 = eq(_done_T, UInt<1>("h00")) @[Assert.scala 22:27]
    reg done_value : UInt<2>, clock with : (reset => (reset, UInt<2>("h00"))) @[Counter.scala 60:40]
    wire done : UInt<1>
    done <= UInt<1>("h00")
    when _done_T_1 : @[Counter.scala 118:17]
      node done_wrap_wrap = eq(done_value, UInt<2>("h03")) @[Counter.scala 72:24]
      node _done_wrap_value_T = add(done_value, UInt<1>("h01")) @[Counter.scala 76:24]
      node _done_wrap_value_T_1 = tail(_done_wrap_value_T, 1) @[Counter.scala 76:24]
      done_value <= _done_wrap_value_T_1 @[Counter.scala 76:15]
      done <= done_wrap_wrap @[Counter.scala 118:24]
      skip @[Counter.scala 118:17]
    when done : @[Assert.scala 23:15]
      node _T_3 = bits(reset, 0, 0) @[Assert.scala 24:9]
      node _T_4 = eq(_T_3, UInt<1>("h00")) @[Assert.scala 24:9]
      when _T_4 : @[Assert.scala 24:9]
        stop(clock, UInt<1>(1), 0) @[Assert.scala 24:9]
        skip @[Assert.scala 24:9]
      skip @[Assert.scala 23:15]
    
