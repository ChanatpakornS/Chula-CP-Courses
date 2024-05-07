package practice
import java.util.Date //we can use java lib in Scala

object FunctionPartiallyAppliedApplication {
  def dateMessage(date: Date, s: String): Unit = {
    println(date + ", " + s)
  }

  def main(args: Array[String]): Unit = {
    var date = new Date //using var(declared outside) in function called "closure" that it's nested.
    var newMessage = dateMessage(date, _: String) //partial applied dateMessage
    for (i: Int <- 0.to(5)) {
      Thread.sleep(300)
      date = new Date
      newMessage("message " + i)
    }
  }
}
