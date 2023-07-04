//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/description/

class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while(num!=0){
            if(num & 1){
                num--;
                count++;
            }
            else{
                num = num>>1;
                count++;
            }
        }
        return count;
    }
};
