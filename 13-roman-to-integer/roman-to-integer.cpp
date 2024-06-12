class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char,int>mp;
       mp['I']=1;
       mp['V']=5; 
       mp['X']=10; 
       mp['L']=50; 
       mp['C']=100; 
       mp['D']=500;
       mp['M']=1000;
       int count=0;
       for(int i=0;i<s.size();i++){
        //Inside the loop, it checks if the current numeral (s[i]) is smaller than the next numeral (s[i+1]). If true, it subtracts the value of s[i] from count. This is because in Roman numerals, such as IV (4) or IX (9), the smaller numeral (I) before a larger numeral (V or X) indicates subtraction.

//If s[i] is not smaller than s[i+1], it adds the value of s[i] to count. This covers cases where the numeral is standalone (like I, V, X, etc.) or part of a larger numeral where addition is used (like VI for 6).
        if(mp[s[i]]<mp[s[i+1]]){
         count-=mp[s[i]];
        } else{
            count+=mp[s[i]];
        };
       } ; 
       return count;
    };
};