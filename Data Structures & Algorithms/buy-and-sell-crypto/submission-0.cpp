class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int maxP = 0;

        for (int r = 1; r < prices.size(); r++){
            int profit = prices[r] - prices[l]; 
             
            if (profit > 0){
                maxP = max(maxP, profit);
            } else{
                l = r;
            }

        }

        return maxP;
    }
};
