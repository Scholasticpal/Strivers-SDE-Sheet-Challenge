/* 
Brute Force Approach 1
TC: O(n^3)
SC: O(1)
using 3 nested for loops
*/

class Solution {
private:
    bool check(string &s, int i, int j){
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int starting_index = 0;
        int max_len = 0;
        for(int i = 0; i< n; i++){
            for(int j = i; j<n; j++){
                if(check(s, i, j)){
                    if(j-i+1 > max_len){
                        max_len = j-i+1;
                        starting_index = i;
                    }
                }
            }
        }
        return s.substr(starting_index, max_len);
    }
};

// ------------------------------------------------------------------------------------------------------------

/*
Brute Force Approach 2
TC: O(n^2)
SC: O(N^(2*N)) vector (substring) space
n - size of string
Solved using two nested loops
*/

class Solution { 
private: 
    bool check(string &s, int i, int j){
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<string> substring;
        for(int i=0; i<n; i++){
            string temp = "";
            for(int j=i; j<n; j++){
                temp += s[j];
                substring.push_back(temp);
            }
        }
        int max_len = 0;
        string finalans = substring[0];
        int m = substring.size();
        for(int i=0; i<m; i++){
            int s = substring[i].size();
            if(check(substring[i], 0, s-1)){
                if(s > max_len){
                    max_len = s;
                    finalans = substring[i];
                }
            }       
        }
        return finalans;
    }
};


// ----------------------------------------------------------------------------------
/*
Optimized Approach
Solved using dynamic programming(tabulation)
*/

class Solution {
private: 
    bool solve(vector<vector<bool>> &dp, int i, int j, string &s){
        if(i == j){
            return dp[i][j] = true;
        }
        if(j-i == 1){
            if(s[i] == s[j]){
                return dp[i][j] = true;
            }
            else{
                return dp[i][j] = false;
            }
        }
        if(s[i] == s[j] && dp[i+1][j-1] == true){
            return dp[i][j] = true;
        } else {
            return dp[i][j] = false;
        }
    }
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int startIndex = 0; int maxlen = 0;
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        for(int g=0; g<n; g++){
            for(int i=0, j=g; j<n; i++, j++){
                solve(dp, i, j, s);
                if(dp[i][j] == true){
                    if(j-i+1 > maxlen){
                        startIndex = i;
                        maxlen = j-i+1;
                    }
                }
            }
        }
        return s.substr(startIndex, maxlen);
    }
};
