// https://leetcode.com/problems/subsets-ii/

#include <bits/stdc++.h> 
void findSubs(int ind, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){
    ans.push_back(ds);
    int n = arr.size();
    for(int i = ind; i<n; i++){
        if(i!=ind && arr[i]==arr[i-1])continue;
        ds.push_back(arr[i]);
        findSubs(i+1, arr, ans, ds);
        ds.pop_back();
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    vector<vector<int>> ans;
    vector<int> ds;
    sort(arr.begin(), arr.end());
    findSubs(0, arr, ans, ds);
    return ans;
}
