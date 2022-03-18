class Solution {
    fun reverse(x: Int): Int = try{if(x < 0) x.times(-1).reversed().times(-1) else x.reversed()}catch(e: Exception){0}
}