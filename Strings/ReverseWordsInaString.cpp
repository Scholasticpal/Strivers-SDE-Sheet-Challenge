//https://leetcode.com/problems/reverse-words-in-a-string/

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = n-1;
        string ans = "";
        while(i>=0){
            if(s[i] == ' '){
                i--;
            }
            else{
                string temp = "";
                while(i>=0 && s[i] != ' '){
                    temp+= s[i];
                    i--;
                }
                reverse(temp.begin(), temp.end());
                ans+= temp+ " ";
            }
        }
        ans.pop_back();
        return ans;
    }
};
