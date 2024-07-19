class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        string res;
        int resLen = 0;

        for (int i = 0; i < s.size(); i++) {
            // Check for odd length palindromes with center at s[i]
            int left = i, right = i;
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                int len = right - left + 1;
                if (len > resLen) {
                    res = s.substr(left, len);
                    resLen = len;
                }
                left--;
                right++;
            }

            // Check for even length palindromes with center between s[i] and s[i + 1]
            left = i, right = i + 1;
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                int len = right - left + 1;
                if (len > resLen) {
                    res = s.substr(left, len);
                    resLen = len;
                }
                left--;
                right++;
            }
        }

        return res;
    }
};
