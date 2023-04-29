#include<bits/stdc++.h>
using namespace std;
             
int main(){
    vector<int> v{10, 1, 7, 6, 14, 9};
    int n = v.size();

    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(v[j] < v[minIndex]){
                minIndex = j;
            }
        }
        swap(v[minIndex], v[i]);
    }  
    for(auto i:v){
        cout << i << " ";
    }       
             
    return 0;
}