class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> freq; 
        long long sum=0,maxSum=0;
        int start=0; 
        for (int end=0;end<nums.size();end++) {
            freq[nums[end]]++;
            sum += nums[end];
            if (end-start+1> k) {
                freq[nums[start]]--;
                if (freq[nums[start]] == 0) freq.erase(nums[start]);
                sum -= nums[start];
                start++;
            }
            if (end - start + 1 == k && freq.size() == k) {
                maxSum = max(maxSum, sum);
            }
        }
        return maxSum;
    }
};
