;chisel3.BuildInfo$@527a8665
circuit MixedVecUIntDynamicIndexTester : 
  module MixedVecUIntDynamicIndexTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire wire : {3 : UInt<7>, 2 : UInt<4>, 1 : UInt<16>, 0 : UInt<8>} @[MixedVecSpec.scala 78:18]
    wire.0 <= UInt<1>("h00") @[MixedVecSpec.scala 82:13]
    wire.1 <= UInt<1>("h01") @[MixedVecSpec.scala 82:13]
    wire.2 <= UInt<2>("h02") @[MixedVecSpec.scala 82:13]
    wire.3 <= UInt<2>("h03") @[MixedVecSpec.scala 82:13]
    wire vecWire : UInt<16>[4] @[MixedVecSpec.scala 85:24]
    vecWire[0] <= wire.0 @[MixedVecSpec.scala 85:24]
    vecWire[1] <= wire.1 @[MixedVecSpec.scala 85:24]
    vecWire[2] <= wire.2 @[MixedVecSpec.scala 85:24]
    vecWire[3] <= wire.3 @[MixedVecSpec.scala 85:24]
    reg cycle : UInt<2>, clock with : (reset => (reset, UInt<2>("h00"))) @[Counter.scala 60:40]
    wire done : UInt<1>
    done <= UInt<1>("h00")
    when UInt<1>("h01") : @[Counter.scala 118:17]
      node wrap_wrap = eq(cycle, UInt<2>("h03")) @[Counter.scala 72:24]
      node _wrap_value_T = add(cycle, UInt<1>("h01")) @[Counter.scala 76:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 76:24]
      cycle <= _wrap_value_T_1 @[Counter.scala 76:15]
      done <= wrap_wrap @[Counter.scala 118:24]
      skip @[Counter.scala 118:17]
    node _T = eq(vecWire[cycle], cycle) @[MixedVecSpec.scala 88:25]
    node _T_1 = bits(reset, 0, 0) @[MixedVecSpec.scala 88:9]
    node _T_2 = or(_T, _T_1) @[MixedVecSpec.scala 88:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[MixedVecSpec.scala 88:9]
    when _T_3 : @[MixedVecSpec.scala 88:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at MixedVecSpec.scala:88 assert(vecWire(cycle) === cycle)\n") @[MixedVecSpec.scala 88:9]
      stop(clock, UInt<1>(1), 1) @[MixedVecSpec.scala 88:9]
      skip @[MixedVecSpec.scala 88:9]
    when done : @[MixedVecSpec.scala 90:15]
      node _T_4 = bits(reset, 0, 0) @[MixedVecSpec.scala 90:21]
      node _T_5 = eq(_T_4, UInt<1>("h00")) @[MixedVecSpec.scala 90:21]
      when _T_5 : @[MixedVecSpec.scala 90:21]
        stop(clock, UInt<1>(1), 0) @[MixedVecSpec.scala 90:21]
        skip @[MixedVecSpec.scala 90:21]
      skip @[MixedVecSpec.scala 90:15]
    
