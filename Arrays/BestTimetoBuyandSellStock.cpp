// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minVal = INT_MAX, ct = 0, c = INT_MIN;
        for(int i =0; i< n; i++){
            minVal = min(minVal, prices[i]);
            ct = prices[i]-minVal;
            c = max(c, ct);
        }
        return c;
    }
};
