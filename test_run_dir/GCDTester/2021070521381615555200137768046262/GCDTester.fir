;chisel3.BuildInfo$@527a8665
circuit GCDTester : 
  module GCD : 
    input clock : Clock
    input reset : Reset
    output io : {flip a : UInt<32>, flip b : UInt<32>, flip e : UInt<1>, z : UInt<32>, v : UInt<1>}
    
    reg x : UInt<32>, clock @[GCD.scala 17:14]
    reg y : UInt<32>, clock @[GCD.scala 18:14]
    node _T = gt(x, y) @[GCD.scala 19:11]
    when _T : @[GCD.scala 19:18]
      node _x_T = sub(x, y) @[GCD.scala 19:27]
      node _x_T_1 = tail(_x_T, 1) @[GCD.scala 19:27]
      x <= _x_T_1 @[GCD.scala 19:22]
      skip @[GCD.scala 19:18]
    else : @[GCD.scala 20:18]
      node _y_T = sub(y, x) @[GCD.scala 20:27]
      node _y_T_1 = tail(_y_T, 1) @[GCD.scala 20:27]
      y <= _y_T_1 @[GCD.scala 20:22]
      skip @[GCD.scala 20:18]
    when io.e : @[GCD.scala 21:15]
      x <= io.a @[GCD.scala 21:19]
      y <= io.b @[GCD.scala 21:30]
      skip @[GCD.scala 21:15]
    io.z <= x @[GCD.scala 22:8]
    node _io_v_T = eq(y, UInt<1>("h00")) @[GCD.scala 23:13]
    io.v <= _io_v_T @[GCD.scala 23:8]
    
  module GCDTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst dut of GCD @[GCD.scala 27:19]
    dut.clock <= clock
    dut.reset <= reset
    reg first : UInt<1>, clock with : (reset => (reset, UInt<1>("h01"))) @[GCD.scala 28:22]
    dut.io.a <= UInt<7>("h040") @[GCD.scala 29:12]
    dut.io.b <= UInt<6>("h030") @[GCD.scala 30:12]
    dut.io.e <= first @[GCD.scala 31:12]
    when first : @[GCD.scala 32:15]
      first <= UInt<1>("h00") @[GCD.scala 32:23]
      skip @[GCD.scala 32:15]
    node _T = eq(first, UInt<1>("h00")) @[GCD.scala 33:8]
    node _T_1 = and(_T, dut.io.v) @[GCD.scala 33:15]
    when _T_1 : @[GCD.scala 33:28]
      node _T_2 = eq(dut.io.z, UInt<5>("h010")) @[GCD.scala 34:21]
      node _T_3 = bits(reset, 0, 0) @[GCD.scala 34:11]
      node _T_4 = or(_T_2, _T_3) @[GCD.scala 34:11]
      node _T_5 = eq(_T_4, UInt<1>("h00")) @[GCD.scala 34:11]
      when _T_5 : @[GCD.scala 34:11]
        printf(clock, UInt<1>(1), "Assertion failed\n    at GCD.scala:34 assert(dut.io.z === z.U)\n") @[GCD.scala 34:11]
        stop(clock, UInt<1>(1), 1) @[GCD.scala 34:11]
        skip @[GCD.scala 34:11]
      node _T_6 = bits(reset, 0, 0) @[GCD.scala 35:9]
      node _T_7 = eq(_T_6, UInt<1>("h00")) @[GCD.scala 35:9]
      when _T_7 : @[GCD.scala 35:9]
        stop(clock, UInt<1>(1), 0) @[GCD.scala 35:9]
        skip @[GCD.scala 35:9]
      skip @[GCD.scala 33:28]
    
