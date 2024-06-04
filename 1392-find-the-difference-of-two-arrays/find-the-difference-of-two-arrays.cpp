class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq1, freq2;

        // Count frequencies of elements in nums1 and nums2
        for (int num : nums1) {
            freq1[num]++;
        }
        for (int num : nums2) {
            freq2[num]++;
        }

        vector<int> diff1, diff2;

        // Find elements in nums1 but not in nums2
        for (auto& pair : freq1) {
            if (freq2.find(pair.first) == freq2.end()) {
                diff1.push_back(pair.first);
            }
        }

        // Find elements in nums2 but not in nums1
        for (auto& pair : freq2) {
            if (freq1.find(pair.first) == freq1.end()) {
                diff2.push_back(pair.first);
            }
        }

        return {diff1, diff2};
    }
};