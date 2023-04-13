#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> arr{1, 2, 3, 4, 5};
    vector <int> ans;
    for(int i = 0; i < arr.size() - 1; i ++){
        ans.push_back(arr[i+1]);
    }
    ans.push_back(arr[0]);

    for(auto i : ans){
        cout << ans[i] << " ";
    }

    return 0;
}