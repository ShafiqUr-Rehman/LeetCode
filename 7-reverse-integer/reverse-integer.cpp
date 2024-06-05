class Solution {
public:
    int reverse(int x) {
        int reversed = 0;
        
        while (x != 0) {
            int pop = x % 10;
            x /= 10;

            // Check for overflow/underflow before actually updating reversed
            // INT_MAX  and INT_MIN  represent the last digit of the maximum and minimum 32-bit signed integers, respectively.
            if (reversed > INT_MAX/10 || (reversed == INT_MAX / 10 && pop >= INT_MAX % 10)) return 0;
            if (reversed < INT_MIN/10 || (reversed == INT_MIN / 10 && pop<= INT_MIN % 10)) return 0;

            reversed = reversed * 10 + pop;
        }

        return reversed;
    }
};


