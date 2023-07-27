// https://leetcode.com/problems/valid-anagram/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){return false;}
        unordered_map<char, int>mp;
        for(int i = 0; i< s.size(); i++){
            mp[s[i]]++;
        }
        for(auto i: t){
            if(mp.find(i) != mp.end()){
                if(mp[i] >0){
                    mp[i]--;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};
