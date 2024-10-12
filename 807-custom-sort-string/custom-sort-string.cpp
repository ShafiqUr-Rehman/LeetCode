class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> map;
        for (char ch : s) {
            map[ch]++;
        }     
        string result = "";
        for (char ch : order) {
            if (map.find(ch) != map.end()) {
                result += string(map[ch], ch); 
                map.erase(ch); 
            }
        }
        for (auto &entry : map) {
            result += string(entry.second, entry.first);
        }
        return result;
    }
};
