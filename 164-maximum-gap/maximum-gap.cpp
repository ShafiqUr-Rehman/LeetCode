class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if (n<2) return 0;
        sort(nums.begin() , nums.end());
        int diff = INT_MIN;
        for(int i=0; i<n-1 ; i++){
            
            diff = max(diff , abs(nums[i] - nums[i+1]));
        };
        return diff;        
    }
};