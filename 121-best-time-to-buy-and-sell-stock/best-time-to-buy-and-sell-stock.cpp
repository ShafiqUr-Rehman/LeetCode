class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;  // Initialize to a large value
        int maxProfit = 0;       // Initialize to 0 as we might not make any profit

        for (int i = 0; i < prices.size(); i++) {
            // Update the minimum price encountered so far
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }
            // Calculate profit if selling at the current price
            int profit = prices[i] - minPrice;
            // Update the maximum profit
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }

        return maxProfit;
    }
};
