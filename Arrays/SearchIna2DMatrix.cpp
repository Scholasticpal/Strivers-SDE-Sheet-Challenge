// https://leetcode.com/problems/search-a-2d-matrix/description/
// TC: O(log(m*n))

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int low = 0;
        int high = rows * cols;

        while(low<high){
            int mid = (low + high)/2;

            if(matrix[mid/cols][mid%cols] == target){
                return true;
            }
            if(matrix[mid/cols][mid%cols] <target){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }
        return false;
    }
};
