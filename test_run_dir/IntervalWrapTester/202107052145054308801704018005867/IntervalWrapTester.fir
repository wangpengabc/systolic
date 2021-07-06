;chisel3.BuildInfo$@527a8665
circuit IntervalWrapTester : 
  module IntervalWrapTester : 
    input clock : Clock
    input reset : UInt<1>
    output io : {}
    
    wire t1 : Interval[-2, 12].0 @[IntervalSpec.scala 265:16]
    t1 <= asInterval(UInt<2>("h02"), -2, -2, 0) @[IntervalSpec.scala 266:6]
    reg r1 : UInt<3>, clock with : (reset => (reset, UInt<3>("h00"))) @[IntervalSpec.scala 268:19]
    r1 <= UInt<3>("h00") @[IntervalSpec.scala 269:6]
    node _t2_T = asInterval(UInt<1>("h00"), 0, 7, 0) @[IntervalSpec.scala 270:19]
    node t2 = wrap(t1, _t2_T) @[IntervalSpec.scala 270:19]
    node _t3_T = asInterval(UInt<1>("h00"), 0, 7, 0) @[IntervalSpec.scala 271:19]
    node t3 = wrap(t1, _t3_T) @[IntervalSpec.scala 271:19]
    wire in1 : Interval[0, 9].6
    in1 <= asInterval(UInt<1>("h00"), 0, 0, 0)
    wire in2 : Interval[1, 6).4
    in2 <= asInterval(UInt<3>("h02"), 2, 2, 0)
    node in3 = wrap(in1, in2) @[IntervalSpec.scala 284:21]
    wire base : Interval[-4, 6].0 @[IntervalSpec.scala 300:18]
    wire enclosed : Interval[-2, 5].0
    enclosed <= asInterval(UInt<1>("h00"), 0, 0, 0)
    wire enclosing : Interval[-6, 8].0
    enclosing <= asInterval(UInt<1>("h00"), 0, 0, 0)
    wire overlapLeft : Interval[-10, -2].0
    overlapLeft <= asInterval(UInt<3>("h05"), -3, -3, 0)
    wire overlapRight : Interval[-1, 10].0
    overlapRight <= asInterval(UInt<1>("h00"), 0, 0, 0)
    node w1 = wrap(base, enclosed) @[IntervalSpec.scala 306:21]
    node w2 = wrap(base, enclosing) @[IntervalSpec.scala 307:21]
    node w3 = wrap(base, overlapLeft) @[IntervalSpec.scala 308:21]
    node w4 = wrap(base, overlapRight) @[IntervalSpec.scala 309:21]
    node _w7_T = asInterval(UInt<1>("h00"), -2, 5, 0) @[IntervalSpec.scala 310:21]
    node w7 = wrap(base, _w7_T) @[IntervalSpec.scala 310:21]
    base <= asInterval(UInt<4>("h06"), 6, 6, 0) @[IntervalSpec.scala 312:8]
    node _T = eq(w1, asInterval(UInt<2>("h02"), -2, -2, 0)) @[IntervalSpec.scala 314:13]
    node _T_1 = bits(reset, 0, 0) @[IntervalSpec.scala 314:9]
    node _T_2 = or(_T, _T_1) @[IntervalSpec.scala 314:9]
    node _T_3 = eq(_T_2, UInt<1>("h00")) @[IntervalSpec.scala 314:9]
    when _T_3 : @[IntervalSpec.scala 314:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at IntervalSpec.scala:314 assert(w1 === (-2).I)\n") @[IntervalSpec.scala 314:9]
      stop(clock, UInt<1>(1), 1) @[IntervalSpec.scala 314:9]
      skip @[IntervalSpec.scala 314:9]
    node _T_4 = eq(w2, asInterval(UInt<4>("h06"), 6, 6, 0)) @[IntervalSpec.scala 315:13]
    node _T_5 = bits(reset, 0, 0) @[IntervalSpec.scala 315:9]
    node _T_6 = or(_T_4, _T_5) @[IntervalSpec.scala 315:9]
    node _T_7 = eq(_T_6, UInt<1>("h00")) @[IntervalSpec.scala 315:9]
    when _T_7 : @[IntervalSpec.scala 315:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at IntervalSpec.scala:315 assert(w2 === 6.I)\n") @[IntervalSpec.scala 315:9]
      stop(clock, UInt<1>(1), 1) @[IntervalSpec.scala 315:9]
      skip @[IntervalSpec.scala 315:9]
    node _T_8 = eq(w3, asInterval(UInt<3>("h05"), -3, -3, 0)) @[IntervalSpec.scala 316:13]
    node _T_9 = bits(reset, 0, 0) @[IntervalSpec.scala 316:9]
    node _T_10 = or(_T_8, _T_9) @[IntervalSpec.scala 316:9]
    node _T_11 = eq(_T_10, UInt<1>("h00")) @[IntervalSpec.scala 316:9]
    when _T_11 : @[IntervalSpec.scala 316:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at IntervalSpec.scala:316 assert(w3 === (-3).I)\n") @[IntervalSpec.scala 316:9]
      stop(clock, UInt<1>(1), 1) @[IntervalSpec.scala 316:9]
      skip @[IntervalSpec.scala 316:9]
    node _T_12 = eq(w4, asInterval(UInt<4>("h06"), 6, 6, 0)) @[IntervalSpec.scala 317:13]
    node _T_13 = bits(reset, 0, 0) @[IntervalSpec.scala 317:9]
    node _T_14 = or(_T_12, _T_13) @[IntervalSpec.scala 317:9]
    node _T_15 = eq(_T_14, UInt<1>("h00")) @[IntervalSpec.scala 317:9]
    when _T_15 : @[IntervalSpec.scala 317:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at IntervalSpec.scala:317 assert(w4 === 6.I)\n") @[IntervalSpec.scala 317:9]
      stop(clock, UInt<1>(1), 1) @[IntervalSpec.scala 317:9]
      skip @[IntervalSpec.scala 317:9]
    node _T_16 = eq(w7, asInterval(UInt<2>("h02"), -2, -2, 0)) @[IntervalSpec.scala 318:13]
    node _T_17 = bits(reset, 0, 0) @[IntervalSpec.scala 318:9]
    node _T_18 = or(_T_16, _T_17) @[IntervalSpec.scala 318:9]
    node _T_19 = eq(_T_18, UInt<1>("h00")) @[IntervalSpec.scala 318:9]
    when _T_19 : @[IntervalSpec.scala 318:9]
      printf(clock, UInt<1>(1), "Assertion failed\n    at IntervalSpec.scala:318 assert(w7 === (-2).I)\n") @[IntervalSpec.scala 318:9]
      stop(clock, UInt<1>(1), 1) @[IntervalSpec.scala 318:9]
      skip @[IntervalSpec.scala 318:9]
    node _T_20 = bits(reset, 0, 0) @[IntervalSpec.scala 320:7]
    node _T_21 = eq(_T_20, UInt<1>("h00")) @[IntervalSpec.scala 320:7]
    when _T_21 : @[IntervalSpec.scala 320:7]
      stop(clock, UInt<1>(1), 0) @[IntervalSpec.scala 320:7]
      skip @[IntervalSpec.scala 320:7]
    
