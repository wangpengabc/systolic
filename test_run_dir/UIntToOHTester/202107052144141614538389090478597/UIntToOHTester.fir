;chisel3.BuildInfo$@527a8665
circuit UIntToOHTester : 
  module UIntToOHTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    node _out_shiftAmount_T = pad(UInt<1>("h01"), 2) @[OneHot.scala 64:31]
    node out_shiftAmount = bits(_out_shiftAmount_T, 1, 0) @[OneHot.scala 64:49]
    node _out_T = dshl(UInt<1>("h01"), out_shiftAmount) @[OneHot.scala 65:12]
    node out = bits(_out_T, 2, 0) @[OneHot.scala 65:27]
    node _T = eq(out, UInt<2>("h02")) @[OneHotMuxSpec.scala 299:14]
    node _T_1 = bits(reset, 0, 0) @[OneHotMuxSpec.scala 299:9]
    node _T_2 = or(_T, _T_1) @[OneHotMuxSpec.scala 299:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[OneHotMuxSpec.scala 299:9]
    when _T_3 : @[OneHotMuxSpec.scala 299:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at OneHotMuxSpec.scala:299 assert(out === 2.U)\n") @[OneHotMuxSpec.scala 299:9]
      stop(clock, UInt<1>(1), 1) @[OneHotMuxSpec.scala 299:9]
      skip @[OneHotMuxSpec.scala 299:9]
    node _T_4 = eq(UInt<1>("h01"), UInt<1>("h01")) @[OneHotMuxSpec.scala 303:15]
    node _T_5 = bits(reset, 0, 0) @[OneHotMuxSpec.scala 303:9]
    node _T_6 = or(_T_4, _T_5) @[OneHotMuxSpec.scala 303:9]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[OneHotMuxSpec.scala 303:9]
    when _T_7 : @[OneHotMuxSpec.scala 303:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at OneHotMuxSpec.scala:303 assert(out2 === 1.U)\n") @[OneHotMuxSpec.scala 303:9]
      stop(clock, UInt<1>(1), 1) @[OneHotMuxSpec.scala 303:9]
      skip @[OneHotMuxSpec.scala 303:9]
    node _T_8 = bits(reset, 0, 0) @[OneHotMuxSpec.scala 305:7]
    node _T_9 = eq(_T_8, UInt<1>("h00")) @[OneHotMuxSpec.scala 305:7]
    when _T_9 : @[OneHotMuxSpec.scala 305:7]
      stop(clock, UInt<1>(1), 0) @[OneHotMuxSpec.scala 305:7]
      skip @[OneHotMuxSpec.scala 305:7]
    
