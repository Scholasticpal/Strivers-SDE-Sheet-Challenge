//https://leetcode.com/problems/xor-operation-in-an-array/description/

class Solution {
public:
    int xorOperation(int n, int start) {
        int val = 0;
        int ans = 0;
        for(int i = 0; i< n; i++){
            val = start + (i<<1);
            ans = ans^val;
        }
        return ans;
    }
};
