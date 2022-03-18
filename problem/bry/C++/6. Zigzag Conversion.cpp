class Solution {
public:
    string convert(string s, int numRows) {
        string ans = "";
        int n = numRows-1;
        bool tmp = false;
        if(n)
            for(int i = 0 ; i < numRows ; ++i){
                tmp = false;
                for(int j = i; j < s.length();){
                    ans+= s[j];
                    j += tmp ? i*2 : ((n-i)*2)?(n-i)*2:n*2;
                    tmp = (i%n)? !tmp : tmp;
                }
            }
        else
            ans = s;
        return ans;
    }
};