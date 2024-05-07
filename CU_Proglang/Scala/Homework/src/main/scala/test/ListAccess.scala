package test

object ListAccess {
  val myList: List[Int] = List()
  val listNum = List(1,2,3,4,5)
  val listStr: List[String] = List("John", "jeff", "liso")
  val listStr2 = "WILL" :: listStr

//List is immutable it will not compile
  //NULL == Nil

  def main(args: Array[String]): Unit = {
    println(listStr2) // return in List format
    println(listStr2 ++ listStr) // return in List format
    println(listNum.filter((x) => x%5 == 0))
    println(List.fill(10)(1))
  }
}
