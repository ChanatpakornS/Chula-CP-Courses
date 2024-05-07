package homework

object Question01 {
  def insertAtPosition(x: Any, pos: Int, l:List[Any]): List[Any] ={
    insert(x, pos, l, 0)
  }

  def insert(x: Any, pos: Int, l:List[Any], level: Int): List[Any] = {
    if (pos == level) x :: l
    else l.head :: insert(x, pos, l.tail, level + 1)
  }

  def main(agrs: Array[String]): Unit = {
    val sampleList = List(1,2,3,4,5,6,7)
    println(insertAtPosition(22,0,sampleList))
    println(insertAtPosition(22,1,sampleList))
    println(insertAtPosition(22,2,sampleList))
    println(insertAtPosition(22,3,sampleList))
    println(insertAtPosition(22,4,sampleList))
    println(insertAtPosition(22,5,sampleList))
    println(insertAtPosition(22,6,sampleList))
    println(insertAtPosition(22,7,sampleList))
    println(insertAtPosition(22,0,List()))
    //println(insertAtPosition(22,8,sampleList))
  }

}
