class Solution {
public:
   vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> set2(nums2.begin(), nums2.end());

    vector<int> diff1, diff2;

    // Find elements in nums1 but not in nums2
    for (const int& num : set1) {
        if (set2.find(num) == set2.end()) {
            diff1.push_back(num);
        }
    }

    // Find elements in nums2 but not in nums1
    for (const int& num : set2) {
        if (set1.find(num) == set1.end()) {
            diff2.push_back(num);
        }
    }

    return {diff1, diff2};
}

};