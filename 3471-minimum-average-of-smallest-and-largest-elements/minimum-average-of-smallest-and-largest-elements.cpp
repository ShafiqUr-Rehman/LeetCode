class Solution {
public:
    float minimumAverage(vector<int>& nums) {
        vector<float> averages;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 0; i < n / 2; i++) {
            int minElement = nums[i];
            int maxElement = nums[n - 1 - i];
            float avg = (minElement + maxElement) / 2.0;
            averages.push_back(avg);
        }

        float mini = FLT_MAX;
        for(int i = 0; i < averages.size(); i++) {
            if (averages[i] < mini) {
                mini = averages[i];
            }
        }       
        return mini;
    }
};
