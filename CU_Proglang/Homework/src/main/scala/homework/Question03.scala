package homework

object Question03 {
  def subList(l1: List[Any], l2:List[Any]): Boolean ={
    if (l1.isEmpty) true
    else if (l2.isEmpty) false
    else if (memberChecker(l1.head, l2) && !l1.isEmpty) subList(l1.tail, l2)
    else false
  }

  def memberChecker(x: Any, list:List[Any]): Boolean = {
    if (list.isEmpty) false
    else if (x == list.head) true
    else memberChecker(x, list.tail)
  }

  def main(args: Array[String]): Unit = {
    println(subList(List(1,1,8), List(1,1,1,1,2,3,4,5,5,5,6,7))) // false
    println(subList(List(1), List(99,19))) // false
    println(subList(List(), List(99,19))) // true
    println(subList(List(8), List(10))) // false
    println(subList(List("Word"), List("Word"))) //true
    println(subList(List("Wr"), List("We")))// false
    println(subList(List("Wr"), List()))// false
  }

}
