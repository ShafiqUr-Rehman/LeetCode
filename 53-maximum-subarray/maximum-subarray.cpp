class Solution {
public:
    int maxSubArray(const vector<int>& nums) { // sliding Window
        int maxSum = nums[0];
        int currSum = nums[0];

        for (size_t i = 1; i < nums.size(); ++i) {
            currSum = max(nums[i], currSum + nums[i]);
            maxSum = max(maxSum, currSum);
        };
        return maxSum;
    }
};