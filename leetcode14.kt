import java.lang.StringBuilder

class Solution {
    fun longestCommonPrefix(strs: Array<String>): String {
        var ans = StringBuilder(strs[0])
        strs.forEach {
            var b = StringBuilder()
            for (i in 0 until(Math.min(ans.length, it.length)))
            {
                if (ans[i] == it[i])
                {
                    b.append(it[i])
                }
                else
                    break
            }
            if (b.length==0)
                return b.toString()
            ans = b
            
        }
        return ans.toString()
    }
}
