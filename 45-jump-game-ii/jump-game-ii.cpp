class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0, en = 0, mxInd = 0;
        for(int i = 0; i < nums.size() - 1; i++) {
            mxInd = max(mxInd, i + nums[i]);
            if (i == en) {
                jumps++;
                en = mxInd;
            }
        }
        return jumps;
    }
};
