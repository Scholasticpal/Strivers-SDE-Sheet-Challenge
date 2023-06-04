//https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(), sum = INT_MIN, currSum = 0;
        for(int i = 0; i< n; i++){
            currSum += nums[i];
            sum = max(sum, currSum);
            if(currSum<0){
                currSum = 0;
            }
        }
        return sum;
    }
};
