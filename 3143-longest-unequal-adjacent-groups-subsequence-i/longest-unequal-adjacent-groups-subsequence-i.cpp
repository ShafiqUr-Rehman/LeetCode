class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words,
                                         vector<int>& groups) {
        vector<string> subSeq;
        subSeq.push_back(words[0]);
        int temp = groups[0];
        for (int i = 1; i < groups.size(); i++) {
            if (groups[i] != temp)
                subSeq.push_back(words[i]);
            temp = groups[i];
        };
        return subSeq;
    }
};