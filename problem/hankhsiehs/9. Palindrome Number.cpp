class Solution {
public:
    bool isPalindrome(int x) {
        int ans;
        stringstream ss;
        ss << x;
        string convert_str;
        string reverse;
        ss >> convert_str;
        //cout << convert_str << endl;
        for( int i = convert_str.size()-1; i >= 0; i--)
        {
            reverse.append(convert_str, i, 1);
        }
        //cout << reverse;
        if( convert_str == reverse)
        {
            ans = 1;
        }
        else
            ans = 0;
        return ans;
    }
};
