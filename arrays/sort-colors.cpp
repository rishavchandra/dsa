#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums{2, 0, 2, 1, 1, 0};
    sort(nums.begin(), nums.end());

    for(auto i : nums){
        cout<<i<<" ";
    }

    return 0;
}

