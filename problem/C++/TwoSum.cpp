#include <map>

class Solution {

public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> conv;
        int j = 0;
        for(auto i : nums){
            if(conv[target - i])
                return {conv[target-i]-1,j};
            else
                conv[i] = ++j;
        }
        return {};
    }
};
