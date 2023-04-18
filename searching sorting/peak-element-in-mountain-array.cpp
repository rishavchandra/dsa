#include<bits/stdc++.h>
using namespace std;
             
int main(){
    vector <int> v{1, 10, 4, 2, 1, 1};
    int start = 0;
    int end = v.size() - 1;
    int mid = start + (end - start) / 2;
    while(start < end){
        if(v[mid] < v[mid + 1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start) / 2;
    }       
    cout << end;
             
    return 0;
}