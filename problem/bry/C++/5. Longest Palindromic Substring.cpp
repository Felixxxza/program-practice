class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        pair <int, int> ans= make_pair(0,0);
        for(int i = 0 ; i < n ; ++i){
            int l, r;
            l = r = i;
            while(l-1 >= 0 && s[l-1] == s[i]) --l;
            while(r+1 < n && s[r+1] == s[i]) ++r;
            while(l-1 >= 0 && r+1 < n && s[l-1] == s[r+1]){
                --l;
                ++r;
            }
            ans =  (r-l+1) > ans.second ? make_pair(l, mx) : ans;
        }
        return s.substr(lm, mx);
    }
};