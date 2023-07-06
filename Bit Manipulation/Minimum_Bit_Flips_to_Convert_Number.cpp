// https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/

//My Brute Force Approach TC:O(n)
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;
        while(start !=0 || goal !=0){
            int s1 = start%2;
            int g1 = goal%2;
            start = start>>1;
            goal = goal>>1;
            if(s1^g1 == 1){
                count++;
            }
        }
        return count;
    }
};

//Optimized Approach (Kerninghan's Algorithm) TC: O(log(n))
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;
        int n = start^goal;
        while(n!=0){
            int temp = n & -n;
            n = n-temp;
            count++;
        }
        return count;
    }
};
