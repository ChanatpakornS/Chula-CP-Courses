package FINAL_PRAC

object Q1 {
  def swapPair(l: List[Int]): List[Int] = {
    val x = swap(l, List())
    println(x)
    x
  }

  def swap(value: List[Int], value1: List[Int]): List[Int] = {
    if(value.isEmpty) {
      value1
    } else if (value.length > 1) {
      swap(value.tail.tail, value1 ++ List(value.tail.head, value.head))
    } else {
      swap(value.tail, value1 ++ List(value.head))
    }
  }

  def main(args: Array[String]): Unit = {
    val list1 = List()
    val list2 = List(22)
    val list3 = List(1, 2, 3)
    val list4 = List(1, 2, 3, 4)
    val list5 = List(1, 2, 3, 4, 5)
    val list6 = List(1, 2, 3, 4, 5, 6)
    println(swapPair(list1) == List())
    println(swapPair(list2) == List(22))
    println(swapPair(list3) == List(2, 1, 3))
    println(swapPair(list4) == List(2, 1, 4, 3))
    println(swapPair(list5) == List(2, 1, 4, 3, 5))
    println(swapPair(list6) == List(2, 1, 4, 3, 6, 5))
  }
}
