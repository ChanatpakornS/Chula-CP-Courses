package practice

object ClosureSideEffect {
  var n = 5
  val add = (x: Int) => {
    n = x + n //modify n this cant be output just assigned the value
    n
  }

  def main(args: Array[String]): Unit = {
    println(add(5))
    n = 100
    println(add(5))
  }
}
