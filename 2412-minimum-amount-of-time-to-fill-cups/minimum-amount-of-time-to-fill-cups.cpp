class Solution {
public:
    int fillCups(vector<int>& amount) {
        sort(amount.rbegin(), amount.rend());
        if (amount[0] >= amount[1] + amount[2]) {
            return amount[0];
        } 
        return (amount[0] + amount[1] + amount[2] + 1) / 2;
    }
};
