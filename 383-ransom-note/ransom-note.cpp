class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    vector<int> count(26,0);
    for(char ch : magazine){
        count[ch - 'a']++;
    }
    for(char ch : ransomNote){
        if(count[ch - 'a'] > 0){
            count[ch - 'a']--;
        }
        else{
            return false;
        }
    }
    return true;
    }
};