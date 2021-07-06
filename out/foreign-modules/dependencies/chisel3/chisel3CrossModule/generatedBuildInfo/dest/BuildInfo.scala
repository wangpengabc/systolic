package chisel3

object BuildInfo {
  def buildInfoPackage = "chisel3"
  def version = "3.5-SNAPSHOT"
  def scalaVersion = "2.12.13"

  val toMap = Map[String, String](
    "buildInfoPackage" -> buildInfoPackage,"version" -> version,"scalaVersion" -> scalaVersion)
}