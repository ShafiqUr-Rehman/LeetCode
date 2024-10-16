class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> map;
        int maxFreq = 0;
        for (char ch : s) {
            map[ch]++;
            maxFreq = max(maxFreq, map[ch]);
        }
        vector<vector<char>> buckets(maxFreq + 1);
        for (auto& entry : map) {
            buckets[entry.second].push_back(entry.first);
        }
        string result;
        for (int i = maxFreq; i > 0; i--) {
            for (char ch : buckets[i]) {
                result.append(i, ch); 
            }
        }
        return result;
    }
};
