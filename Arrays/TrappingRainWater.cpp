// https://leetcode.com/problems/trapping-rain-water/description/

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n-1;
        int leftMax = 0, rightMax = 0;
        int waterTrapped = 0;
        while(l<= r){
            if(height[l]<= height[r]){
                if(height[l] >= leftMax){
                    leftMax = height[l];
                }
                else{
                    waterTrapped += leftMax - height[l];
                }
                l++;
            }
            else{
                if(height[r] >= rightMax){
                    rightMax = height[r];
                }
                else{
                    waterTrapped += rightMax - height[r];
                }
                r--;
            }
        }
        return waterTrapped;
    }
};
