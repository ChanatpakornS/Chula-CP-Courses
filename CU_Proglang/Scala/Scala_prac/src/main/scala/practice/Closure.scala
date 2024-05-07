package practice

object Closure {
  var n = 5
  val add = (x: Int) => x+n

  def main(args: Array[String]) :Unit = {
    println(add(5))
    println(add(10))
    println(add(100))
    var n = 100 //this n cant change the outside var in function
    println(add(5))
  }
}
