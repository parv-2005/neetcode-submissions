class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> m;
        int a,b;
        for(int i =0; i<nums.size();i++){
            a = nums[i];
            b = target-a;
            if(m.find(b)!=m.end()){
                ans.push_back(m[b]);
                ans.push_back(i);
            }
            m[a]=i;
        }
    return ans;}
};
