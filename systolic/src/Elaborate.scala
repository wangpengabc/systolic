package systolic

import chisel3.stage.ChiselStage

object Elaborate extends App{
  (new ChiselStage).execute(args, Seq(chisel3.stage.ChiselGeneratorAnnotation(()=> new WSSysIn_Kernel(8, 8, 16, 128, 8, 16))))
}
