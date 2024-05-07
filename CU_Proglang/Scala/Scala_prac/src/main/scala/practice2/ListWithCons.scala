package practice2

object ListWithCons {
  val listStr: List[String] = List("Hum", "Dum", "Nig")
  val listStr23: List[String] = List("Sd", "W", "sdcew")
  val listStr2 = "LICK" :: "Will" :: listStr // adding to the front
  val out = listStr2 ++ listStr
  def main(args: Array[String]) : Unit = {
    println(listStr2 ++ listStr23)
  }
}
