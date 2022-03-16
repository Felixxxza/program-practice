class Solution {
    fun longestPalindrome(s: String): String {
        var ans = Triple(0, 0, 0)
        val n = s.length
        for (i in 0 until n){
            var (r, l) = Pair(i, i)
            while(r+1 < n && s[r+1] == s[i]) ++r;
            while(l-1 >= 0 && s[l-1] == s[i]) --l;
            while(r+1 < n && l-1 >= 0 && s[r+1] == s[l-1]){
                ++r;
                --l;
            }
            ans = if (r-l+1 > ans.third) Triple(l, r, r-l+1) else ans
        }
        return s.subSequence(ans.first, ans.second+1).toString()
    }
}