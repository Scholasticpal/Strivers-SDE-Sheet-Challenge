//https://leetcode.com/problems/reverse-words-in-a-string/

class Solution {
public:
    string addReverse(string temp, string ans){
        if(temp == ""){
            return ans;
        }else{
            if(ans == "")
            {return temp;}
        }
        ans = temp + " "+ ans;
        return ans;
    }
    string reverseWords(string s) {
        int n = s.size();
        string temp = "";
        string ans = "";
        for(int i = 0; i< n ; i++){
            if(s[i] ==' '){
                ans = addReverse(temp, ans);
                temp="";
            }
            else{
                temp+= s[i];
            }
        }
        return addReverse(temp, ans);
    }
};

//-------------------------------------------------------------------
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
