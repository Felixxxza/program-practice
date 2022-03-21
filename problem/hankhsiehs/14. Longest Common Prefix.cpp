class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        char buffer;
        string ans;
        char temp;    
        int search;
        for( int behind = 0; behind < strs[0].size(); behind++)
        {
            for( int front = 0; front < strs.size(); front++)
            {
                if( strs[front][behind] == strs[0][behind])
                {
                    temp = strs[0][behind];
                }
                else
                {
                    temp = '0';
                    front = strs.size();
                }
            }
            ans.push_back(temp);
        }
       /* for( int m = 0; m <= buffer.size()-1; m++)
        {
            ans[m] = buffer[m];
            cout << ans[m];
        }*/
        search = ans.find('0', 0);
        //cout << search;
        ans.assign(ans, 0, search);
        return ans;
    }
};
