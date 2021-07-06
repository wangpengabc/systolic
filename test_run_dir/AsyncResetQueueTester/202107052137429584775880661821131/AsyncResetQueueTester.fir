;chisel3.BuildInfo$@527a8665
circuit AsyncResetQueueTester : 
  module Queue : 
    input clock : Clock
    input reset : Reset
    output io : {flip enq : {flip ready : UInt<1>, valid : UInt<1>, bits : UInt<8>}, deq : {flip ready : UInt<1>, valid : UInt<1>, bits : UInt<8>}, count : UInt<3>}
    
    cmem ram : UInt<8>[4] @[Decoupled.scala 220:95]
    reg enq_ptr_value : UInt<2>, clock with : (reset => (reset, UInt<2>("h00"))) @[Counter.scala 60:40]
    reg deq_ptr_value : UInt<2>, clock with : (reset => (reset, UInt<2>("h00"))) @[Counter.scala 60:40]
    reg maybe_full : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[Decoupled.scala 223:27]
    node ptr_match = eq(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 225:33]
    node _empty_T = eq(maybe_full, UInt<1>("h00")) @[Decoupled.scala 226:28]
    node empty = and(ptr_match, _empty_T) @[Decoupled.scala 226:25]
    node full = and(ptr_match, maybe_full) @[Decoupled.scala 227:24]
    node _do_enq_T = and(io.enq.ready, io.enq.valid) @[Decoupled.scala 40:37]
    wire do_enq : UInt<1>
    do_enq <= _do_enq_T
    node _do_deq_T = and(io.deq.ready, io.deq.valid) @[Decoupled.scala 40:37]
    wire do_deq : UInt<1>
    do_deq <= _do_deq_T
    when do_enq : @[Decoupled.scala 231:17]
      infer mport MPORT = ram[enq_ptr_value], clock @[Decoupled.scala 232:8]
      MPORT <= io.enq.bits @[Decoupled.scala 232:24]
      node wrap = eq(enq_ptr_value, UInt<2>("h03")) @[Counter.scala 72:24]
      node _value_T = add(enq_ptr_value, UInt<1>("h01")) @[Counter.scala 76:24]
      node _value_T_1 = tail(_value_T, 1) @[Counter.scala 76:24]
      enq_ptr_value <= _value_T_1 @[Counter.scala 76:15]
      skip @[Decoupled.scala 231:17]
    when do_deq : @[Decoupled.scala 235:17]
      node wrap_1 = eq(deq_ptr_value, UInt<2>("h03")) @[Counter.scala 72:24]
      node _value_T_2 = add(deq_ptr_value, UInt<1>("h01")) @[Counter.scala 76:24]
      node _value_T_3 = tail(_value_T_2, 1) @[Counter.scala 76:24]
      deq_ptr_value <= _value_T_3 @[Counter.scala 76:15]
      skip @[Decoupled.scala 235:17]
    node _T = neq(do_enq, do_deq) @[Decoupled.scala 238:16]
    when _T : @[Decoupled.scala 238:28]
      maybe_full <= do_enq @[Decoupled.scala 239:16]
      skip @[Decoupled.scala 238:28]
    node _io_deq_valid_T = eq(empty, UInt<1>("h00")) @[Decoupled.scala 242:19]
    io.deq.valid <= _io_deq_valid_T @[Decoupled.scala 242:16]
    node _io_enq_ready_T = eq(full, UInt<1>("h00")) @[Decoupled.scala 243:19]
    io.enq.ready <= _io_enq_ready_T @[Decoupled.scala 243:16]
    infer mport io_deq_bits_MPORT = ram[deq_ptr_value], clock @[Decoupled.scala 251:23]
    io.deq.bits <= io_deq_bits_MPORT @[Decoupled.scala 251:17]
    node _ptr_diff_T = sub(enq_ptr_value, deq_ptr_value) @[Decoupled.scala 267:32]
    node ptr_diff = tail(_ptr_diff_T, 1) @[Decoupled.scala 267:32]
    node _io_count_T = and(maybe_full, ptr_match) @[Decoupled.scala 269:32]
    node _io_count_T_1 = mux(_io_count_T, UInt<3>("h04"), UInt<1>("h00")) @[Decoupled.scala 269:20]
    node _io_count_T_2 = or(_io_count_T_1, ptr_diff) @[Decoupled.scala 269:62]
    io.count <= _io_count_T_2 @[Decoupled.scala 269:14]
    
  module AsyncResetQueueTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    reg cDiv_value : UInt<2>, clock with : (reset => (reset, UInt<2>("h00"))) @[Counter.scala 60:40]
    wire cDiv : UInt<1>
    cDiv <= UInt<1>("h00")
    when UInt<1>("h01") : @[Counter.scala 118:17]
      node cDiv_wrap_wrap = eq(cDiv_value, UInt<2>("h03")) @[Counter.scala 72:24]
      node _cDiv_wrap_value_T = add(cDiv_value, UInt<1>("h01")) @[Counter.scala 76:24]
      node _cDiv_wrap_value_T_1 = tail(_cDiv_wrap_value_T, 1) @[Counter.scala 76:24]
      cDiv_value <= _cDiv_wrap_value_T_1 @[Counter.scala 76:15]
      cDiv <= cDiv_wrap_wrap @[Counter.scala 118:24]
      skip @[Counter.scala 118:17]
    node slowClk = asClock(cDiv) @[AsyncResetSpec.scala 94:22]
    reg count : UInt<4>, clock with : (reset => (reset, UInt<4>("h00"))) @[Counter.scala 60:40]
    wire done : UInt<1>
    done <= UInt<1>("h00")
    when UInt<1>("h01") : @[Counter.scala 118:17]
      node wrap_wrap = eq(count, UInt<4>("h0f")) @[Counter.scala 72:24]
      node _wrap_value_T = add(count, UInt<1>("h01")) @[Counter.scala 76:24]
      node _wrap_value_T_1 = tail(_wrap_value_T, 1) @[Counter.scala 76:24]
      count <= _wrap_value_T_1 @[Counter.scala 76:15]
      done <= wrap_wrap @[Counter.scala 118:24]
      skip @[Counter.scala 118:17]
    reg asyncResetNext : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[AsyncResetSpec.scala 98:31]
    asyncResetNext <= UInt<1>("h00") @[AsyncResetSpec.scala 98:31]
    node asyncReset = asAsyncReset(asyncResetNext) @[AsyncResetSpec.scala 99:35]
    inst queue of Queue @[AsyncResetSpec.scala 102:11]
    queue.clock <= slowClk
    queue.reset <= asyncReset
    queue.io.enq.valid <= UInt<1>("h01") @[AsyncResetSpec.scala 104:22]
    queue.io.enq.bits <= count @[AsyncResetSpec.scala 105:21]
    queue.io.deq.ready <= UInt<1>("h00") @[AsyncResetSpec.scala 107:22]
    reg doCheck : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[AsyncResetSpec.scala 109:24]
    doCheck <= UInt<1>("h00") @[AsyncResetSpec.scala 109:24]
    node _T = eq(queue.io.count, UInt<2>("h03")) @[AsyncResetSpec.scala 110:24]
    when _T : @[AsyncResetSpec.scala 110:33]
      asyncResetNext <= UInt<1>("h01") @[AsyncResetSpec.scala 111:20]
      doCheck <= UInt<1>("h01") @[AsyncResetSpec.scala 112:13]
      skip @[AsyncResetSpec.scala 110:33]
    when doCheck : @[AsyncResetSpec.scala 114:18]
      node _T_1 = eq(queue.io.count, UInt<1>("h00")) @[AsyncResetSpec.scala 115:27]
      node _T_2 = bits(reset, 0, 0) @[AsyncResetSpec.scala 115:11]
      node _T_3 = or(_T_1, _T_2) @[AsyncResetSpec.scala 115:11]
      node _T_4 = eq(_T_3, UInt<1>("h00")) @[AsyncResetSpec.scala 115:11]
      when _T_4 : @[AsyncResetSpec.scala 115:11]
        printf(clock, UInt<1>(1), "Assertion failed\n    at AsyncResetSpec.scala:115 assert(queue.io.count === 0.U)\n") @[AsyncResetSpec.scala 115:11]
        stop(clock, UInt<1>(1), 1) @[AsyncResetSpec.scala 115:11]
        skip @[AsyncResetSpec.scala 115:11]
      skip @[AsyncResetSpec.scala 114:18]
    when done : @[AsyncResetSpec.scala 118:15]
      node _T_5 = bits(reset, 0, 0) @[AsyncResetSpec.scala 119:9]
      node _T_6 = eq(_T_5, UInt<1>("h00")) @[AsyncResetSpec.scala 119:9]
      when _T_6 : @[AsyncResetSpec.scala 119:9]
        stop(clock, UInt<1>(1), 0) @[AsyncResetSpec.scala 119:9]
        skip @[AsyncResetSpec.scala 119:9]
      skip @[AsyncResetSpec.scala 118:15]
    
