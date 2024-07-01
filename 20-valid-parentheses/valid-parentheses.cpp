class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char ch : s) { // Simplified for loop
            if (st.empty()) {
                st.push(ch);
            } else if ((ch == ')' && st.top() == '(') ||
                       (ch == ']' && st.top() == '[') ||
                       (ch == '}' && st.top() == '{')) {
                st.pop();
            } else {
                st.push(ch);
            }
        }
        if(st.empty()) return true;
        return false;
    }
};
