#include<bits/stdc++.h>
using namespace std;
             
int main(){
    vector<int> v{1,3,5,6,7,8,99};
    int size=v.size();
    int x=7;
    if(v[0] == x){
        return 0;
    }            
    int i=1;
    while(i<v.size() && v[i]<=x){
        i*=2;
    }
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    bool found = false;
    while(start <= end){
        if(v[mid] == x){
            found = true;
            cout << "Element found";
            break;
        }
        else if(x < v[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    if(found == false){
        cout << "Element not found";
    }
             
    return 0;
}