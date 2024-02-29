package homework

object Question07 {
  
  def myMap(f:Int => Int) (list:List[Int]) :List[Int] = {
    if (!list.isEmpty) List(f(list.head)) ++ myMap(f)(list.tail)
    else List()
  }

  def square(x: Int): Int = x * x

  def main(agrs: Array[String]): Unit = {
    println(myMap(x => x*2)(List(1,2,3,4,5)))
    println(myMap(square)(List(1,2,3,4,5)))
  }


}
