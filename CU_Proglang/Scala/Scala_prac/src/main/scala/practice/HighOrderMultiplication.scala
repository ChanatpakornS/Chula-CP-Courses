package practice

object HighOrderMultiplication {
  def calculate(x: Double, y:Double, myF: (Double, Double) => Double): Double = {
    myF(x, y)
  }

  def mul(x: Double, y:Double): Double = x*y

  def main(args: Array[String]): Unit = {
    println(calculate(5, 5, (a,b) => a + b))
    println(calculate(5, 5, mul))
    println(calculate(5, 5, _+_))
    println(calculate(10, 5, (a, b) => a min b))
    println(calculate(10, 5, (a, b) => a max b))
    println(calculate(10, 5, _/_))

  }
}
