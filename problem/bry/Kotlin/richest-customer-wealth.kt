class Solution {
    fun maximumWealth(accounts: Array<IntArray>): Int {
        return accounts.map { it.sum() }.max() ?:0
    }
}

/*
class Solution {
    fun maximumWealth(accounts: Array<IntArray>) = Int.run{
        var big = 0;
        accounts.forEach{it ->
            var sum = 0;
            big = Math.max(big, it.sum())
        }
        big
    }
}
 */