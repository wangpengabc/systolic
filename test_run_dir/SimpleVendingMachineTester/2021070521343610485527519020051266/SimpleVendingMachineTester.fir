;chisel3.BuildInfo$@527a8665
circuit SimpleVendingMachineTester : 
  extmodule VerilogVendingMachine : 
    input nickel : UInt<1>
    input dime : UInt<1>
    output dispense : UInt<1>
    input clock : Clock
    input reset : Reset
    
    defname = VerilogVendingMachine
    
    
  module VerilogVendingMachineWrapper : 
    input clock : Clock
    input reset : Reset
    output io : {flip nickel : UInt<1>, flip dime : UInt<1>, dispense : UInt<1>}
    
    node _T = and(io.nickel, io.dime) @[SimpleVendingMachine.scala 19:22]
    node _T_1 = eq(_T, UInt<1>("h00")) @[SimpleVendingMachine.scala 19:10]
    node _T_2 = asUInt(reset) @[SimpleVendingMachine.scala 19:9]
    node _T_3 = or(_T_1, _T_2) @[SimpleVendingMachine.scala 19:9]
    node _T_4 = eq(_T_3, UInt<1>("h00")) @[SimpleVendingMachine.scala 19:9]
    when _T_4 : @[SimpleVendingMachine.scala 19:9]
      printf(clock, UInt<1>(1), "Assertion failed: Only one of nickel or dime can be input at a time!\n    at SimpleVendingMachine.scala:19 assert(!(io.nickel && io.dime), \"Only one of nickel or dime can be input at a time!\")\n") @[SimpleVendingMachine.scala 19:9]
      stop(clock, UInt<1>(1), 1) @[SimpleVendingMachine.scala 19:9]
      skip @[SimpleVendingMachine.scala 19:9]
    inst impl of VerilogVendingMachine @[SimpleVendingMachine.scala 61:20]
    impl.reset is invalid
    impl.clock is invalid
    impl.dispense is invalid
    impl.dime is invalid
    impl.nickel is invalid
    impl.clock <= clock @[SimpleVendingMachine.scala 62:17]
    impl.reset <= reset @[SimpleVendingMachine.scala 63:17]
    impl.nickel <= io.nickel @[SimpleVendingMachine.scala 64:18]
    impl.dime <= io.dime @[SimpleVendingMachine.scala 65:16]
    io.dispense <= impl.dispense @[SimpleVendingMachine.scala 66:15]
    
  module SimpleVendingMachineTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst dut of VerilogVendingMachineWrapper @[SimpleVendingMachine.scala 73:19]
    dut.clock <= clock
    dut.reset <= reset
    reg cycle : UInt<4>, clock with : (reset => (reset, UInt<4>("h00"))) @[Counter.scala 60:40]
    wire done : UInt<1>
    done <= UInt<1>("h00")
    when UInt<1>("h01") : @[Counter.scala 118:17]
      node wrap_wrap = eq(cycle, UInt<4>("h09")) @[Counter.scala 72:24]
      node _wrap_value_T = add(cycle, UInt<1>("h01")) @[Counter.scala 76:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 76:24]
      cycle <= _wrap_value_T_1 @[Counter.scala 76:15]
      when wrap_wrap : @[Counter.scala 86:20]
        cycle <= UInt<1>("h00") @[Counter.scala 86:28]
        skip @[Counter.scala 86:20]
      done <= wrap_wrap @[Counter.scala 118:24]
      skip @[Counter.scala 118:17]
    when done : @[SimpleVendingMachine.scala 76:15]
      node _T = bits(reset, 0, 0) @[SimpleVendingMachine.scala 76:21]
      node _T_1 = eq(_T, UInt<1>("h00")) @[SimpleVendingMachine.scala 76:21]
      when _T_1 : @[SimpleVendingMachine.scala 76:21]
        stop(clock, UInt<1>(1), 0) @[SimpleVendingMachine.scala 76:21]
        skip @[SimpleVendingMachine.scala 76:21]
      node _T_2 = bits(reset, 0, 0) @[SimpleVendingMachine.scala 76:29]
      node _T_3 = eq(_T_2, UInt<1>("h00")) @[SimpleVendingMachine.scala 76:29]
      when _T_3 : @[SimpleVendingMachine.scala 76:29]
        stop(clock, UInt<1>(1), 0) @[SimpleVendingMachine.scala 76:29]
        skip @[SimpleVendingMachine.scala 76:29]
      skip @[SimpleVendingMachine.scala 76:15]
    wire nickelInputs : UInt<1>[10] @[SimpleVendingMachine.scala 78:29]
    nickelInputs[0] <= UInt<1>("h01") @[SimpleVendingMachine.scala 78:29]
    nickelInputs[1] <= UInt<1>("h01") @[SimpleVendingMachine.scala 78:29]
    nickelInputs[2] <= UInt<1>("h01") @[SimpleVendingMachine.scala 78:29]
    nickelInputs[3] <= UInt<1>("h01") @[SimpleVendingMachine.scala 78:29]
    nickelInputs[4] <= UInt<1>("h01") @[SimpleVendingMachine.scala 78:29]
    nickelInputs[5] <= UInt<1>("h00") @[SimpleVendingMachine.scala 78:29]
    nickelInputs[6] <= UInt<1>("h00") @[SimpleVendingMachine.scala 78:29]
    nickelInputs[7] <= UInt<1>("h00") @[SimpleVendingMachine.scala 78:29]
    nickelInputs[8] <= UInt<1>("h01") @[SimpleVendingMachine.scala 78:29]
    nickelInputs[9] <= UInt<1>("h00") @[SimpleVendingMachine.scala 78:29]
    wire dimeInputs : UInt<1>[10] @[SimpleVendingMachine.scala 79:29]
    dimeInputs[0] <= UInt<1>("h00") @[SimpleVendingMachine.scala 79:29]
    dimeInputs[1] <= UInt<1>("h00") @[SimpleVendingMachine.scala 79:29]
    dimeInputs[2] <= UInt<1>("h00") @[SimpleVendingMachine.scala 79:29]
    dimeInputs[3] <= UInt<1>("h00") @[SimpleVendingMachine.scala 79:29]
    dimeInputs[4] <= UInt<1>("h00") @[SimpleVendingMachine.scala 79:29]
    dimeInputs[5] <= UInt<1>("h01") @[SimpleVendingMachine.scala 79:29]
    dimeInputs[6] <= UInt<1>("h01") @[SimpleVendingMachine.scala 79:29]
    dimeInputs[7] <= UInt<1>("h00") @[SimpleVendingMachine.scala 79:29]
    dimeInputs[8] <= UInt<1>("h00") @[SimpleVendingMachine.scala 79:29]
    dimeInputs[9] <= UInt<1>("h01") @[SimpleVendingMachine.scala 79:29]
    wire expected : UInt<1>[10] @[SimpleVendingMachine.scala 80:29]
    expected[0] <= UInt<1>("h00") @[SimpleVendingMachine.scala 80:29]
    expected[1] <= UInt<1>("h00") @[SimpleVendingMachine.scala 80:29]
    expected[2] <= UInt<1>("h00") @[SimpleVendingMachine.scala 80:29]
    expected[3] <= UInt<1>("h00") @[SimpleVendingMachine.scala 80:29]
    expected[4] <= UInt<1>("h01") @[SimpleVendingMachine.scala 80:29]
    expected[5] <= UInt<1>("h00") @[SimpleVendingMachine.scala 80:29]
    expected[6] <= UInt<1>("h00") @[SimpleVendingMachine.scala 80:29]
    expected[7] <= UInt<1>("h01") @[SimpleVendingMachine.scala 80:29]
    expected[8] <= UInt<1>("h00") @[SimpleVendingMachine.scala 80:29]
    expected[9] <= UInt<1>("h00") @[SimpleVendingMachine.scala 80:29]
    dut.io.nickel <= nickelInputs[cycle] @[SimpleVendingMachine.scala 82:17]
    dut.io.dime <= dimeInputs[cycle] @[SimpleVendingMachine.scala 83:15]
    node _T_4 = eq(dut.io.dispense, expected[cycle]) @[SimpleVendingMachine.scala 84:26]
    node _T_5 = bits(reset, 0, 0) @[SimpleVendingMachine.scala 84:9]
    node _T_6 = or(_T_4, _T_5) @[SimpleVendingMachine.scala 84:9]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[SimpleVendingMachine.scala 84:9]
    when _T_7 : @[SimpleVendingMachine.scala 84:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at SimpleVendingMachine.scala:84 assert(dut.io.dispense === expected(cycle))\n") @[SimpleVendingMachine.scala 84:9]
      stop(clock, UInt<1>(1), 1) @[SimpleVendingMachine.scala 84:9]
      skip @[SimpleVendingMachine.scala 84:9]
    
