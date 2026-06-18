class Solution {
public:
    int maxArea(vector<int>& heights) {
        int lp = 0;
        int rp = heights.size()-1;
        int area=0;
        while(lp<rp){
            int width = rp-lp;
            int hieght = min(heights[rp],heights[lp]);
            int ans = width* hieght;
            area = max(area,ans);
            heights[rp]>heights[lp] ? lp++:rp--;
        }        
    return area;}
};
