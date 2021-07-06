circuit IntervalSpec_Anon :
  module IntervalSpec_Anon :
    input clock : Clock
    input reset : UInt<1>
    output io_out : SInt<4>

    node base = asSInt(UInt<4>("h6")) @[IntervalSpec.scala 726:30 727:20]
    node w5 = mux(lt(base, SInt<4>("h7")), SInt<4>("h7"), base) @[IntervalSpec.scala 730:{33,33}]
    node disjointLeft = asSInt(UInt<5>("h8"))
    io_out <= w5 @[IntervalSpec.scala 731:22]
