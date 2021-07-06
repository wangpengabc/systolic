;chisel3.BuildInfo$@527a8665
circuit PlusOne : 
  module PlusOne : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip in : UInt<32>, out : UInt<32>}
    
    node _io_out_T = add(io.in, UInt<1>("h01")) @[Module.scala 20:19]
    node _io_out_T_1 = tail(_io_out_T, 1) @[Module.scala 20:19]
    io.out <= _io_out_T_1 @[Module.scala 20:10]
    
