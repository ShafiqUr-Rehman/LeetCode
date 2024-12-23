class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr;
        for (int i = 1; i <= n / 2; i++) {
            arr.push_back(i);
            arr.push_back(-i);
        }
        if (n % 2 != 0) {
            arr.push_back(0);
        }

        return arr;
    }
};
