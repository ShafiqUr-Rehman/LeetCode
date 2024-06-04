class Solution {
public:
    int missingNumber(vector<int>& nums) {
   int n = nums.size();
    int expectedSum = (n * (n + 1)) / 2; // Expected sum of 0 to n
    int actualSum = 0; // Actual sum of the numbers in the array
    
    for (int num : nums) {
        actualSum += num;
    }
    
    return expectedSum - actualSum;
        
    }
};