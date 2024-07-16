#include <vector>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        for (int start = 0; start < n; ++start) {
            
            int sum = 0;
            for (int end = start; end < n; ++end) {
                sum += nums[end];

                if (sum == k) {
                    count++;
                }
            }
        }

        return count;
    }
};
