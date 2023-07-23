#include <bits/stdc++.h>
using namespace std;

// Quick Sort TC: O(nlogn)[average], O(n^2)[worst] | SC: O(logn)

/*int findPartition(vector<int> &arr, int low, int high){
        int i= low, j = high, pivot = arr[low];
            while(i<j){
                while(arr[i]<= pivot && i<=high){
                    i++;
                }
                while(arr[j]>pivot && j>=low){
                    j--;
                }
                if(i<=j){
                    swap(arr[i], arr[j]);
                }
            }
        swap(arr[low], arr[j]);
        return j;
    }
    void quickSort(vector<int> &nums, int low, int high){
        if(low<high){
        int partitionIndex = findPartition(nums, low, high);
        quickSort(nums, low, partitionIndex-1);
        quickSort(nums, partitionIndex+1, high);
        }
    }*/

// ------------------------------------------------------------------------
// MergeSort TC: O(nlogn) | SC: O(n)

/*void merge(vector<int> &arr, int low, int mid, int high){
    if(low>=high){return;}
    vector<int> temp;
    int left = low, right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<= high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i<=high; i++){
        arr[i] = temp[i-low];
    }
}
void mergeSort(vector<int> &nums, int low, int high){
    if(low>=high){return;}
    int mid = (low+high)/2;
    mergeSort(nums, low, mid);
    mergeSort(nums, mid+1, high);
    merge(nums, low, mid, high);
}*/

// ------------------------------------------------------------------------
//SelectionSort TC:O(n^2) | SC: O(1)

/*void selectionSort(vector<int> &arr, int n){
    for(int i = 0; i< n-1; i++){ //we dont check for last element as single element is always sorted.
        int minEle = arr[i], ind=i;
        for(int j = i; j<n; j++){
            if(arr[j]<minEle){
                minEle = arr[j];
                ind = j;
            }
        }
        swap(arr[i], arr[ind]);
    }
}*/

// ------------------------------------------------------------------------
// Bubble Sort: TC: O(n^2)[worst] O(n)[best] | SC: O(1)

/*void bubbleSort(vector<int> &arr, int n){
    for(int i = n-1; i>0; i--){
        int didSwap=0;
        for(int j = 0;j<i;j++){ //not till j<=i as last element(ith element) is not cannot be compared with anything ahead.
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]); //swapping
                didSwap = 1;
            }
        }
        if(didSwap == 0){ //Optimization: since it didnot swap throughout one traversal, the array is sorted so break.
            break;
        }
    }
}*/

// ------------------------------------------------------------------------
// Insertion Sort: TC: O(n^2)[worst] O(n)[best] | SC: O(1)
/*void insertionSort(vector<int> &arr, int n){
    for(int i = 0; i< n ; i++){ //picked up every element from 0 to n-1
        int j=i;
        while(j>0 && arr[j-1] > arr[j]){ //never runs if already sorted array. thus, best case is O(n)
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}*/

// ------------------------------------------------------------------------
int main()
{
    vector<int> arr;
    int n;
    cin>>n;
    for(int i = 0;i< n;i++){
        int temp = 0;
        cin>>temp;
        arr.push_back(temp);
    }
    //quickSort(arr, 0, n-1);
    //mergeSort(arr, 0, n-1);
    //selectionSort(arr, n);
    //bubbleSort(arr, n);
    //insertionSort(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
