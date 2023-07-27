//Find no. of unique strings in given vector<string> strings.

/* Brute Force:
 - sort the vector
 - compare each string and count++ if a distinct string is found.
 - return count
 TC: O(mnlogn) - 'm' from comparing strings, 'nlogn' from sorting them
*/

// TC: O(nm+nlogn)
// to reduce TC by removing string comparison during iteration, we convert strings to unique integers using hashing.
#include <bits/stdc++.h>
using namespace std;
int n = 1e5+3, m = 1e9+7;
vector<long long> power(n);
int p = 31;

long long calcHashFunction(string s){
    long long hash = 0;
    for(int i=0; i< s.size(); i++){
        hash += (s[i] - 'a'+1)*power[i];
        hash = hash%m;
    }
    return hash;
}

int main()
{   
    //Preprocessing to perform hashing
    power[0] = 1;
    for(int i = 1; i<n; i++){
        power[i] = (power[i-1] * p)%m;
    }
    //Preprocessing ends
    
    vector<string> strings = {"aa", "ab", "aa", "b", "cc", "aa"};
    vector<long long> hashes;
    // Hashing all strings (string-> integer)
    for(auto w: strings){
        hashes.push_back(calcHashFunction(w));
    }
    //sort unique integers and find hashed values.
    sort(hashes.begin(), hashes.end());
    int distinct = 0;
    for(int i=0; i< hashes.size(); i++){
        if(i==0 || hashes[i] != hashes[i-1]){
            distinct++;
        }
    }
    cout<<"unique Strings count:"<<distinct;
    return 0;
}
