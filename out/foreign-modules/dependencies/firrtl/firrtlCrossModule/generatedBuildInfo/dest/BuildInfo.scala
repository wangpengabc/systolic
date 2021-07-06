package firrtl

object BuildInfo {
  def buildInfoPackage = "firrtl"
  def version = "1.5-SNAPSHOT"
  def scalaVersion = "2.12.13"

  val toMap = Map[String, String](
    "buildInfoPackage" -> buildInfoPackage,"version" -> version,"scalaVersion" -> scalaVersion)
}