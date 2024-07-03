class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> charCount;

        // Count the occurrences of each character
        for (char c : s) {
            charCount[c]++;
        };

        // Find the first unique character
        for (int i = 0; i < s.size(); i++) {
            if (charCount[s[i]] == 1)
                return i;
        };
        
        return -1;
    };
};