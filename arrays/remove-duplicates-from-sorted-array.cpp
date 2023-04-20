#include<bits/stdc++.h>
using namespace std;
             
int main(){
    vector <int> nums{1, 1, 2};
    set<int> s; 
    for(int i =0; i<nums.size(); i++) s.insert(nums[i]);
    int size = s.size();
    nums.clear();
    for(auto i:s) nums.push_back(i);
    cout << size << ", ";
    for(auto i : nums){
        cout << i << " ";
    }    
             
    return 0;
}