;chisel3.BuildInfo$@527a8665
circuit SimpleOneHotTester : 
  module SimpleOneHotTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire out : UInt @[OneHotMuxSpec.scala 58:17]
    node _out_T = mux(UInt<1>("h00"), UInt<2>("h02"), UInt<1>("h00")) @[Mux.scala 27:72]
    node _out_T_1 = mux(UInt<1>("h00"), UInt<3>("h04"), UInt<1>("h00")) @[Mux.scala 27:72]
    node _out_T_2 = mux(UInt<1>("h01"), UInt<4>("h08"), UInt<1>("h00")) @[Mux.scala 27:72]
    node _out_T_3 = mux(UInt<1>("h00"), UInt<4>("h0b"), UInt<1>("h00")) @[Mux.scala 27:72]
    node _out_T_4 = or(_out_T, _out_T_1) @[Mux.scala 27:72]
    node _out_T_5 = or(_out_T_4, _out_T_2) @[Mux.scala 27:72]
    node _out_T_6 = or(_out_T_5, _out_T_3) @[Mux.scala 27:72]
    wire _out_WIRE : UInt<4> @[Mux.scala 27:72]
    _out_WIRE <= _out_T_6 @[Mux.scala 27:72]
    out <= _out_WIRE @[OneHotMuxSpec.scala 59:7]
    node _T = eq(out, UInt<4>("h08")) @[OneHotMuxSpec.scala 66:14]
    node _T_1 = bits(reset, 0, 0) @[OneHotMuxSpec.scala 66:9]
    node _T_2 = or(_T, _T_1) @[OneHotMuxSpec.scala 66:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[OneHotMuxSpec.scala 66:9]
    when _T_3 : @[OneHotMuxSpec.scala 66:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at OneHotMuxSpec.scala:66 assert(out === 8.U)\n") @[OneHotMuxSpec.scala 66:9]
      stop(clock, UInt<1>(1), 1) @[OneHotMuxSpec.scala 66:9]
      skip @[OneHotMuxSpec.scala 66:9]
    node _T_4 = bits(reset, 0, 0) @[OneHotMuxSpec.scala 68:7]
    node _T_5 = eq(_T_4, UInt<1>("h00")) @[OneHotMuxSpec.scala 68:7]
    when _T_5 : @[OneHotMuxSpec.scala 68:7]
      stop(clock, UInt<1>(1), 0) @[OneHotMuxSpec.scala 68:7]
      skip @[OneHotMuxSpec.scala 68:7]
    
