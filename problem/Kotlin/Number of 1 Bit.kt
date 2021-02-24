class Solution {
    // you need treat n as an unsigned value
    fun hammingWeight(n:Int):Int {
        var x = 0
        var y = n
        while(y != 0){
            x = x.inc()
            y = y.and(y.dec())
        }
        
        return x;
    }
}