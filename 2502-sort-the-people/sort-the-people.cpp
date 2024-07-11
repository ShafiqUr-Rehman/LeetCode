class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>name;
        map<int,string>sort;
        for(int i=0;i<names.size();i++){
            sort[heights[i]]=names[i];//The map mp is  sorted the keys (heights) in ascending order.
        }
        for(auto i:sort){
            name.push_back(i.second);
        }
        reverse(name.begin(),name.end());
        return name;
    }
};