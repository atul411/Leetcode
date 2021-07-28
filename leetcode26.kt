class Solution {
    fun removeDuplicates(nums: IntArray): Int {
        var ans = if (nums.isEmpty()) 0 else 1
        for (i in 1 until nums.size) {
            if (nums[i] != nums[i - 1]) {
                nums[i] = nums[ans].also { nums[ans] = nums[i] }
                ans++
            }

        }
        return ans
    }
}

