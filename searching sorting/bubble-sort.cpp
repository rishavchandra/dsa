#include<bits/stdc++.h>
using namespace std;
             
int main(){
    vector<int> v{10, 1, 7, 6, 14, 9};
    int n = v.size();

    for(int i=1; i<n; i++){
        bool swapped = false;
        for(int j=0; j<n-i; j++){
            if(v[j] > v[j+1]){
                swapped = true;
                swap(v[j], v[j+1]);
            }
        }
        if(swapped == false){
        break;
        } 
    }           
    for(auto i:v){
        cout << i << " ";
    }
             
    return 0;
}