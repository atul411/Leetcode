class Solution {
    fun check(str1: String, str2: String): Boolean {
        str1.forEach {
            if (!str2.contains(it, true))
                return false
        }
        return true
    }

    fun findWords(words: Array<String>): Array<String> {
        val a = arrayOf("qwertyuiop", "asdfghjkl", "zxcvbnm")
        val ans = mutableListOf<String>()
        words.forEach {
            if (check(it, a[0])) {
                ans.add(it)
            } else if (check(it, a[1])) {
                ans.add(it)
            } else if (check(it, a[2])) {
                ans.add(it)
            }
        }
        return ans.toTypedArray()
    }
}
