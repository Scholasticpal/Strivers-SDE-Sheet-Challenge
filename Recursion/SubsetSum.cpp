//https://practice.geeksforgeeks.org/problems/subset-sums2234/1
//TC: O(2^n + 2^nLog(2^n))

class Solution
{
public:
    
    void findSums(int ind, int sum, vector<int> & arr, vector<int> &ans){
        int n = arr.size();
        if(ind==n){
            ans.push_back(sum);
            return;
        }
        else{
            findSums(ind + 1, sum + arr[ind], arr, ans);
            findSums(ind + 1, sum, arr, ans);
        }
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        findSums(0, 0, arr, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
