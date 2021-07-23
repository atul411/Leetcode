class Solution {
    fun myPow(x: Double, n: Int): Double {
        if (n >= 0) {
            if (n == 0)
                return 1.toDouble()
            if (n == 1)
                return x
            if (n % 2 == 0) {

                var a = myPow(x, n / 2)
                return a*a
            }
            else
                return myPow(x, n - 1) * x
        }
        if (n== Int.MIN_VALUE)
            return (1/x)*myPow(1/x,-n-1)
        return myPow(1/x,-n)
    }
}