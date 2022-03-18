class Solution {
    fun reverse(x: Int): Int {
        var s: String = x.toString()
        val ans  = try{if(x < 0) s.subSequence(1, s.length).reversed().toString().toInt().times(-1) else s.reversed().toInt() }catch(e: Exception){0}
        return ans
    }
}