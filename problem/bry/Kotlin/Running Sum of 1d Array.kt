class Solution {
    fun runningSum(nums: IntArray): IntArray {
        return run{
            var pre = nums.size
            for(i in 1 until pre)
                nums[i] += nums[i-1]
            nums
        }
    }
}