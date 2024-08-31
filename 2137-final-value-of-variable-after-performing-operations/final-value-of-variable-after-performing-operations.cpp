class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (const string& op : operations) {
            if (op == "--X" || op == "X--") {
                x--;
            } else if (op == "++X" || op == "X++") {
                x++;
            }
        }
        return x;
    }
};
