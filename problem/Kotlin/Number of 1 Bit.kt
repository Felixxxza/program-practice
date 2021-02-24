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

/*
class Solution {
    // you need treat n as an unsigned value
    fun hammingWeight(n:Int):Int = when {
        n < 0 -> 1 + hammingWeight( n xor (1 shl 31))
        n == 0 -> 0
        n % 2 == 1 -> 1 + hammingWeight(n / 2)
        else -> hammingWeight(n / 2)
    }
}
the best and hard to understand code
 */