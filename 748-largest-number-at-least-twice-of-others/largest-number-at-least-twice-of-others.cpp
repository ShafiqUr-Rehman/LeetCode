class Solution {
public:
    int dominantIndex(vector<int>& nums);
};

int Solution::dominantIndex(vector<int>& nums) {
    int max=INT_MIN, maxIndex, size = nums.size();
    for ( int i = 0; i < size; ++i) {
        if (nums[i] > max) {
            max = nums[i];
            maxIndex = i;
        }
    }
    for ( int i = 0; i < size; ++i) {
        if (i == maxIndex) {
            continue;
        }
        if (2*nums[i] > max) {
            return -1;
        }
    }
    return maxIndex;
}
