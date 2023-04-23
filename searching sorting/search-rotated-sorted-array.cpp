#include<bits/stdc++.h>
using namespace std;

int pivot(vector<int> arr){
    int s=0;
    int e=arr.size()-1;
    int mid = s + (e-s)/2;
    while(s <= e){
        if(s == e){
            return s;
        } 
        if(mid <= e && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(mid-1 >= s && arr[mid-1] > arr[mid]){
            return mid-1;
        }
        if(arr[s] > arr[mid]){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int binarySearch(vector<int>& arr, int s, int e, int target){
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            e = mid-1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}
             
int main(){
    vector<int> nums{4, 5, 6, 7, 0, 1, 2};
    int target = 7;
    int pivotIndex = pivot(nums);
    int ans=0;
    if(target >= nums[0] && target <= nums[pivotIndex]){
        ans = binarySearch(nums, 0, pivotIndex, target);
    }
    else{
        ans = binarySearch(nums, pivotIndex+1, nums.size()-1, target);
    }
    cout << ans;
             
    return 0;
}