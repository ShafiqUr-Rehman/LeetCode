class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return -1;

        int maxIndex = 0;
        for (int i = 1; i < n; ++i) {
            if (nums[i] > nums[maxIndex]) {
                maxIndex = i;
            }
        }

        for (int i = 0; i < n; ++i) {
            if (i != maxIndex && nums[maxIndex] < 2 * nums[i]) {
                return -1;
            }
        }

        return maxIndex;
    }
};
