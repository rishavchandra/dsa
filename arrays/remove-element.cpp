#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int> nums, int val) {
    int index=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]!=val){
            nums[index]=nums[i];
            index++;
        }
    }
    return index;
}

int main(){
    cout << removeElement({3, 2, 2, 3}, 3);
             
    return 0;
}