class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curAl = 0;
        int mx = 0;
        for(int i=0;i<gain.size();i++){
            curAl +=gain[i];
            mx = max(curAl , mx);
        };
        return mx;    
    };
};