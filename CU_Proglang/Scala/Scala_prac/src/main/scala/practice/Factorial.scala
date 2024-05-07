package practice

object Factorial {
  def factorial(x: Int): Int = {
    if (x==0) 1
    else x * factorial(x-1)
    //should have only 1 return statement
  }

  def main(args: Array[String]): Unit = {
    println(factorial(5))
  }

}
