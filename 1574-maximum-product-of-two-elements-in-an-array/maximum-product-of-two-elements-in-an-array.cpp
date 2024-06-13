class Solution {
public:
    int maxProduct(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                if(nums[i]>nums[j]){
                    swap(nums[i],nums[j]);
                };
            };
        };
        int i = nums.size()-1;
        int j = nums.size()-2;
        return ((nums[i]-1)*(nums[j]-1));
    }
};