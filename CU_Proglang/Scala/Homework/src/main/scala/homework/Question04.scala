package homework

object Question04 {

  def palindrome(l :List[Any]): Boolean ={
    l == reverse(l)
  }

  def reverse(l: List[Any]): List[Any] = {
    if (l.isEmpty) List()
    else reverse(l.tail) ++ List(l.head)
  }

  def main(args: Array[String]): Unit = {
    println(List("w", "K") == List("K", "w")) //false
    println(palindrome("WORD".toList)) // false
    println(palindrome("DOOD".toList)) // true
    println(palindrome("LICK".toList)) // false
    println(palindrome("BALLSSLLAB".toList)) // true
    println(palindrome("BALLsSLLAB".toList)) // false

  }
}
