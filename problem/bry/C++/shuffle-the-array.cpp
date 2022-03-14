class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(n<<1);
        for(int i = 0; i < n; ++i){
            ans[(i<<1)] = (nums[i]);
            ans[(i<<1)+1]= (nums[i+n]);
        }
        return ans;
    }
};