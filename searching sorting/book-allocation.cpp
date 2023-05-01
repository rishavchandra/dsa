#include<bits/stdc++.h>
using namespace std;

bool isPossibleSol(int arr[], int n, int m, int sol){
    int pageSum = 0;
    int c = 1;
    for(int i=0; i<n; i++){
        if(arr[i] > sol){
            return false;
        }
        if(arr[i] + pageSum > sol){
            c++;
            pageSum = arr[i];
            if(c > m){
                return false;
            }
        }
        else{
            pageSum += arr[i];
        }
        return true;
    }
}

int main(){
    int arr[] = {12, 34, 67, 90};
    int n=4;
    int m=2;
    if(m>n){
        cout << -1;
    }    
    int start = 0;
    int end = accumulate(arr, arr+n, 0);
    int ans = -1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(isPossibleSol(arr, n, m, mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    cout << ans;
             
    return 0;
}