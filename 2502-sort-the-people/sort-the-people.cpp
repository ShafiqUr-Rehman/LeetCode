class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>nm;
        map<int,string>mp;
        for(int i=0;i<names.size();i++){
            mp[heights[i]]=names[i];
        }
        for(auto i:mp){
            nm.push_back(i.second);
        }
        reverse(nm.begin(),nm.end());
        return nm;
    }
};