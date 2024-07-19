class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        // Use a member function to handle the backtracking
        Backtrack(res, "", 0, 0, n);
        return res;
    }

private:
    void Backtrack(vector<string>& res, string current, int openN, int closedN, int n) {
        // If the current string is of length 2*n, we have a valid combination
        if (current.length() == n * 2) {
            res.push_back(current);
            return;
        }

        if (openN < n) {
            Backtrack(res, current + "(", openN + 1, closedN, n);
        }

        if (closedN < openN) {
            Backtrack(res, current + ")", openN, closedN + 1, n);
        }
    }
};
