#include<bits/stdc++.h>
using namespace std;
             
int main(){
    vector<int> v{10, 3, 40, 20, 50, 80, 70};
    int target = 40;
    bool flag = false;
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e-s)/2;
    while(s <= e){
        if(v[mid] == target){
            flag = true;
        }
        if((mid-1) >= s && v[mid-1] == target){
            flag = true;
        }
        if((mid+1) <= e && v[mid+1] == target){
            flag = true;
        }
        if(target > v[mid]){
            s = mid + 2;
        }
        else{
            e = mid - 2;
        }
        mid = s + (e-s)/2;
    }
    if(flag == true){
        cout << "found";
    }         
    else{
        cout << "not found";
    }
             
    return 0;
}