#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

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

        sort(freqVec.begin(), freqVec.end(), greater<pair<int, int>>());

        vector<int> topKElements;
        for (int i = 0; i < k; ++i) {
            topKElements.push_back(freqVec[i].second);
        }
        return topKElements;
    }
};