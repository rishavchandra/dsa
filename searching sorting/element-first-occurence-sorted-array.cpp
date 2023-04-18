#include<bits/stdc++.h>
using namespace std;
             
int main(){
    vector <int> v{1, 2, 5, 5, 5, 6, 11};
    int target = 5;
    int start = 0;
    int end = v.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while(start <= end){
        if(v[mid] == target){
            ans = mid;
            end = mid - 1;
        }
        else if(target < v[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    cout << ans;
             
    return 0;
}