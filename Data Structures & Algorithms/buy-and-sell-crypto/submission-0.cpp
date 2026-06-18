class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int out=0;
        for(int i = 0; i<n;i++){
            for(int j = i+1;j<n;j++){
                if(prices[j]-prices[i]>0){
                   int ans = prices[j]-prices[i];
                   out = max(out,ans);
                }
            }
        }
     return out;   
    }
};
