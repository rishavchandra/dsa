#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {1, 2, -3, 4, -5, 6};
    int n = sizeof(a)/sizeof(int);
    int l=0, h=n-1;
    while(l<h){
        if(a[l]<0) l++;
        else if(a[h]>0) h--;
        else swap(a[l], a[h]);
    }
    for(auto i : a){
        cout<<i<<" ";
    }
    

    return 0;
}
