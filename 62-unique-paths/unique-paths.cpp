#include <unordered_map>
#include <utility>
#include <functional>

using namespace std;

class Solution {
public:
    struct hash_pair {
        template <class T1, class T2>
        size_t operator()(const pair<T1, T2>& p) const {
            auto hash1 = hash<T1>{}(p.first);
            auto hash2 = hash<T2>{}(p.second);
            return hash1 ^ hash2;
        }
    };

    unordered_map<pair<int, int>, int, hash_pair> memo;

    int uniquePaths(int m, int n) {
        // Use pair<int, int> as the key for the unordered_map
        pair<int, int> key = make_pair(m, n);

        // Check if the result for this state is already computed
        if (memo.find(key) != memo.end())
            return memo[key];

        // Base case
        if (m == 1 && n == 1)
            return 1;

        int right = 0, down = 0;

        if (m > 1)
            down = uniquePaths(m - 1, n);
        if (n > 1)
            right = uniquePaths(m, n - 1);

        // Calculate the total number of paths
        int total = right + down;

        // Store the result in the memoization map
        memo[key] = total;

        return total;
    }
};
