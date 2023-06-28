/* Convert the given infix expression to postfix.
  input: A+B*C+D
  output: ABC*+D+ */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int pre(char ch){
    if(ch == '^'){
        return 3;
    }
    else if(ch == '/' || ch == '*'){
        return 2;
    }
    else if(ch == '+' || ch == '-'){
        return 1;
    }
    else{
        return -1;
    }
}

string InfixtoPostfix(string s){
        stack<char> st;
        string ans ="";
        
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <='Z') || (ch >= '0' && ch<= '9')){
                ans += ch;
            }
            else if(ch =='('){
                st.push(ch);
            }
            else if(ch == ')'){
                while(!st.empty() && st.top() != '('){
                    ans+= st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty() && pre(ch)<= pre(st.top())){
                    ans += st.top();
                    st.pop();
                }
                st.push(ch);
            }
        }
        
        while(!st.empty()){
            if(st.top() == '('){cout<<"Invalid";}
            ans += st.top();
            st.pop();
        }
    return ans;
}

int main() {
    string s = "";
    getline(cin, s);
    cout<< InfixtoPostfix(s);
    return 0;
}
