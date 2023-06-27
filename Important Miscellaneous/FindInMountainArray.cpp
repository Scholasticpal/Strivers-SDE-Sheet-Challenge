// https://leetcode.com/problems/find-in-mountain-array/description/

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int start = 0, end = mountainArr.length() -1, mid = 0;
        while(start <end){
            int mid = (start + end)/2;
            if(mountainArr.get(mid)<mountainArr.get(mid+1)){
                start = mid + 1;
            }else{
                end = mid;
            }
        }

        int start1 = mid, end1 = mountainArr.length() -1;
        end = start;
        start = 0;
        while(start<= end){
            mid = (start + end)/2;
            if(mountainArr.get(mid) == target){
                return mid;
            }
            else if(mountainArr.get(mid) > target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }

        while(start1 <= end1){
            mid = (start1 + end1)/2;
            if(mountainArr.get(mid) == target){
                return mid;
            }
            else if(mountainArr.get(mid)< target){
                end1 = mid-1;
            }
            else{
                start1 = mid +1;
            }
        }
        return -1;
    }
};
