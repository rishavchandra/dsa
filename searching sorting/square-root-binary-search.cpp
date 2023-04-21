#include<bits/stdc++.h>
using namespace std;
             
int main(){
    int target;
    cin >> target;
    int s = 0;
    int e = target;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while(s <= e){
        if(mid * mid == target){
            ans = mid;
        }
        else if(mid * mid > target){
            e = mid - 1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    } 
    cout << ans;
             
    return 0;
}