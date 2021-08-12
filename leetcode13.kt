class Solution {
    fun romanToInt(s: String): Int {
        var map = HashMap<Char, Int>()
        map['I'] = 1
        map['V'] = 5
        map['X'] = 10
        map['L'] = 50
        map['C'] = 100
        map['D'] = 500
        map['M'] = 1000
        var number = 0
        var last = 1000
        s.forEach {
            val value = map[it]!!
            if (value>last) number -= last*2
            number += value
            last = value
        }
        return number
    }
}
