#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
    if(n == 0) return 0;
    vector<bool> nums(n, true);
    nums[0] = nums[1] = false;

    int count = 0;

    for(int i=2; i<n; i++){
        if(nums[i] == true){
            count++;

            int j=i*2;
            while(j<n){
                nums[j] = false;
                j += i;
            }
        }
    }
    return count;
}

int main(){
    cout << countPrimes(21);         
    
    return 0;
}