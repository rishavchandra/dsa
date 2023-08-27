#include<bits/stdc++.h>
using namespace std;
             
int main(){
    int n;
    cin >> n;
    if(n == 0 || n == 1) cout << "Not Prime";
    else{
        bool isPrime = true;
        for(int i=2; i<n; i++){
            if(n%i == 0){
                isPrime = false;
                break;
            }
        }         
        if(isPrime) cout << "Prime";
        else cout << "Not Prime";
    }
             
    return 0;
}