class Solution {
public:
    int maxLength(vector<string>& arr) {
        return backtrack(arr, "", 0);
    }

private:
    int backtrack(vector<string>& arr, string current, int index) {
        // Check if the current string has unique characters
        if (!isUnique(current)) {
            return 0;
        }
        
        int maxLength = current.size();
        
        for (int i = index; i < arr.size(); ++i) {
            maxLength = max(maxLength, backtrack(arr, current + arr[i], i + 1));
        }
        
        return maxLength;
    }
    
    bool isUnique(string s) {
        unordered_set<char> chars;
        for (char c : s) {
            if (chars.find(c) != chars.end()) {
                return false;
            }
            chars.insert(c);
        }
        return true;
    }
};
