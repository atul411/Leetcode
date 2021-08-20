class Solution {
    fun maxArea(height: IntArray): Int {
        var left = 0
        var right = height.lastIndex
        var ans = 0
        while (left < right) {
            ans = Math.max(ans, (right - left) * Math.min(height[left], height[right]))
            if (height[right] < height[left])
                right--
            else
                left++
        }
        return ans
    }
}
