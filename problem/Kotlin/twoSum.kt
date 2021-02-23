class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        val conv = HashMap<Int, Int>()
        nums.forEachIndexed{index, int ->
            conv[int]?.let{return intArrayOf(it, index)}
            conv[target - int] = index
        }
        return intArrayOf()
    }
}