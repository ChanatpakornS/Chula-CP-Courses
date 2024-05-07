package practice

object TailFactorial {
  def factorial(x: Int, acc: Int): Int = {
    if (x == 0) return acc
    return factorial(x-1, x*acc)// remark that acc is call tail
  }

  def main(args: Array[String]): Unit = {
    println(factorial(4,1))
  }

}
