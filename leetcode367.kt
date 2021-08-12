class Solution {
    fun isPerfectSquare(num: Int): Boolean {
        var ans: Long = 0
        while (ans * ans <= num.toLong())
            ans++;
        return (ans - 1)*(ans-1)==num.toLong()
    }
}
