class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenCount = 0; 
        for (int num : nums) {
            int digitCount = 0;
            while (num > 0) {
                num /= 10;
                digitCount++;
            }
            if (digitCount % 2 == 0) { 
                evenCount++;
            }
        }
        return evenCount; 
    }
};
