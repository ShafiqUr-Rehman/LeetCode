class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        for (int i = 0; i < prices.size(); i++) {
            int mini = prices[i];
            for (int j = i + 1; j < prices.size();j++) {
                if (prices[j] <= mini) {
                    prices[i] = mini - prices[j];
                    break;
                }
            };
        };
        return prices;
    }
};