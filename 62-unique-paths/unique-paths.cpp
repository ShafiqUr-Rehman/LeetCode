#include <vector>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> memo(m, vector<int>(n, -1)); // Initialize memoization table
        return uniquePathsHelper(m, n, 0, 0, memo);
    }

private:
    int uniquePathsHelper(int m, int n, int row, int col, vector<vector<int>>& memo) {
        // Base case: if the robot reaches the bottom-right corner
        if (row == m - 1 && col == n - 1) {
            return 1;
        }

        // If out of bounds, return 0
        if (row >= m || col >= n) {
            return 0;
        }

        // If already calculated, return the stored value
        if (memo[row][col] != -1) {
            return memo[row][col];
        }

        // Calculate the number of unique paths from the current cell
        int rightPaths = uniquePathsHelper(m, n, row, col + 1, memo);
        int downPaths = uniquePathsHelper(m, n, row + 1, col, memo);

        // Store the result in the memoization table and return it
        memo[row][col] = rightPaths + downPaths;
        return memo[row][col];
    }
};
