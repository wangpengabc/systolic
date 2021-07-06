;chisel3.BuildInfo$@527a8665
circuit ResetSpec_Anon : 
  module ResetAgnosticModule : 
    input clk : Clock
    input rst : Reset
    output out : UInt<8>
    
    reg reg : UInt<8>, clk with : (reset => (rst, UInt<8>("h00"))) @[ResetSpec.scala 15:48]
    node _reg_T = add(reg, UInt<1>("h01")) @[ResetSpec.scala 16:14]
    node _reg_T_1 = tail(_reg_T, 1) @[ResetSpec.scala 16:14]
    reg <= _reg_T_1 @[ResetSpec.scala 16:7]
    out <= reg @[ResetSpec.scala 17:7]
    
  module ResetSpec_Anon : 
    input clock : Clock
    input reset : UInt<1>
    output io : {out : UInt<8>}
    
    inst inst of ResetAgnosticModule @[ResetSpec.scala 64:24]
    inst.clk <= clock @[ResetSpec.scala 65:16]
    wire _inst_rst_WIRE : AsyncReset @[ResetSpec.scala 66:33]
    node _inst_rst_T = bits(reset, 0, 0) @[ResetSpec.scala 66:33]
    node _inst_rst_T_1 = asAsyncReset(_inst_rst_T) @[ResetSpec.scala 66:33]
    _inst_rst_WIRE <= _inst_rst_T_1 @[ResetSpec.scala 66:33]
    inst.rst <= _inst_rst_WIRE @[ResetSpec.scala 66:16]
    io.out <= inst.out @[ResetSpec.scala 68:14]
    
