//https://leetcode.com/problems/sort-colors/description/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo = 0; 
        int hi = nums.size() - 1; 
        int mid = 0; 

        while(mid<= hi){ 

            // If the element is 0 
            if(nums[mid]==0){ 
                swap(nums[lo++], nums[mid++]);
            }

            // If the element is 1 . 
            else if(nums[mid]==1){ 
                mid++; 
            }
            // If the element is 2 
            else{ 
                swap(nums[mid], nums[hi--]); 
            }
        }
         
    }
};
