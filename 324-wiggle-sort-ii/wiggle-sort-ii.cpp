class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> temp(nums); 
        sort(temp.begin(), temp.end());         
        int n = nums.size();
        int mid = (n + 1) / 2; // Middle index for the smaller half
        int end = n; // Last index for the larger half        
        // Fill the original array by placing the smaller elements in odd positions
        // and the larger elements in even positions
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                nums[i] = temp[--mid];
            } else {
                nums[i] = temp[--end];
            }
        }
    }
};
