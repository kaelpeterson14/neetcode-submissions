class Solution {
    public int maxProfit(int[] prices) {
        int maxProfit = 0;
        int i = 0;
        int j = 1;
        while(i < prices.length && j < prices.length){
           
            

            if(prices[i] < prices[j]){
                int profit = prices[j] - prices[i];
                maxProfit = Math.max(maxProfit, profit);
            } else {
                i = j;
            }
            j++;
            }
            return maxProfit;
        }
        
    }
