
import kotlin.math.absoluteValue
class Solution {
    fun divide(dividend: Int, divisor: Int): Int {
        if (dividend == Int.MIN_VALUE && divisor == -1) return Int.MAX_VALUE
        val sign = if (dividend >= 0) divisor < 0 else divisor >= 0
        var div = dividend.absoluteValue.toLong()
        var acc = 0.toLong()
        val dvr = divisor.absoluteValue.toLong()

        repeat(32) {
            val divMsb = div and (1L shl 31) != 0L
            div = div shl 1
            acc = acc shl 1
            acc = if (divMsb) acc or 1 else acc and (1.inv())
            acc -= dvr
            val accMsb = acc and (1L shl 31) != 0L
            div = if (accMsb) div and (1.inv()) else div or 1
            if (accMsb) acc += dvr
        }
        return div.toInt() * if (sign) -1 else 1
    }
}
