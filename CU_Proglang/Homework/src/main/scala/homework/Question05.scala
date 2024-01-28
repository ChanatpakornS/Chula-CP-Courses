package homework

object Question05 {

  def mergesort(l: List[Int]):List[Int] = {
    sort(l, List())
  }

  def sort(l: List[Int], sl: List[Int]): List[Int] = {
    if (sl.isEmpty) sort(l.tail, List(l.head) ++ sl)
    else List()
  }

}
