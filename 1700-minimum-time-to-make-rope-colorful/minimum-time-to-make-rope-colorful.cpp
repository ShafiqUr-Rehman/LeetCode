class Solution {
public:
    int minCost(string colors, vector<int>& time) {
        int n=time.size();
        int sum=accumulate(time.begin(),time.end(),0);
        int ans=0;
        int i=0;
        while(i<n){
            char ch=colors[i];
            int mini=INT_MIN;
            while(colors[i]==ch){
                mini=max(time[i],mini);
                i++;
            }
            ans+=mini;
        }
        return sum-ans;
        
    }
};