class Solution {
    fun sortedSquares(nums: IntArray): IntArray
    {
        var ans = nums.map { it*it }.toIntArray()
        ans.sort()
        return ans
    }
}