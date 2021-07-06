;chisel3.BuildInfo$@527a8665
circuit BlackBoxWithParamsTester : 
  extmodule BlackBoxConstant : 
    output out : UInt<1>
    
    defname = BlackBoxConstant
    parameter VALUE = 1
    parameter WIDTH = 1
    
  extmodule BlackBoxConstant_1 : 
    output out : UInt<3>
    
    defname = BlackBoxConstant
    parameter VALUE = 4
    parameter WIDTH = 3
    
  extmodule BlackBoxStringParam : 
    output out : UInt<32>
    
    defname = BlackBoxStringParam
    parameter STRING = "one"
    
  extmodule BlackBoxStringParam_1 : 
    output out : UInt<32>
    
    defname = BlackBoxStringParam
    parameter STRING = "two"
    
  extmodule BlackBoxRealParam : 
    output out : UInt<64>
    
    defname = BlackBoxRealParam
    parameter REAL = 1.0
    
  extmodule BlackBoxRealParam_1 : 
    output out : UInt<64>
    
    defname = BlackBoxRealParam
    parameter REAL = -1.0
    
  extmodule BlackBoxTypeParam : 
    output out : UInt<1>
    
    defname = BlackBoxTypeParam
    parameter T = 'bit'
    
  extmodule BlackBoxTypeParam_1 : 
    output out : UInt<32>
    
    defname = BlackBoxTypeParam
    parameter T = 'bit [31:0]'
    
  module BlackBoxWithParamsTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst blackBoxOne of BlackBoxConstant @[BlackBox.scala 150:28]
    blackBoxOne.out is invalid
    inst blackBoxFour of BlackBoxConstant_1 @[BlackBox.scala 151:29]
    blackBoxFour.out is invalid
    inst blackBoxStringParamOne of BlackBoxStringParam @[BlackBox.scala 152:38]
    blackBoxStringParamOne.out is invalid
    inst blackBoxStringParamTwo of BlackBoxStringParam_1 @[BlackBox.scala 153:38]
    blackBoxStringParamTwo.out is invalid
    inst blackBoxRealParamOne of BlackBoxRealParam @[BlackBox.scala 154:36]
    blackBoxRealParamOne.out is invalid
    inst blackBoxRealParamNeg of BlackBoxRealParam_1 @[BlackBox.scala 155:36]
    blackBoxRealParamNeg.out is invalid
    inst blackBoxTypeParamBit of BlackBoxTypeParam @[BlackBox.scala 156:36]
    blackBoxTypeParamBit.out is invalid
    inst blackBoxTypeParamWord of BlackBoxTypeParam_1 @[BlackBox.scala 157:37]
    blackBoxTypeParamWord.out is invalid
    reg cycles : UInt<2>, clock with : (reset => (reset, UInt<2>("h00"))) @[Counter.scala 60:40]
    wire end : UInt<1>
    end <= UInt<1>("h00")
    when UInt<1>("h01") : @[Counter.scala 118:17]
      node wrap_wrap = eq(cycles, UInt<2>("h03")) @[Counter.scala 72:24]
      node _wrap_value_T = add(cycles, UInt<1>("h01")) @[Counter.scala 76:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 76:24]
      cycles <= _wrap_value_T_1 @[Counter.scala 76:15]
      end <= wrap_wrap @[Counter.scala 118:24]
      skip @[Counter.scala 118:17]
    node _T = eq(blackBoxOne.out, UInt<1>("h01")) @[BlackBox.scala 161:30]
    node _T_1 = bits(reset, 0, 0) @[BlackBox.scala 161:9]
    node _T_2 = or(_T, _T_1) @[BlackBox.scala 161:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[BlackBox.scala 161:9]
    when _T_3 : @[BlackBox.scala 161:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:161 assert(blackBoxOne.io.out  === 1.U)\n") @[BlackBox.scala 161:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 161:9]
      skip @[BlackBox.scala 161:9]
    node _T_4 = eq(blackBoxFour.out, UInt<3>("h04")) @[BlackBox.scala 162:30]
    node _T_5 = bits(reset, 0, 0) @[BlackBox.scala 162:9]
    node _T_6 = or(_T_4, _T_5) @[BlackBox.scala 162:9]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[BlackBox.scala 162:9]
    when _T_7 : @[BlackBox.scala 162:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:162 assert(blackBoxFour.io.out === 4.U)\n") @[BlackBox.scala 162:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 162:9]
      skip @[BlackBox.scala 162:9]
    node _T_8 = eq(blackBoxStringParamOne.out, UInt<1>("h01")) @[BlackBox.scala 163:40]
    node _T_9 = bits(reset, 0, 0) @[BlackBox.scala 163:9]
    node _T_10 = or(_T_8, _T_9) @[BlackBox.scala 163:9]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[BlackBox.scala 163:9]
    when _T_11 : @[BlackBox.scala 163:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:163 assert(blackBoxStringParamOne.io.out === 1.U)\n") @[BlackBox.scala 163:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 163:9]
      skip @[BlackBox.scala 163:9]
    node _T_12 = eq(blackBoxStringParamTwo.out, UInt<2>("h02")) @[BlackBox.scala 164:40]
    node _T_13 = bits(reset, 0, 0) @[BlackBox.scala 164:9]
    node _T_14 = or(_T_12, _T_13) @[BlackBox.scala 164:9]
    node _T_15 = eq(_T_14, UInt<1>("h00")) @[BlackBox.scala 164:9]
    when _T_15 : @[BlackBox.scala 164:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:164 assert(blackBoxStringParamTwo.io.out === 2.U)\n") @[BlackBox.scala 164:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 164:9]
      skip @[BlackBox.scala 164:9]
    node _T_16 = eq(blackBoxRealParamOne.out, UInt<62>("h03ff0000000000000")) @[BlackBox.scala 165:38]
    node _T_17 = bits(reset, 0, 0) @[BlackBox.scala 165:9]
    node _T_18 = or(_T_16, _T_17) @[BlackBox.scala 165:9]
    node _T_19 = eq(_T_18, UInt<1>("h00")) @[BlackBox.scala 165:9]
    when _T_19 : @[BlackBox.scala 165:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:165 assert(blackBoxRealParamOne.io.out === 0x3ff0000000000000L.U)\n") @[BlackBox.scala 165:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 165:9]
      skip @[BlackBox.scala 165:9]
    node _T_20 = eq(blackBoxRealParamNeg.out, UInt<64>("h0bff0000000000000")) @[BlackBox.scala 166:38]
    node _T_21 = bits(reset, 0, 0) @[BlackBox.scala 166:9]
    node _T_22 = or(_T_20, _T_21) @[BlackBox.scala 166:9]
    node _T_23 = eq(_T_22, UInt<1>("h00")) @[BlackBox.scala 166:9]
    when _T_23 : @[BlackBox.scala 166:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:166 assert(blackBoxRealParamNeg.io.out === BigInt(\"bff0000000000000\", 16).U)\n") @[BlackBox.scala 166:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 166:9]
      skip @[BlackBox.scala 166:9]
    node _T_24 = eq(blackBoxTypeParamBit.out, UInt<1>("h01")) @[BlackBox.scala 167:38]
    node _T_25 = bits(reset, 0, 0) @[BlackBox.scala 167:9]
    node _T_26 = or(_T_24, _T_25) @[BlackBox.scala 167:9]
    node _T_27 = eq(_T_26, UInt<1>("h00")) @[BlackBox.scala 167:9]
    when _T_27 : @[BlackBox.scala 167:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:167 assert(blackBoxTypeParamBit.io.out === 1.U)\n") @[BlackBox.scala 167:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 167:9]
      skip @[BlackBox.scala 167:9]
    node _T_28 = eq(blackBoxTypeParamWord.out, UInt<32>("h0deadbeef")) @[BlackBox.scala 168:39]
    node _T_29 = bits(reset, 0, 0) @[BlackBox.scala 168:9]
    node _T_30 = or(_T_28, _T_29) @[BlackBox.scala 168:9]
    node _T_31 = eq(_T_30, UInt<1>("h00")) @[BlackBox.scala 168:9]
    when _T_31 : @[BlackBox.scala 168:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at BlackBox.scala:168 assert(blackBoxTypeParamWord.io.out === \"hdeadbeef\".U(32.W))\n") @[BlackBox.scala 168:9]
      stop(clock, UInt<1>(1), 1) @[BlackBox.scala 168:9]
      skip @[BlackBox.scala 168:9]
    when end : @[BlackBox.scala 170:13]
      node _T_32 = bits(reset, 0, 0) @[BlackBox.scala 170:19]
      node _T_33 = eq(_T_32, UInt<1>("h00")) @[BlackBox.scala 170:19]
      when _T_33 : @[BlackBox.scala 170:19]
        stop(clock, UInt<1>(1), 0) @[BlackBox.scala 170:19]
        skip @[BlackBox.scala 170:19]
      skip @[BlackBox.scala 170:13]
    
