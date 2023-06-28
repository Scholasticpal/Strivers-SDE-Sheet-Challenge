//https://leetcode.com/problems/shortest-palindrome/description/

class Solution {
public:
    string shortestPalindrome(string s) {
        if(s.length() <= 1){
            return s;
        }
        int l=0, r = s.size()-1;
        while(r>=0){
            if(s[l] == s[r]){
                l++;
            }
            r--;
        }
        if(l==s.size()){
            return s;
        }

        string part (s.begin()+l, s.end());
        reverse(part.begin(), part.end());
        string ans = part + (shortestPalindrome(s.substr(0, l))) + s.substr(l, s.size());
        return ans;
    }
};
