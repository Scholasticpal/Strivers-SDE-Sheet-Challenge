// https://leetcode.com/problems/repeated-string-match/description/
//Rabin Karp

#define mod 1000000;
class Solution {
public:
    int RabinKarp(string txt,string pattern){
        if(txt == "" || pattern == ""){
            return -1;
        }
        int n=txt.size();
        int m=pattern.size();
    //Calculate power for hash function p=pow(31,m-1)
        int power=1;
        for(int i=0;i < m;i++){
            power=(power*31) % mod;
        }
    //Find hash function for target string
        int targetcode=0;
        for(int i=0;i < m;i++){
            targetcode=(targetcode*31 + pattern[i]) % mod;
        }
    //make window of size m
    //Compare hash for both string and slide the window

        int hashcode=0;
        for(int i=0;i < n;i++){
        //hashnode for adding ith element to window 
            hashcode=(hashcode*31 + txt[i]) % mod;
            //if window smaller just make m size window so do nothing
            if(i < m-1){
                continue;
            }
            //if size of window exceeds then remove first element hash value
            if(i >= m){
                hashcode=(hashcode - txt[i-m]*power) % mod;
                //if hashvalue going to negative then just add some bigger value
                if(hashcode < 0){
                    hashcode += mod;
                }
            }
            // if hashcode for both string matches then just compare the characters
            if(hashcode == targetcode){
                if(txt.substr(i-m+1,m) == pattern){
                    return i-m+1;
                }
            }

        }
        return -1;
    }
    int repeatedStringMatch(string A, string B) {
        if(A == B) return 1;
        int count = 1;
        string source = A;
        while(source.size() < B.size()){
            count++;
            source+=A;
        }
        if(source == B) return count;
        if(RabinKarp(source,B) != -1) return count;
        if(RabinKarp(source+A,B) != -1) return count+1;
        return -1;
    }
};
