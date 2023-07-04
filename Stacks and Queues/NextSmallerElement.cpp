//optimized
#include<bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector<int> ans(n, -1);
    stack<int> st;
    for(int i = 0; i< n ; i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}

//brute force approach
vector<int> Solution::prevSmaller(vector<int> &A){
    int n = A.size();
    vector<int> ans;
    for(int i = 0; i< n ; i++){
        int val = -1;
        for(int j = i; j>=0;j--){
            if(A[j]<A[i]){
                val = A[j];
                break;
            }
        }
        ans.push_back(val);
    }
    return ans;
}
