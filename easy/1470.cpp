class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        std::vector<int> merged;
        for(auto i = 0; i < nums.size() / 2; ++i) {
            merged.push_back(nums[i]);
            merged.push_back(nums[i + n]);
        }
        return merged;
    }
};
