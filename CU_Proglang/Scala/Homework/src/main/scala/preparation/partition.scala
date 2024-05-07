package preparation

object partition {
  def partition(l: List[Int], f:Int => Boolean): List[List[Int]] = {
    filter(l, List(), List(), f)
  }

  def f1(x: Int): Boolean = {
    x%2 == 1
  }

  def f2(x: Int): Boolean = {
    x*x > 10
  }

  def filter(l:List[Int], l1: List[Int], l2: List[Int], f: Int => Boolean) : List[List[Int]] = {
    if (l.isEmpty) return List(l1,l2)
    if (f(l.head)) {
      filter(l.tail, l1 ++ List(l.head), l2, f)
    } else {
      filter(l.tail, l1, l2 ++ List(l.head), f)
    }
  }

  def main(agrs: Array[String]): Unit = {
    val l1 = List(1, 2, 3, 4, 5)
    println(partition(l1, f1))
    println(partition(l1, f2))
    println(partition(l1, (x => x == 0)))
    println(partition(l1, (x => x < 6)))
  }
}
