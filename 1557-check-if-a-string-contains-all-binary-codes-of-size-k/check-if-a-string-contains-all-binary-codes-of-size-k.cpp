class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if (k > s.size()) {
            return false;
        }

        unordered_set<string> Binary;
        int codeCase = pow(2, k);

        for (int i = 0; i <= s.size() - k; ++i) {
            Binary.insert(s.substr(i, k));
            if (Binary.size() == codeCase) {
                return true;
            }
        }
        return false;
    }
};
