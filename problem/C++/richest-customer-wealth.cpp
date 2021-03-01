class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int big = 0;
        int tmp = 0;
        for(auto i : accounts){
            tmp = 0;
            for(auto j : i)
                tmp += j;
            big = (big < tmp)? tmp: big;
        }   
        return big;
    }
};