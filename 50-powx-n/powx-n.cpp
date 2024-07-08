class Solution {
public:
    double myPow(double x, int n) {
        // Base cases
        if (n == 0) return 1.0;
        
        // Recursive cases
        if (n < 0) {
            // If n is negative, compute 1 / (x^(-n))
            return 1.0 / (x * myPow(x, -(n + 1)));
        } else {
            // If n is positive
            if (n % 2 == 0) {
                // If n is even
                double half = myPow(x, n / 2);
                return half * half;
            } else {
                // If n is odd
                return x * myPow(x, n - 1);
            }
        }
    }
};