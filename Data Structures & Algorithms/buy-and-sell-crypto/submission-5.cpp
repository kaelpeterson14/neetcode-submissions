class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = prices[0];
        int high = prices[0];
        int profit = 0;
        for(int num : prices){
            if(num > high){
                high = num;
            }
            if((high - low) > profit){
                    profit = high-low;
                }
            if(num < low){
                low = num;
                high = 0;
            }
        }
        return profit;
    }
};