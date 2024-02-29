package homework

object Question06 {
  
  def myFilter(f:Int => Boolean) (list:List[Int]) :List[Int] = {
    def filter(l: List[Int], result:List[Int]): List[Int] = {
      if (l.isEmpty) result
      else if (f(l.head)) filter(l.tail, result ++ List(l.head))
      else filter(l.tail, result)
    }
    filter(list, List())
  }

  def isLessThan3(x: Int): Boolean = x < 3

  def main(agrs: Array[String]): Unit = {
    println(myFilter(x => x%2==0)(List(1,2,3,4,5)))
    println(myFilter(isLessThan3)(List(1,2,3,4,5)))
  }

}
