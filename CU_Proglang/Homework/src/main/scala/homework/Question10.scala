package homework

object Question10 {
  def app(f1: (Int,Int) => Int, f2: (Int,Int) => Int, list:List[Int], alt: Boolean, acc: Int): Int = {
    if (list.isEmpty) return acc
    if (alt) app(f1,f2, list.tail, !alt, f1(list.head, acc))
    else app(f1,f2, list.tail, !alt, f2(list.head, acc))
  }

  def alternate(f1: (Int,Int) => Int, f2: (Int,Int) => Int, list:List[Int]):Int ={
    if (list.isEmpty) 0
    else if (list.length == 1) list.head
    else app(f1,f2,list.tail,true,list.head)
  }

  def plus(x: Int , y: Int): Int = x + y
  def minus(x: Int , y: Int): Int = x - y

  def main(agrs: Array[String]): Unit = {
    println(alternate(plus, minus, List()))
    println(alternate(plus, minus, List(55)))
    println(alternate(plus, minus, List(1,2)))
    println(alternate(plus, minus, List(1,2,3)))
    println(alternate(plus, minus, List(1,2,3,4)))
  }


}
