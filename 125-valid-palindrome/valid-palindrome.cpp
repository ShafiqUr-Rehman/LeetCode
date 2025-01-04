class Solution {
public:
    bool isPalindrome(string s) {
        string filtered = "";
        for (char c : s) {
            if ((isalpha(c) || isdigit(c))) {  // to check if a character is a letter.
                filtered += tolower(c);
            }
        }  
        int left = 0;
        int right = filtered.size() - 1;
        while (left < right) {
            if (filtered[left] != filtered[right]) {
                return false;
            }
            left++;
            right--;
        }
        
        return true;
    }
};
