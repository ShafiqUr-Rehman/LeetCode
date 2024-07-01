class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

        for (int  i = 0; i < s.length(); ++i) {
            char ch = s[i];
            if (ch == '(' || ch == '{' || ch == '[') {
                stack.push(ch);
            } else {
                if (stack.empty())
                    return false;
                if ((ch == ')' && stack.top() != '(') ||
                    (ch == '}' && stack.top() != '{') ||
                    (ch == ']' && stack.top() != '[')) {
                    return false;
                }
                else stack.pop();
            }
        }
        return stack.empty();
    };
};