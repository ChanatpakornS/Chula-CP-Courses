package preparation

object compliment {
  def compliment (f: Int => Int): Int => Int = {
    def func(x: Int): Int = {
      -1 * f(x)
    }
    func
  }

  def f1(x: Int): Int = {
    x -1000
  }

  def main(agrs: Array[String]): Unit = {
    println(compliment((x => x*x))(-5))
    println(compliment((x => x*x))(3))
    println(compliment((x => -1*x*x*x*x*x*x))(3))
    val c = compliment(f1)
    println(c(3))
    println(c(3000))
  }

}
