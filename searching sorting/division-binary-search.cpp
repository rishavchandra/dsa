#include<bits/stdc++.h>
using namespace std;
             
int main(){
    int dividend, divisor;
    cin >> dividend >> divisor;
    int s = 0;
    int e = abs(dividend);
    int mid = s + (e-s)/2;
    int ans = 0;
    while(s <= e){
        if(abs(mid*divisor) == abs(dividend)){
            cout << mid;
            break;
        }
        else if(abs(mid*divisor) < abs(dividend)){
            e = mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
         mid = s + (e-s)/2;
    }         
    if((divisor<0 && dividend<0) || (divisor>0 && dividend>0)){
        cout << ans;
    }
    else{
        cout << -ans;
    } 
    return 0;
}