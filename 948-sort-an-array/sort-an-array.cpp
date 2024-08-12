#include <vector>
using namespace std;

class Solution {
public:
    vector<int> merge(const vector<int>& leftArray, const vector<int>& rightArray) {
        vector<int> merged(leftArray.size() + rightArray.size());
        int i = 0, j = 0, k = 0;

        // Merge the two sorted arrays
        while (i < leftArray.size() && j < rightArray.size()) {
            if (leftArray[i] <= rightArray[j]) {
                merged[k++] = leftArray[i++];
            } else {
                merged[k++] = rightArray[j++];
            }
        }

        // Copy remaining elements of leftArray
        while (i < leftArray.size()) {
            merged[k++] = leftArray[i++];
        }

        // Copy remaining elements of rightArray
        while (j < rightArray.size()) {
            merged[k++] = rightArray[j++];
        }

        return merged;
    }

    vector<int> sortArray(vector<int> nums) {
        int n = nums.size();
        if (n <= 1) return nums;

        int mid = n / 2;

        vector<int> leftArray(nums.begin(), nums.begin() + mid);
        vector<int> rightArray(nums.begin() + mid, nums.end());

        leftArray = sortArray(leftArray);
        rightArray = sortArray(rightArray);

        return merge(leftArray, rightArray);
    }
};
