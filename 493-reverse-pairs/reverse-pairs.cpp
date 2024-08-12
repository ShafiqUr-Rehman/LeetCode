class Solution {
public:
    // Method to count reverse pairs
    int reversePairs(vector<int>& nums) {
        int count = 0;
        mergeSortAndCount(nums, 0, nums.size() - 1, count);
        return count;
    }

private:
    // Function to count reverse pairs and merge the array
    void mergeAndCount(vector<int>& nums, int left, int mid, int right, int& count) {
        int j = mid + 1;

        // Count reverse pairs
        for (int i = left; i <= mid; i++) {
            while (j <= right && nums[i] > 2LL * nums[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }

        // Merge two halves
        vector<int> temp(right - left + 1);
        int i = left, k = 0, m = mid + 1;
        while (i <= mid && m <= right) {
            if (nums[i] <= nums[m]) {
                temp[k++] = nums[i++];
            } else {
                temp[k++] = nums[m++];
            }
        }

        while (i <= mid) temp[k++] = nums[i++];
        while (m <= right) temp[k++] = nums[m++];

        for (int i = 0; i < temp.size(); i++) {
            nums[left + i] = temp[i];
        }
    }

    // Merge sort function with counting
    void mergeSortAndCount(vector<int>& nums, int left, int right, int& count) {
        if (left >= right) return;

        int mid = left + (right - left) / 2;

        mergeSortAndCount(nums, left, mid, count);
        mergeSortAndCount(nums, mid + 1, right, count);

        mergeAndCount(nums, left, mid, right, count);
    }
};