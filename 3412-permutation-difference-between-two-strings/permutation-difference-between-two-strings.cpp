class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int ans=0;
        unordered_map<char,int>map1;
        for(int i=0;i<s.size();i++){
            map1[s[i]]=i;
        }
        for(int i=0;i<t.size();i++){
            ans+=abs(map1[t[i]]-i);
        }
        return ans;
    }
};