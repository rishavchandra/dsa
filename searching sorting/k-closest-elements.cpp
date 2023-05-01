#include<bits/stdc++.h>
using namespace std;
             
int main(){
    vector<int> v{1,2,3,4,5};
    int k=4;
    int x=3;
    int l=0, h=v.size()-1;
    while(h-l>=k){
        if(x-v[l] > v[h]-x){
            l++;
        }
        else{
            h--;
        }
    }           
    vector<int> vv(v.begin()+l, v.begin()+h+1); 
    for(auto i:vv){
        cout << i << " ";
    }
             
    return 0;
}