// 

// Brute Force (TLE)
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        int n = arr.size();
        set<vector<int>> set;
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        for(int i = 0; i <n-3; i++){
            for(int j = i+1; j<n-2; j++){
                for(int k = j+1; k<n-1; k++){
                    for(int l = k+1; l<n; l++){
                    if(arr[i] + arr[j] + arr[k] + arr[l] == target){
                        set.insert({arr[i], arr[j], arr[k], arr[l]});
                    }
                    }
                }
            }
        }
        for(auto it : set){
            ans.push_back(it);
        }
        return ans;
    }
};

// Optimized Binary Search Approach

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        int n = arr.size();
        set<vector<int>> set;
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        for(int i = 0; i <n-3; i++){
            for(int j = i+1; j<n-2; j++){
                for(int k = j+1; k<n-1; k++){
                    for(int l = k+1; l<n; l++){
                    if(arr[i] + arr[j] + arr[k] + arr[l] == target){
                        set.insert({arr[i], arr[j], arr[k], arr[l]});
                    }
                    }
                }
            }
        }
        for(auto it : set){
            ans.push_back(it);
        }
        return ans;
    }
};
