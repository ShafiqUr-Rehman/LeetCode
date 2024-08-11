class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> charCount(128, 0);
        for (char c : t) charCount[c]++;
        
        int required = t.size();
        int left = 0, right = 0;
        int minLength = INT_MAX;
        int start = 0;
        
        while (right < s.size()) {
            // Expand the window by including the character at 'right'
            if (charCount[s[right]] > 0) required--;
            charCount[s[right]]--;
            right++;
            
            // Shrink the window from the left as much as possible while still being valid
            while (required == 0) {
                if (right - left < minLength) {
                    minLength = right - left;
                    start = left;
                }
                charCount[s[left]]++;
                if (charCount[s[left]] > 0) required++;
                left++;
            }
        }
        
        return minLength == INT_MAX ? "" : s.substr(start, minLength);
    }
};
