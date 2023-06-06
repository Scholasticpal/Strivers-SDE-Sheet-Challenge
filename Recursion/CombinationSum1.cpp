// https://leetcode.com/problems/combination-sum/description/

class Solution {
public:
    void findComb(int ind, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int> &ds){
        if(ind == arr.size()){
            if(target == 0){
                ans.push_back(ds);
                return;
            }
        }
        else{
            //pick
            if(arr[ind]<= target){
                ds.push_back(arr[ind]);
                findComb(ind, target-arr[ind], arr, ans, ds);
                ds.pop_back();
            }
            //not pick
            findComb(ind+1, target, arr, ans, ds);
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findComb(0, target, candidates, ans, ds);
        return ans;
    }
};
