class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int window=0;
        double mxSum =INT_MIN;

        for(int i=0;i<k;i++){
            window += nums[i];
        };
        mxSum = window;

        for(int i=k;i<nums.size();i++){
            window += nums[i] - nums[i-k];
            mxSum = max(mxSum , (double)window);  // MT
            
        };
        return mxSum/k;        
    }
};