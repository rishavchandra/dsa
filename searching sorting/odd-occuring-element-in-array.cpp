#include<bits/stdc++.h>
using namespace std;
             
int main(){
    vector<int> v{1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e-s)/2;
    while(s <= e){
        if(s == e){
            cout << s;
            break;
        }
        if(mid%2==0){
            if(v[mid] == v[mid+1]){
                s = mid + 2;
            }
            else{
                e = mid;
            }
        }
        else{
            if(v[mid] == v[mid-1]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        mid = s + (e-s)/2;
    }         
             
    return 0;
}