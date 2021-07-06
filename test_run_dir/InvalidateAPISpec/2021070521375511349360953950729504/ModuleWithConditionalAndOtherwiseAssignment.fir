;chisel3.BuildInfo$@527a8665
circuit ModuleWithConditionalAndOtherwiseAssignment : 
  module ModuleWithConditionalAndOtherwiseAssignment : 
    input clock : Clock
    input reset : UInt<1>
    output io : {out : UInt<1>}
    
    reg value : UInt<3>, clock with : (reset => (reset, UInt<3>("h00"))) @[Counter.scala 60:40]
    node wrap = eq(value, UInt<3>("h07")) @[Counter.scala 72:24]
    node _value_T = add(value, UInt<1>("h01")) @[Counter.scala 76:24]
    node _value_T_1 = tail(_value_T, 1) @[Counter.scala 76:24]
    value <= _value_T_1 @[Counter.scala 76:15]
    when wrap : @[InvalidateAPISpec.scala 164:28]
      io.out <= UInt<1>("h01") @[InvalidateAPISpec.scala 165:16]
      skip @[InvalidateAPISpec.scala 164:28]
    else : @[InvalidateAPISpec.scala 166:9]
      io.out <= UInt<1>("h00") @[InvalidateAPISpec.scala 167:16]
      skip @[InvalidateAPISpec.scala 166:9]
    
