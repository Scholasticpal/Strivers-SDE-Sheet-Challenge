// https://leetcode.com/problems/minimum-deletions-to-make-array-divisible/description/
class Solution {
public:
    int gdc(int a, int b){
        if(a==0){
            return b;
        }
        return gcd(b%a, a);
    }
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int n = nums.size();
        int val = numsDivide[0];
        for(int i = 1; i< numsDivide.size(); i++){
            val = gcd(val, numsDivide[i]);
        }
        sort(nums.begin(), nums.end());

        for(int i =0; i<n; i++){
            if(val%nums[i]==0){
                return i;
            }
        }
        return -1;
    }
};
