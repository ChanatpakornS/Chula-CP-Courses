package Q2

object Q2 {
 
  def difference(l1: List[Any], l2: List[Any]): List[Any] = {
    val x = checkDiff(l1, l2, List())
    println(x)
    x
  }

  def checkDiff(value: List[Any], value1: List[Any], value2: List[Any]): List[Any] = {
    if(value.isEmpty) {
      value2
    } else {
      val x = loopCheck(value.head, value1)
      if(x != null) checkDiff(value.tail, value1, value2 ++ List(x))
      else checkDiff(value.tail, value1, value2)
    }
  }

  def loopCheck(value: Any, value1: List[Any]): Any = {
    if (value1.isEmpty) {
      value
    } else if (value == value1.head) {
      null
    } else {
      loopCheck(value, value1.tail)
    }
  }

  def test01(): Unit = {
    var score = 0;
    val l1 = List(6, 2, 4, 3, 1, 7)
    val l2 = List(10, 2, 6, 3, 8, 4)
    val l3 = List("a", "b", "c")
    val l4 = List("c", "d", "b", "e")

    if (difference(List(), l2) == List()) score += 1;
    if (difference(l1, List()) == List(6, 2, 4, 3, 1, 7)) score += 1;
    if (difference(l1, l2) == List(1, 7)) score += 2
    if (difference(l3, l4) == List("a")) score += 2
    if (difference(l2, l1) == List(10, 8)) score += 2
    if (difference(l4, l3) == List("d", "e")) score += 2

    println("Score = " + score)

  }

  def main(args: Array[String]): Unit = {
    test01();
  }
}
