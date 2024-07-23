class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size();
        
        // Find the longest non-decreasing prefix
        int left = 0;
        while (left + 1 < n && arr[left] <= arr[left + 1]) {
            left++;
        }
        
        // If the entire array is non-decreasing, return 0
        if (left == n - 1) {
            return 0;
        }
        
        // Find the longest non-decreasing suffix
        int right = n - 1;
        while (right > 0 && arr[right - 1] <= arr[right]) {
            right--;
        }
        
        // Minimum length of subarray to remove
        int min_len = min(n - left - 1, right);
        
        // Check for possible merges
        int i = 0;
        int j = right;
        while (i <= left && j < n) {
            if (arr[i] <= arr[j]) {
                min_len = min(min_len, j - i - 1);
                i++;
            } else {
                j++;
            }
        }
        
        return min_len;
    }
};
