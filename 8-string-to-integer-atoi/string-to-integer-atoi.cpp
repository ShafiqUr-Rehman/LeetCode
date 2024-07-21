class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        while (i < n && isspace(s[i])) {
            i++;
        }

        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        
        int result = 0;
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            
            // Step 4: Handle overflow and underflow
            if (result > (INT_MAX - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            
            result = result * 10 + digit;
            i++;
        }
        
        return result * sign;
    }
};
