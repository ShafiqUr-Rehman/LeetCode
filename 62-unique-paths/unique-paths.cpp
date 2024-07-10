#include <vector>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> memo(m, vector<int>(n, -1));  // Initialize memoization table
        return uniquePathsHelper(m - 1, n - 1, memo);  // Start from the bottom-right corner
    }

private:
    int uniquePathsHelper(int row, int col, vector<vector<int>>& memo) {
        // Base case: if we're at the top-left corner, there's only one way (to stay there)
        if (row == 0 && col == 0) return 1;

        // If out of bounds, return 0
        if (row < 0 || col < 0) return 0;

        // If already calculated, return the stored value
        if (memo[row][col] != -1) return memo[row][col];

        // Recursive case: the number of unique paths to the top-left corner from the current cell
        // is the sum of the unique paths from the cell above and the cell to the left
        memo[row][col] = uniquePathsHelper(row - 1, col, memo) + uniquePathsHelper(row, col - 1, memo);
        return memo[row][col];
    }
};
