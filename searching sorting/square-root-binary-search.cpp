#include<bits/stdc++.h>
using namespace std;
             
int main(){
    int target, precision;
    cin >> target;
    cin >> precision;
    int s = 0;
    int e = target;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while(s <= e){
        if(mid * mid == target){
            ans = mid;
            break;
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
    double step = 0.1;
    double finalAns = ans;
    for(int i = 0; i < precision; i ++){
        for(int j = finalAns; j * j <= target; j += step){
            finalAns = j;
        }
        step /= 10;
    }
    cout << finalAns;
             
    return 0;
}