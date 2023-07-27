#include<bits/stdc++.h>
using namespace std;

int n = 1e5+3, m=1e9+7;
vector<long long> powers(n);
int p=31;

int main(){
    string s= "na";
    string t= "apana";
    int T= t.size(), S= s.size();
    
    powers[0] =1;
    for(int i = 1; i< n; i++){
        powers[i] = (powers[i-1]*p)%m;
    }
    vector<long long> h(T+1, 0);
    for(int i = 0; i< T; i++){
        h[i+1] = (h[i] + (t[i] - 'a' + 1)*powers[i])%m;
    }
    
    long long h_S = 0;
    for(int i = 0; i< S; i++){
        h_S = (h_S+(s[i] - 'a' + 1)* powers[i])%m;
    }
    for(int i = 0; i+S-1 <T; i++){
        long long curr_h = (h[i+S] - h[i] + m)%m;
        if(curr_h == (h_S*powers[i])%m){
            cout<<"Found at index: "<<i<<"\n";
        }
    }
    
}
