class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s + s; // Concatenate the string with itself
                         //doubled.substr(start, length)
                         
        string modified = doubled.substr(1, doubled.size() - 2); // Remove the first and last character

        return modified.find(s) != string::npos; // Check if the original string is in the modified string
    };
};