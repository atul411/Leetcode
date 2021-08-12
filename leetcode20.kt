import java.util.*

class Solution {
    fun isValid(s: String): Boolean {
        var stack = Stack<Char>()
        s.forEach {
            if (it in arrayOf('(', '{', '[')) {
                stack.push(it)
            } else {
                if (stack.empty())
                    return false
                else if (it == ')' && stack.peek() in arrayOf('{', '['))
                    return false
                else if (it == '}' && stack.peek() in arrayOf('(', '['))
                    return false
                else if (it == ']' && stack.peek() in arrayOf('{', '('))
                    return false
                stack.pop()
            }

        }
        return stack.size == 0
    }
}

