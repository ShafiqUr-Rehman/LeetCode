class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double window=0;
        double mxSum =0;

        for(int i=0;i<k;i++){
            window += nums[i];
        };
        mxSum = window;

        for(int i=k;i<nums.size();i++){
            window += nums[i] - nums[i-k];
            mxSum = max(mxSum , window);  // MT
            
        };
        return mxSum/k;        
    }
};