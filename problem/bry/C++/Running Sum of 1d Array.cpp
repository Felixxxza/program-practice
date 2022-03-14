class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int num = nums.size();
        for(int i = 1; i < num; ++i)
            nums[i] += nums[i-1];
        return nums;
    }
};