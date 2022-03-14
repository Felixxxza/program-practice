class Solution {
    fun shuffle(nums: IntArray, n: Int) = IntArray(n*2).apply {
        (0 until n).forEach {
            set(it.shl(1), nums.get(it))
            set(it.shl(1)+1, nums.get(it + n))
        }
    }
}

//Special save for Kotlin