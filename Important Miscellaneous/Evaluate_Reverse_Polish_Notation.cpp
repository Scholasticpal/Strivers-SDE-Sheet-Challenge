// https://leetcode.com/problems/evaluate-reverse-polish-notation/description/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> st;
        for(int i=0; i< n; i++){
            
        if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "/" ||tokens[i] == "*" ){
            int n1 = st.top(); // upper element in stack is second element of expression
            st.pop();
            int n2 = st.top(); // lower element in stack is first element of expression
            st.pop();
            int ans = 0;
            if(tokens[i] == "+"){
                ans+= n2+n1;
            }
            else if(tokens[i] == "-"){
                ans = n2 - n1;
            }
            else if(tokens[i] == "*"){
                ans+= n2 * n1;
            }
            else if(tokens[i] == "/"){
                ans+= n2/n1;
            }
            st.push(ans);
        }
        else{
            st.push(stoi(tokens[i]));
        }
        }
        return st.top();
    }
};
