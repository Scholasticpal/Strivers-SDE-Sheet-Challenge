//https://leetcode.com/problems/four-divisors/description/
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i< n ; i++){
            int count = 0;
            int val = 0;
            for(int j = 1; j<= sqrt(nums[i]); j++){
                if(nums[i]%j == 0){
                    if(nums[i]/j ==j){
                        count++;
                        val += j;
                    }
                    else{
                        count+=2;
                        val += j + (nums[i]/j);
                    }
                }
            }
            if(count == 4){
                sum+= val;
            }
        }
        return sum;
    }
};
