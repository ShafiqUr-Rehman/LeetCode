class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        
        for (auto ch : s) {
            if (!st.empty() && tolower(st.top()) == tolower(ch) && st.top() != ch) {
                st.pop(); 
            } else {
                st.push(ch); 
            }
        }
        
        string good;
        while (!st.empty()) {
            good += st.top(); 
            st.pop(); 
        };
        
        reverse(good.begin(), good.end());
        return good;
    };
};