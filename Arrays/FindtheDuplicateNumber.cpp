// https://leetcode.com/problems/find-the-duplicate-number/description/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int n = sizeof(nums)/sizeof(nums[0]);
    int flag = 0;
    sort(nums.begin(), nums.end());
    for(int i = 0; i< nums.size()-1; i++){
        if(nums[i] == nums[i+1]){
            flag = nums[i];
            break;
        }
    }
    return flag;
    }
};
