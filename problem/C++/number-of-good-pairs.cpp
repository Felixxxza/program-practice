class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int l = nums.size();
        int i, j, ans = 0;
        for(i = 0 ; i < l ; ++i)
            for(j = i + 1 ; j < l ; ++j)
                if(nums[i] == nums[j])
                    ++ans;
        return ans;
    }
};  