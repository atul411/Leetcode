class Solution {
    fun check(first: String, second: String): Boolean {
        first.forEach {
            if (it in second)
                return false
        }
        return true
    }

    fun maxProduct(words: Array<String>): Int {
        var ans = 0
        for (i in words.indices) {
            for (j in i + 1 until words.size) {
                if (check(words[i], words[j]))
                    ans = Math.max(ans, words[i].length * words[j].length)
            }
        }
        return ans
    }
}