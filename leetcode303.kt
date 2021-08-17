class NumArray(var nums: IntArray) {
    fun sumRange(left: Int, right: Int): Int {
        var ans = 0
        for (i in left..right)
            ans += nums[i]
        return ans
    }
}