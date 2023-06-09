// https://leetcode.com/problems/powx-n/

class Solution {
public:
    double myPow(double x, int n) {

        if(n == 0){
            return 1.0;
        }
        double power = 1;
        double k = abs(n);
        for(int i = 0; i< k; i++){
            power *= x;
        }
        if(n>0){
            return power;
        }
        else{
            return 1.0/power ;
        }

    }
};
