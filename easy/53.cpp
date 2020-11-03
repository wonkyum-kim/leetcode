class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        std::vector<int> dp(nums.size());
        if(nums.size() == 1) {
            return nums[0];
        }
        dp[0] = nums[0];
        int max = dp[0];
        for(auto i = 1; i < nums.size(); ++i) {
            dp[i] = std::max(0, dp[i - 1]) + nums[i];
            max = std::max(max, dp[i]);
        }
        return max;
    }
};
