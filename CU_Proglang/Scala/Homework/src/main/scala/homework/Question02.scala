package homework

object Question02 {
  def insertInOrder(x: Int, l:List[Int]): List[Int] = {
    if (l.isEmpty) l ++ List(x)
    else  if (l.head >= x && l.nonEmpty) x :: l
    else l.head :: insertInOrder(x, l.tail)
  }

  def main(args: Array[String]): Unit = {
    println(insertInOrder(1, List(2, 5, 8, 12, 20)))
    println(insertInOrder(3, List(2, 5, 8, 12, 20)))
    println(insertInOrder(7, List(2, 5, 8, 12, 20)))
    println(insertInOrder(113, List(2, 5, 8, 12, 20)))
  }
}
