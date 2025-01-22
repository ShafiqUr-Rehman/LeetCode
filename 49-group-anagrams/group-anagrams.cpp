class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        for (string& s : strs) {
            // Create a key by sorting the string
            string key = s;
            sort(key.begin(), key.end());
            // Group the original string by its sorted version
            anagrams[key].push_back(s);
        }
        
        // Prepare the result vector
        vector<vector<string>> result;
        for (auto& pair : anagrams) {
            result.push_back(pair.second);
        }
        return result;
    }
};