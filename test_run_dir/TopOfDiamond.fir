;chisel3.BuildInfo$@527a8665
circuit TopOfDiamond : 
  module ModC : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<16>, out : UInt<16>}
    
    io.out <= io.in @[AnnotatingDiamondSpec.scala 71:10]
    
  module ModA : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt, out : UInt}
    
    inst modC of ModC @[AnnotatingDiamondSpec.scala 88:20]
    modC.clock <= clock
    modC.reset <= reset
    modC.io.in <= io.in @[AnnotatingDiamondSpec.scala 89:14]
    io.out <= modC.io.out @[AnnotatingDiamondSpec.scala 90:10]
    
  module ModC_1 : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<32>, out : UInt<32>}
    
    io.out <= io.in @[AnnotatingDiamondSpec.scala 71:10]
    
  module ModB : 
    input clock : Clock
    input reset : Reset
    output io : {flip in : UInt<32>, out : UInt<32>}
    
    inst modC of ModC_1 @[AnnotatingDiamondSpec.scala 103:20]
    modC.clock <= clock
    modC.reset <= reset
    modC.io.in <= io.in @[AnnotatingDiamondSpec.scala 104:14]
    io.out <= modC.io.out @[AnnotatingDiamondSpec.scala 105:10]
    
  module TopOfDiamond : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip in : UInt<32>, out : UInt<32>}
    
    reg x : UInt<32>, clock @[AnnotatingDiamondSpec.scala 115:14]
    reg y : UInt<32>, clock @[AnnotatingDiamondSpec.scala 116:14]
    inst modA of ModA @[AnnotatingDiamondSpec.scala 118:20]
    modA.clock <= clock
    modA.reset <= reset
    inst modB of ModB @[AnnotatingDiamondSpec.scala 119:20]
    modB.clock <= clock
    modB.reset <= reset
    x <= io.in @[AnnotatingDiamondSpec.scala 121:5]
    modA.io.in <= x @[AnnotatingDiamondSpec.scala 122:14]
    modB.io.in <= x @[AnnotatingDiamondSpec.scala 123:14]
    node _y_T = add(modA.io.out, modB.io.out) @[AnnotatingDiamondSpec.scala 125:20]
    node _y_T_1 = tail(_y_T, 1) @[AnnotatingDiamondSpec.scala 125:20]
    y <= _y_T_1 @[AnnotatingDiamondSpec.scala 125:5]
    io.out <= y @[AnnotatingDiamondSpec.scala 126:10]
    
