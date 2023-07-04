//https://leetcode.com/problems/count-the-number-of-consistent-strings/description/

//TC:O(n2) SC:O(n) - Using Bit Manipulation
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res = 0;
        for(int i = 0; i< allowed.size() ; i++){
            res = res|(1<<(allowed[i] - 'a'));
        }
        int c = 0;
        for(int i=0; i<words.size(); i++){
            int c1=0;
            for(int j = 0;j<words[i].size(); j++){
                if(res & (1<<(words[i][j] - 'a'))){
                    c1++;
                }
                if(c1 == words[i].size()){
                    c++;
                }
            }
        }
        return c;
    }
};

//TC:O(n2) SC:O(n) - Using HashMaps
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n = allowed.size();
        unordered_map<char, int> mp;
        for(int i = 0; i< n ; i++){
            mp[allowed[i]]++;
        }
        int count = 0;
        for(int i = 0; i< words.size(); i++){
            bool flag = true;
            for(int j =0; j<words[i].size(); j++){
                if(mp.find(words[i][j]) == mp.end()){
                    flag = false;
                    break;
                }
            }
            if(flag)count++;
        }
        return count;
    }
};
