class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = prices[0];
        int profit = 0;
        int ans = 0;
        for(int i = 1;i < prices.size();i++)
        {
            mn = min(mn, prices[i]);
            profit = prices[i] - mn;
            ans = max(profit, ans);
        }
        return ans;
    }
};
