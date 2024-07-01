class Solution {
public:
    string removeStars(string s) {

        stack <char> st;
        for(auto ch : s){
            if (st.empty() || ch!='*'){
                st.push(ch);
            }else {
                st.pop();
            };
        };
        
        string ans = "";
        while(!st.empty()){
            ans +=st.top();
            st.pop();
        };
        reverse(ans.begin(), ans.end());
       return ans;
    };
};