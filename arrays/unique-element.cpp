#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr{1, 2, 3, 3, 4, 2, 1, 15, 15};
    int size = arr.size();
    int ans = 0;

    for(int i = 0; i < size; i ++){
        ans = ans ^ arr[i];
    }

    cout << ans;

    return 0;
}