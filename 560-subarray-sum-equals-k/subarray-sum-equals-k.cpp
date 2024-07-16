class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1; 
        
        int currentSum = 0;
        int count = 0;
        
        for (auto& num : nums) {
            currentSum += num;
            
            // Check if there's a prefix subarray we can subtract to get sum k
            if (prefixSumCount.find(currentSum - k) != prefixSumCount.end()) {
                count += prefixSumCount[currentSum - k];
            }
            
            // Record the current sum in the map
            prefixSumCount[currentSum]++;
        }
        
        return count;
    }
};
