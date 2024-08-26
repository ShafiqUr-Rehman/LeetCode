class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> sorted(nums);
        sort(sorted.begin(), sorted.end());        
        int n = nums.size();
        int j = (n + 1) / 2 - 1;  // Middle index for the smaller half
        int k = n - 1;  // Last index for the larger half
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                nums[i] = sorted[j--]; 
            } else {
                nums[i] = sorted[k--];  
            }
        }
    }
};
