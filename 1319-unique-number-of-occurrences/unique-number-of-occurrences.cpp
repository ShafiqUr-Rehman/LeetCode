class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> map;
        for (auto num : arr) {
            map[num]++;
        }        
        unordered_set<int> freqSet;
        for (const auto& entry : map) {
            if (freqSet.find(entry.second) != freqSet.end()) {
                return false; 
            }
            freqSet.insert(entry.second); 
        }        
        return true;
    }
};
