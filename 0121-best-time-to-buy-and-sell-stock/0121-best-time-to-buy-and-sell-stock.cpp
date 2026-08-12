class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = 0, bestBuy = prices[0];

        for(int i=1; i<size(prices); i++){
            if(prices[i]> bestBuy){
                mp = max(mp, prices[i] - bestBuy);
            }

            bestBuy = min(bestBuy, prices[i]);
        }

        return mp;
        
    }
};