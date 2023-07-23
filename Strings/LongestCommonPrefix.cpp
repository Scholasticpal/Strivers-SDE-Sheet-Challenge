// https://leetcode.com/problems/longest-common-prefix/description/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pref = "";
        int n = strs.size();
        sort(strs.begin(), strs.end());
        for(int i = 0;i< strs[0].size(); i++){
            if(strs[0][i] != strs[n-1][i]){
                break;
            }
            else{
                pref += strs[0][i];
            }
        }
        return pref;
    }
};
