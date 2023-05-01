#include<bits/stdc++.h>
using namespace std;
             
int main(){
     vector<int> v{3,1,4,5,1};
     int k=2;
     sort(v.begin(), v.end());
     set<pair<int,int>> ans;
     int i=0, j=1;
     while(j<v.size()){
        int diff = v[j] - v[i];
        if(diff == k){
            ans.insert({v[i], v[j]});
            i++;
            j++;
        }
        else if(diff > k){
            i++;
        }
        else{
            j++;
        }
        if(i == j){
            j++;
        }
     }      
     cout << ans.size();
             
    return 0;
}