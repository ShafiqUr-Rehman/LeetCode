class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes
        if (x < 0) {
            return false;
        };
        long int sub = x;
        long int rev_num = 0;

        while (x > 0) {
            int pop = x % 10; 
            x /= 10; 
            rev_num = rev_num * 10 + pop;
        };
        
        // Check if the original number is equal to the reversed number
        return sub == rev_num;  // MT
    };
};
