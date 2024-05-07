package Q3

object Q2 {
  var score = 0;
  
  def replaceData(l:List[Int], pos:Int, data:Int):List[Int] = {
    rep(l, pos, data, List(), 0)
  }

  def rep(l: List[Int], pos: Int, data: Int, nl: List[Int], count: Int): List[Int] = {
    if(count == pos) nl ++ List(data) ++ l.tail
    else {
      val x = rep(l.tail, pos, data, nl ++ List(l.head), count + 1)
      println(x)
      x
    }
  }

  def updateFreq(l: List[Int], freqList:List[Int]):List[Int] ={
    if(l.isEmpty) freqList
    else {
      val x = replaceData(freqList, l.head, freqList(l.head) + 1)
      println(x)
      updateFreq(l.tail, x)
    }
  }


  def testReplace01(): Unit = {
    val l1 = List(6)
    val result = replaceData(l1,0,2)
    if(result.head == 2) score = score +1;
    println("===================================")
  }

  def testReplace02(): Unit = {
    val l1 = List(1,2,3,4,5)
    var result = replaceData(l1,1,9)
    result = replaceData(result,3,11)
    result = replaceData(result,4,15)

    if(result(0) == 1 && result(1) == 9 && result(2) ==3) score = score +1;
    if(result(3) == 11 && result(4) == 15 ) score = score +1;
    println("===================================")
  }

  def testUpdateFreq01():Unit ={
    val freqList = List(0,0,0,0,0)
    var l = List()
    if(updateFreq(l,freqList) == freqList) score = score +1
    println("===================================")
  }

  def testUpdateFreq02():Unit ={
    val freqList = List(0,0,0,0,0)
    var l = List(4,3,2,3,4,0,3)
    var result = updateFreq(l,freqList)
    println(result)
    if(result(0) == 1) score = score +1;
    if(result(1) == 0) score = score +1;
    if(result(2) == 1) score = score +1;
    if(result(3) == 3) score = score +1;
    if(result(4) == 2) score = score +1;
    println("===================================")
  }

  def testUpdateFreq03():Unit ={
    val freqList = List(1,0,0,2)
    var l = List(3,3,0,3)
    var result = updateFreq(l,freqList)
    if(result(0) == 2 && result(3) == 5 ) score = score +1;
    println("===================================")
  }

  def main(args: Array[String]): Unit = {
    testReplace01();
    testReplace02();
    testUpdateFreq01();
    testUpdateFreq02();
    testUpdateFreq03();

     print(score)
  }
}
