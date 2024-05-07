package practice

object PascalTriangle {
  def pascal(x: Int, y: Int): Int = {
    if (y == 0 || y == x) 1
    else {
      pascal(x-1, y-1) + pascal(x-1, y)
    }
  }

  def main(args: Array[String]): Unit = {
    println(pascal(5, 2))
  }
}
