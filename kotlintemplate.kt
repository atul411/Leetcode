typealias int = Int
typealias double = Double
typealias long = Long
typealias string = String

/**
 * returns current time in millisecond
 */
fun now():long  = System.currentTimeMillis()
/**
 * A function to convert string into integer
 */
fun int(a: String) = a.toInt()
/**
 * A function to print new line
 */
fun nl() = println()
/**
 * A function to take line input
 */
fun read() = readLine()!!
/**
 * A function to read list of char input
 */
fun readlist() = read().split(' ')
/**
 * A function to read integer LIST
 */
fun readIntList() = read().split(' ').map(::int)
/**
 * A function to convert char into integer
 */
fun int(a: Char) = a - '0'
/**
 * A function to declare a new array of size n and initial value x
 */
fun array1d(n: Int, x: Int): Array<Int> = Array(n) { x }
/**
 * A function to declare a new 2-D array of size n,m and initial value x
 */
fun array2d(n: Int, m: Int, x: Int): Array<Array<Int>> = Array(n) { Array(m) { -1 } }
/**
 * A function to declare a new mutable list of initial size n and initial value x
 */
fun mutablelist1d(n: Int, x: Int) = MutableList(n) { x }
/**
 * A function to declare a new 2-D mutable list of initial size n,m and initial value x
 */
fun mutablelist2d(n: Int, m: Int, x: Int) = MutableList(n) { mutablelist1d(m, x) }

fun main() {
   val start = now()
    //start your code from here




    val end = now()
    print(end-start)
}