class Solution {
    fun kidsWithCandies(candies: IntArray, extraCandies: Int): BooleanArray {
        val lowInt:Int = (candies.max()?:0) - extraCandies
        val arRet = mutableListOf<Boolean>()
        for(num in candies)
            if(num >= lowInt)
                arRet.add(true)
            else
                arRet.add(false)
        return arRet.toBooleanArray()
    }
}