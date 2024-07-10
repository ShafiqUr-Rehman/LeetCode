class Solution {
public:
    unordered_map<int, int> memo;
    int climbStairs(int n) {
        if (n <= 1) return 1;
        if (n == 2) return 2;

        // Check if the result is already in the memo
        if (memo.find(n) != memo.end()) {
            return memo[n];
        }

        // Calculate the result and store it in the memo
        int result = climbStairs(n - 1) + climbStairs(n - 2);
        memo[n] = result;

        return result;
    }
};
