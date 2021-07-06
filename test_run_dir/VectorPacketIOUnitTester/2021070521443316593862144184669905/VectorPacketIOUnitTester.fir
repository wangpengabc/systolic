;chisel3.BuildInfo$@527a8665
circuit VectorPacketIOUnitTester : 
  module BrokenVectorPacketModule : 
    input clock : Clock
    input reset : Reset
    output io : {flip ins : {flip ready : UInt<1>, valid : UInt<1>, bits : {header : UInt<1>}}[4], outs : {flip ready : UInt<1>, valid : UInt<1>, bits : {header : UInt<1>}}[4]}
    
    io.outs[0].bits.header <= io.ins[0].bits.header @[VectorPacketIO.scala 45:16]
    io.outs[0].valid <= io.ins[0].valid @[VectorPacketIO.scala 45:16]
    io.ins[0].ready <= io.outs[0].ready @[VectorPacketIO.scala 45:16]
    io.outs[1].bits.header <= io.ins[1].bits.header @[VectorPacketIO.scala 45:16]
    io.outs[1].valid <= io.ins[1].valid @[VectorPacketIO.scala 45:16]
    io.ins[1].ready <= io.outs[1].ready @[VectorPacketIO.scala 45:16]
    io.outs[2].bits.header <= io.ins[2].bits.header @[VectorPacketIO.scala 45:16]
    io.outs[2].valid <= io.ins[2].valid @[VectorPacketIO.scala 45:16]
    io.ins[2].ready <= io.outs[2].ready @[VectorPacketIO.scala 45:16]
    io.outs[3].bits.header <= io.ins[3].bits.header @[VectorPacketIO.scala 45:16]
    io.outs[3].valid <= io.ins[3].valid @[VectorPacketIO.scala 45:16]
    io.ins[3].ready <= io.outs[3].ready @[VectorPacketIO.scala 45:16]
    io.ins[0].ready <= UInt<1>("h00") @[Decoupled.scala 72:20]
    io.ins[1].ready <= UInt<1>("h00") @[Decoupled.scala 72:20]
    io.ins[2].ready <= UInt<1>("h00") @[Decoupled.scala 72:20]
    io.ins[3].ready <= UInt<1>("h00") @[Decoupled.scala 72:20]
    io.outs[0].valid <= UInt<1>("h00") @[Decoupled.scala 56:20]
    io.outs[0].bits.header is invalid @[Decoupled.scala 57:19]
    io.outs[1].valid <= UInt<1>("h00") @[Decoupled.scala 56:20]
    io.outs[1].bits.header is invalid @[Decoupled.scala 57:19]
    io.outs[2].valid <= UInt<1>("h00") @[Decoupled.scala 56:20]
    io.outs[2].bits.header is invalid @[Decoupled.scala 57:19]
    io.outs[3].valid <= UInt<1>("h00") @[Decoupled.scala 56:20]
    io.outs[3].bits.header is invalid @[Decoupled.scala 57:19]
    
  module VectorPacketIOUnitTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    inst dut of BrokenVectorPacketModule @[VectorPacketIO.scala 54:19]
    dut.clock <= clock
    dut.reset <= reset
    dut.io.outs[0].bits.header is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[0].valid is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[0].ready is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[1].bits.header is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[1].valid is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[1].ready is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[2].bits.header is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[2].valid is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[2].ready is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[3].bits.header is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[3].valid is invalid @[VectorPacketIO.scala 55:10]
    dut.io.outs[3].ready is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[0].bits.header is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[0].valid is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[0].ready is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[1].bits.header is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[1].valid is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[1].ready is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[2].bits.header is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[2].valid is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[2].ready is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[3].bits.header is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[3].valid is invalid @[VectorPacketIO.scala 55:10]
    dut.io.ins[3].ready is invalid @[VectorPacketIO.scala 55:10]
    wire value : UInt
    value <= UInt<1>("h00")
    when UInt<1>("h01") : @[VectorPacketIO.scala 59:17]
      node _T = bits(reset, 0, 0) @[VectorPacketIO.scala 60:9]
      node _T_1 = eq(_T, UInt<1>("h00")) @[VectorPacketIO.scala 60:9]
      when _T_1 : @[VectorPacketIO.scala 60:9]
        stop(clock, UInt<1>(1), 0) @[VectorPacketIO.scala 60:9]
        skip @[VectorPacketIO.scala 60:9]
      skip @[VectorPacketIO.scala 59:17]
    
