class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=INT_MIN;
        int price=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>price){
                profit=max(prices[i]-price,profit);
            }
            else{
                price=prices[i];
            }
        }
        if(profit==INT_MIN) return 0;
        return profit;
    }
};
