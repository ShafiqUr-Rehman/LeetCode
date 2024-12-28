class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n, sum;
        n = nums.size();
        vector<int> result(n);
        for (int i = 0; i < n; i++) {
            sum = 0;
            for (int j = 0; j <= i; j++) {
                sum += nums[j];
            };
            result[i] = sum;
        };
        return result;
    }
};