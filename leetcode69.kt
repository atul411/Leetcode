class Solution {
    fun mySqrt(x: Int): Int {
        var ans:Long = 0
        while (ans*ans<=x.toLong())
            ans++
        return (ans-1).toInt()
    }
}