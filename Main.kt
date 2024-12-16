/**
 * Kotlin sol.
 */

fun testCase() {
    val n = readln().toInt()
    val list = readln().split(' ').map { it.toInt() }
    val leftToRight = Array(n) { 0 }
    val rightToLeft = Array(n) { 0 }
    leftToRight[1] = 1
    for (i in 1..<n - 1) {
        if (list[i + 1] - list[i] < list[i] - list[i - 1]) {
            leftToRight[i + 1] = leftToRight[i] + 1
        } else {
            leftToRight[i + 1] = leftToRight[i] + list[i + 1] - list[i]
        }
    }
    rightToLeft[n - 2] = 1
    for (i in n - 2 downTo 1) {
        if (list[i] - list[i - 1] < list[i + 1] - list[i]) {
            rightToLeft[i - 1] = rightToLeft[i] + 1
        } else {
            rightToLeft[i - 1] = rightToLeft[i] + list[i] - list[i - 1]
        }
    }
    val m = readln().toInt()
    repeat(m) {
        val (first, second) = readln().split(' ').map { it.toInt() }
        if (first < second) {
            println(leftToRight[second - 1] - leftToRight[first - 1])
        } else {
            println(rightToLeft[second - 1] - rightToLeft[first - 1])
        }
    }
}


fun main() {
    val t = readln().toInt()
    repeat(t) {
        testCase()
    }
}


