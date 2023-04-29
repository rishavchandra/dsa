#include<bits/stdc++.h>
using namespace std;
             
int main(){
    vector<int> v{10, 1, 7, 6, 14, 9};
    int n = v.size();
    for(int i=1; i<n; i++){
        int val = v[i];
        int j = i-1;
        for(; j>=0; j--){
            if(v[j] > val){
                v[j+1] = v[j];
            }
            else{
                break;
            }
        }
        v[j+1] = val;
    }  
    for(auto i:v){
        cout << i << " ";
    }          
             
    return 0;
}