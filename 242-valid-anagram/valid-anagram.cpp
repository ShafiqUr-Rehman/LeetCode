class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map <char,int> map1;
        unordered_map <char,int> map2;
        for(auto s1 : s){
            map1[s1]++;
        };
        for(auto s2 : t){
            map2[s2]++; 
        };
        return map1==map2;

       
    }
};
