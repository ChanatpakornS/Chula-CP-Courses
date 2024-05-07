package practice2

object ListExample {
  val myList: List[Int] = List()
  val listNum  = List(1,2,3,4,5)
  val listStr: List[String] = List("John", "loe", "Adam")

  val listComplex: List[List[List[Int]]] = List(List(List()))

  def main(args: Array[String]): Unit = {
    println(listStr(0))
    println(listStr(1))
    println(listStr(2))
  }
}
