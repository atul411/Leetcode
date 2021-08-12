class Solution {
    fun isSquare(a: Int): Boolean {
        var b = Math.sqrt(a.toDouble()).toInt()
        return b * b == a
    }
    fun judgeSquareSum(c: Int): Boolean {
        var a = Math.sqrt(c.toDouble()).toInt()
        for (i in 0 until a + 1) {
            if (isSquare(c - i * i))
                return true
        }
        return false
    }
}
