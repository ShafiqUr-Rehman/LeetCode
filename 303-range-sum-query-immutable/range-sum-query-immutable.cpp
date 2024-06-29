#include <vector>
using namespace std;

class NumArray {
private:
    vector<int> prefixSums; 
public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefixSums.resize(n + 1, 0);
        prefixSums[0] = 0; // Base case for prefix sum
        
        for (int i = 1; i <= n; ++i) { // Start from 1 for 1-based indexing in prefixSums
            prefixSums[i] = prefixSums[i - 1] + nums[i - 1];
        }
    }
    
    int sumRange(int left, int right) {
        return prefixSums[right + 1] - prefixSums[left]; // here right+1
        // we use right+1 to handle 1-indexed base in prefixSums
    }
};
