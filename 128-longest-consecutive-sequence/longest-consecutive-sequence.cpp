class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;
        sort(nums.begin(), nums.end());
        int mx = 0;
        int counter = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                continue;
            } else if (nums[i] == nums[i - 1] + 1) {
                counter++;
            } else {
                mx = max(mx, counter);
                counter = 1;
            }
        }
        mx = max(mx, counter);
        return mx;
    }
};
