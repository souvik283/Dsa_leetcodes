class Solution {
public:
    int maxArea(vector<int>& height) {

        int l=0, r=size(height)-1, ma =0;

        while(l<r){
            int area = (r-l) * min(height[l], height[r]);
            ma = max(ma, area);
            (height[l] < height[r]) ? l++ : r--;
           
        }

        return ma;
        
    }
};