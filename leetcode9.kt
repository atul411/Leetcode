class Solution {
    fun isPalindrome(x: Int): Boolean {
        var a = x.toString()
        var (start, end) = arrayOf(0, a.length - 1)
        while (start < end) if (a[start++] != a[end--]) return false
        return true
    }
}