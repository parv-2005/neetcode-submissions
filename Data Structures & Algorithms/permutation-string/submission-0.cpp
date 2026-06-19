class Solution {
public:
bool issame(vector<int> freq1,vector<int> freq2){
    for(int i = 0; i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {
        vector<int> freq1(26,0);
        for(int i = 0; i<s1.length();i++){
            freq1[s1[i]-'a']++;
        }
        int ws = s1.length();
        for(int i = 0;i<s2.length();i++){
            vector<int> freq2(26,0);
            int index = i;
            int wi = 0;
            while(wi<ws && index<s2.length()){
                freq2[s2[index]-'a']++;
                wi++;
                index++;
            }
            if(issame(freq1,freq2)){
                return true;
            }
        }
        return false;
        
    }
};
