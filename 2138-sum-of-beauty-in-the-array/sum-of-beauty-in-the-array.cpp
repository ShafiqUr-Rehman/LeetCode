class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return 0;
        
        vector<int> max_left(n), min_right(n);
        
        max_left[0] = nums[0];
        for (int i = 1; i < n; ++i) {
            max_left[i] = max(max_left[i - 1], nums[i]);
        }
        
        min_right[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            min_right[i] = min(min_right[i + 1], nums[i]);
        }
        
        int beauty_sum = 0;
        
        for (int i = 1; i < n - 1; ++i) {
            if (nums[i] > max_left[i - 1] && nums[i] < min_right[i + 1]) {
                beauty_sum += 2;
            } else if (nums[i] > nums[i - 1] && nums[i] < nums[i + 1]) {
                beauty_sum += 1;
            }
        }
        
        return beauty_sum;
    }
};