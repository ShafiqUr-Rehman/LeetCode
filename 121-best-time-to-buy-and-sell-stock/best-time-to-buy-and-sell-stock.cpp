class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = 10001;
        int max = 0;
        for(int i=0;i<prices.size();i++){
            if(prices[i] - min > max){
                max = prices[i] - min;
            }
            if(prices[i]<min){
                min=prices[i];
            }
        }
        return max;
    }
};