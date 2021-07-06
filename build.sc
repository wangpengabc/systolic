// import Mill dependency
import mill._
import mill.scalalib._
import mill.scalalib.scalafmt.ScalafmtModule
import mill.scalalib.TestModule.Utest
// support BSP
import mill.bsp._

//import coursier.maven.MavenRepository

//object CustomZincWorkerModule extends ZincWorkerModule with CoursierModule {
//  override def repositoriesTask() = T.task { super.repositoriesTask() ++ Seq(
//    MavenRepository("https://oss.sonatype.org/content/repositories/releases")
//  ) }
//}

object systolic extends ScalaModule with ScalafmtModule { m =>
  override def scalaVersion = "2.12.13"
  override def scalacOptions = Seq(
    "-Xsource:2.11",
    "-language:reflectiveCalls",
    "-deprecation",
    "-feature",
    "-Xcheckinit",
    // Enables autoclonetype2 in 3.4.x (on by default in 3.5)
    "-P:chiselplugin:useBundlePlugin"
  )
  override def ivyDeps = Agg(
    ivy"edu.berkeley.cs::chisel3:3.4.3",
  )
  override def scalacPluginIvyDeps = Agg(
    ivy"edu.berkeley.cs:::chisel3-plugin:3.4.3",
    ivy"org.scalamacros:::paradise:2.1.1"
  )
  object test extends Tests with TestModule.ScalaTest{
//    override def zincWorker = CustomZincWorkerModule
    override def ivyDeps = m.ivyDeps() ++ Agg(
//      ivy"com.lihaoyi::ammonite:1.1.0-34-b991be4",
      ivy"org.scalatest::scalatest:3.2.9",
      ivy"com.lihaoyi::utest:0.7.10",
      ivy"edu.berkeley.cs::chiseltest:0.3.3",
//      ivy"edu.berkeley.cs::chiseltest:0.5-SNAPSHOT",
    )

  }
}
