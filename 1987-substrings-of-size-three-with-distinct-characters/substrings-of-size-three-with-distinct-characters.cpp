class Solution {
public:
    int countGoodSubstrings(string s) {
        int counter = 0;
        
        // Edge case: if string length is less than 3, return 0
        if (s.size() < 3) {
            return 0;
        }
        
        for (int i = 0; i <= s.size() - 3; ++i) {
            // Check if s[i], s[i+1], and s[i+2] are all different
            if (s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2]) {
                counter++;
            }
        }
        
        return counter;
    }
};
