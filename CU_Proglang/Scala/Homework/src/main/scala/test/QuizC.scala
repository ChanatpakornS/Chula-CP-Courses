package test

object QuizC {
  def compliment(f: Int => Int) : Int => Int = {
    def func (x : Int) : Int = {
      -1 * f(x)
    }
    func
  }

  def f1(x1: Int):Int = {
    x1 - 1000
  }

  def main(args: Array[String]): Unit = {
    //skill issues using naive approach
    println(compliment((x => x*x))(-5))
    println(compliment((x => x*x))(3))
    println(compliment((x => -1*x*x))(-5))
    val c = compliment(f1)
    println(c(3))
    println(c(3000))
  }
}
