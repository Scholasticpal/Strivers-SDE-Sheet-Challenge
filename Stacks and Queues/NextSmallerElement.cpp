//optimized
vector<int> Solution::prevSmaller(vector<int> &A){
    int n = A.size();
    vector<int> ans(n, -1);
    stack<int> st;
    st.push(A[0]);
    for(int i = 1; i<n; i++){
        while(!st.empty() && A[i]<=st.top()){
            st.pop();
        }
        if(!st.empty()){
            ans[i] = st.top();
        }
        st.push(A[i]);
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
