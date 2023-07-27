// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
//sliding window

class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size();
        int n = needle.size();
        if(h<n){return -1;}
        string s= "";
        for(int i = 0; i<n; i++){
            s+= haystack[i];
        }
        for(int i = 0; i< h-n+1; i++){
            if(s == needle){return i;}
            s.erase(0,1);
            s.push_back(haystack[i+n]);
        }
        return -1;
    }
};
