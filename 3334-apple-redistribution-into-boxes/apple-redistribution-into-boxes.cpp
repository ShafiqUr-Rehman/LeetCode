class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalApples = 0;
        for (int a : apple) {
            totalApples += a;
        }
        sort(capacity.begin(), capacity.end(), greater<int>());
        int currentCurrency = 0;
        int boxCount = 0;
        for (int c : capacity) {
            currentCurrency += c;
            boxCount++;
            if (currentCurrency >= totalApples) {
                break;
            }
        }
        return boxCount;
    };
};