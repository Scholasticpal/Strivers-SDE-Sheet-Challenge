//Recursion + Memoization: TC: O(N) SC:O(N)+O(N)
class Solution {
public:
    int calcFibo(int n, vector<int> &dp) {
        if(n<=1){
            return n;
        }
        if(dp[n] != -1){return dp[n];}
        return dp[n] = calcFibo(n-1, dp) + calcFibo(n-2, dp);
    }
    int fib(int n){
        vector<int> dp(n+1, -1);
        return calcFibo(n, dp);
    }
};

// Tabulation: TC:O(N) SC:O(N)
class Solution {
public:
    int fib(int n){
        vector<int> dp(n+1, -1);
        dp[0] = 0;
        dp[1] = 1;
        for(int i = 2; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};

// Space Optimization: TC:O(N) SC:O(1)
class Solution {
public:
    int fib(int n) {
        int prev2 = 0, prev = 1, curri = 0;
        for(int i = 2; i<=n;i++){
            curri = prev + prev2;
            prev2 = prev;
            prev = curri;
        }
        return prev;
    }
};
