class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for (auto num : nums) {
            map[num]++;
        }
        vector<pair<int, int>> freqVec;
        for (auto entry : map) {
            freqVec.push_back({entry.second, entry.first});
        }
        sort(freqVec.rbegin(), freqVec.rend());

        vector<int> topKElements;
        for (int i = 0; i < k; ++i) {
            topKElements.push_back(freqVec[i].second);
        }
        return topKElements;
    }
};