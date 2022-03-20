// 97.85 98.77
class Solution {
    fun convert(s: String, numRows: Int): String {
        val ans = StringBuilder()
        val n = s.length
        val tmp = if(numRows == 1) 1 else (numRows-1).shl(1)
        for(i in 0 until numRows){
            var k = i + (numRows-i-1).shl(1)
            for(j in i until n step tmp){
                ans.append(s[j])    
                if(k != i && k != tmp && k < n){
                    ans.append(s[k])
                    k += tmp
                }
            }
        }
        return ans.toString()
    }
}