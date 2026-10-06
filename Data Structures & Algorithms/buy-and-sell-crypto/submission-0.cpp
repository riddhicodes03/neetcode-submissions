class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int rightMax=0;
        int n = prices.size();
        int profit=0;
        vector<int>suffix(n);
        suffix[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--)
        suffix[i]=max(suffix[i+1],prices[i]);

        for(int i = 0; i<n;i++){
            int val = suffix[i]-prices[i];
            profit = profit < val ? val : profit;
        }
         return profit;
    }
};
