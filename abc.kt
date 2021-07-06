import jdk.jshell.execution.Util
import org.w3c.dom.ranges.Range

//1qaz0plm
abstract class a {
    var a = 12
    open fun abc()
    {
        print("abc")
    }
}
class b:a(){
    var b = 12
    var c = b.shr(12)


    fun bc()
    {
        print("bc")
    }
}
fun main(args: Array<String>){
    var a = mutableListOf<Int>()
    a.addAll(Array(10){-1})
    for (i in 0 until(10))
        println("$i ${a[i]}")
}



