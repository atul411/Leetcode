import kotlin.math.abs

class Solution {
    fun maxArea(height: IntArray): Int {
        var (left, right,ans) = listOf(0, height.size-1,0)
        while (left != right){
            ans = maxOf(ans, (right-left)* minOf(height[left], height[right]))
            if (height[right]<height[left])
                right--
            else
                left++
        }
        return ans
    }
}