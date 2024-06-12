class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        if(n<=2){
            return -1;
        }

        int mini = INT_MAX, maxi = INT_MIN;
        for(auto n: nums){
            mini = min(mini, n);
            maxi = max(maxi, n);
        };
        for(auto n : nums){
            if(n!=mini && n!=maxi){
                return n;
            }
        };       
        return -1;
    };
};