//https://leetcode.com/problems/permutations/description/

class Solution {
public:
    void perm(int ind,vector<int>& arr, vector<vector<int>> &ans){
        if(ind == arr.size()){
            ans.push_back(arr);
            return;
        }
        for(int i=ind;i<arr.size();i++){
                swap(arr[ind], arr[i]);
                perm(ind+1, arr, ans);
                swap(arr[ind], arr[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        perm(0, nums, ans);
        return ans;
    }
};
