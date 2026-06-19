class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int mf=0;
        int ans = 0;
        vector<int> parv(26,0);
        for(int r = 0;r<s.size();r++){
            parv[s[r]-'A']++;
            mf = max(mf,parv[s[r]-'A']);
        
        while((r-l+1)-mf>k){
            parv[s[l]-'A']--;
            l++;
        }
         ans = max(ans,r-l+1);
        }
        
        return ans;
        
    }
};
