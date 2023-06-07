// https://leetcode.com/problems/majority-element/description/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        // sort(nums.begin(), nums.end());
        // int mid = (0 + n-1)/2;
        // return nums[mid];
        int ele = 0, count = 0;
        for(int i = 0; i< n ; i++){
            if(count == 0){ele = nums[i];}

            count+= (ele==nums[i]) ? 1: -1;
        }
        return ele;
    }
};
