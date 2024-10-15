class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalApples = 0;
        for (int a : apple) {
            totalApples += a;
        }
        sort(capacity.begin(), capacity.end(), greater<int>());
        int capacityBox = 0;
        int boxCount = 0;
        for (int c : capacity) {
            capacityBox += c;
            boxCount++;
            if (capacityBox >= totalApples) {
                break;
            }
        }
        return boxCount;
    };
};