class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = prices[0];
        int profit = 0;
        int ans = 0;
        int s = prices.size();
        int i = 0;
        while(s--)
        {
            mn = min(mn, prices[i]);
            profit = prices[i] - mn;
            ans = max(profit, ans);
            i++;
        }
        return ans;
    }
};
