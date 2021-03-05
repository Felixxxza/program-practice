class Solution {
    fun numIdenticalPairs(nums: IntArray): Int {
        var ans = 0
        for(i in 0..nums.size-1){
            for(j in i+1..num.size-1){
                if(nums[i].equals(nums[j]))
                    ans = ans + 1
            }
        }
        return ans
    }
}