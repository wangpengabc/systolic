circuit Top :
  module Sub :
    input clock : Clock
    input reset : UInt<1>
    input io_a : UInt<1>

    skip

  module _2_Anon :
    input clock : Clock
    input reset : UInt<1>
    input io_a : UInt<1>

    wire sub_clock : Clock
    wire sub_reset : UInt<1>
    wire sub_io_a : UInt<1>
    sub_clock <= clock
    sub_reset <= reset
    sub_io_a <= io_a @[InlineSpec.scala 25:14]

  module Top :
    input clock : Clock
    input reset : UInt<1>
    input io_a : UInt<1>

    inst x of _2_Anon @[InlineSpec.scala 69:21]
    x.clock <= clock
    x.reset <= reset
    x.io_a <= io_a @[InlineSpec.scala 70:14]
