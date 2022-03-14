// The fastest
class Solution {

public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> conv;
        int j = 0;
        for(auto i : nums){
            if(conv[target - i])
                return {conv[target-i]-1, j};
            else
                conv[i] = ++j;
        }
        return {};
    }
};

// If need smallest size just use tow for loop to look nums vector