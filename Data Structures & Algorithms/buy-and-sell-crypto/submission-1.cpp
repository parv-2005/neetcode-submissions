class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = prices[0];
        int ans = 0;
        for(int i = 1;i<prices.size();i++){
            minp = min(minp,prices[i]);
            ans = max(ans,prices[i]-minp);
        }
        return ans;
        
     }
};
