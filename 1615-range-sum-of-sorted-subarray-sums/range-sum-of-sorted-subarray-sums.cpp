class Solution {
public:
    int rangeSum(vector<int>& nums, int length, int start, int end) {
        const int modulo = 1'000'000'007;
        vector<int> subarraySums;
        
        for (int i = 0; i < length; ++i) {
            int currentSum = 0;
            for (int j = i; j < length; ++j) {
                currentSum += nums[j];
                subarraySums.push_back(currentSum);
            }
        }
        
        sort(subarraySums.begin(), subarraySums.end());
        long long result = 0;
        
        for (int i = start - 1; i < end; ++i) {
            result = (result + subarraySums[i]) % modulo;
        }
        
        return result;
    }
};
