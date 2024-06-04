class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<int> diff1;
        vector<int> diff2;

        // We use a set to track added elements to avoid duplicates in the result
        unordered_set<int> added1;
        unordered_set<int> added2;

        // Find elements in nums1 but not in nums2
        for (const int& num : nums1) {
            if (set2.find(num) == set2.end() && added1.find(num) == added1.end()) {
                diff1.push_back(num);
                added1.insert(num);
            }
        }

        // Find elements in nums2 but not in nums1
        for (const int& num : nums2) {
            if (set1.find(num) == set1.end() && added2.find(num) == added2.end()) {
                diff2.push_back(num);
                added2.insert(num);
            }
        }

        return {diff1, diff2};
    }
};
