class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int mxInd = 0;

        for(int i=0;i<n;i++){
            if(i > mxInd) return false;
            mxInd = max(mxInd , i+nums[i]);
        };
        return true;
        
    }
};