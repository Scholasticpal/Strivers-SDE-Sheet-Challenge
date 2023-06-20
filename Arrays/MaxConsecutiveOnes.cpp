// https://leetcode.com/problems/max-consecutive-ones/description/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxCnt = 0, cnt = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] == 1){
                cnt++;
                maxCnt = max(cnt, maxCnt);
            }
            else{
                cnt = 0;
            }
        }
        return maxCnt;
    }
};
