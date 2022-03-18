class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        for( int i = 0; i <= s.size()-1; i++)
        {
            if( s[i] == 'I')
            {
                ans = ans + 1;
                if( s[i+1] == 'V')
                {
                    ans = ans + 5 - 2;
                    i = i + 1;
                }
                else if( s[i+1] == 'X')
                {
                    ans = ans + 10 - 2;
                    i = i + 1;
                }
                else
                    ans = ans;
            }
            else if( s[i] == 'V')
                ans = ans + 5;
            else if( s[i] == 'X')
            {
                ans = ans + 10;
                if( s[i+1] == 'L')
                {
                    ans = ans + 50 - 20;
                    i = i + 1;
                }
                else if( s[i+1] == 'C')
                {
                    ans = ans + 100 - 20;
                    i = i + 1;
                }
                else
                    ans = ans;
            }
            else if( s[i] == 'L')
                ans = ans + 50;
            else if( s[i] == 'C')
            {
                ans = ans + 100;
                if( s[i+1] == 'D')
                {
                    ans = ans + 500 - 200;
                    i = i + 1;
                }
                else if( s[i+1] == 'M')
                {
                    ans = ans + 1000 - 200;
                    i = i + 1;
                }
                else
                    ans = ans;
            }
            else if( s[i] == 'D')
                ans = ans + 500;
            else if( s[i] == 'M')
                ans = ans + 1000;
            else
                ans = ans;
        }
        return ans;
    }
};
