class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int val = *max_element(candies.begin(), candies.end()) - extraCandies;
        
        for(auto i : candies)
            if(i >= val)
                ans.push_back(true);
            else
                ans.push_back(false);
        return ans;
    }
};