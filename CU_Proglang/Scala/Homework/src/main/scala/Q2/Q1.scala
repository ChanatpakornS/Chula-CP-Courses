package Q2

object Q1 {
  def identifyMin(x:Int)(l:List[Int => Int]):Int => Int ={
    identify(x, l, l.head)
  }

  def identify(i: Int, value: List[Int => Int], minF: Int => Int): Int => Int = {
    if(value.isEmpty){
      minF
    } else {
      if (minF(i) > value.head(i)) {
        identify(i, value.tail, value.head)
      } else {
        identify(i, value.tail, minF)
      }
    }
  }

  def f1(a:Int):Int = a*a + 4*a - 20
  def f2(a:Int):Int = a*a + 2*a -1
  def f3(a:Int):Int = a*a + a +  10

  def test01(): Unit = {
    var score = 0;
    val l:List[Int => Int] = List(f1,f2,f3)
    if(identifyMin(3)(l)(3) == 1) score += 2;
    if(identifyMin(5)(l)(5) == 25) score += 2;
    if(identifyMin(8)(l)(8) == 76) score += 2;
    if(identifyMin(10)(l)(10) == 119) score += 2;
    if(identifyMin(12)(l)(12) == 166) score += 2;

    println("Score = " + score)

  }

  def main(args: Array[String]): Unit = {
    test01();
  }


}
