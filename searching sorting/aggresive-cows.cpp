#include<bits/stdc++.h>
using namespace std;

bool isPossibleSol(vector<int> &stalls, int k, int mid){
        int c = 1;
        int pos = stalls[0];
        for(int i=1; i<stalls.size(); i++){
            if(stalls[i] - pos >= mid){
                c++;
                pos = stalls[i];
            }
            if(c == k) return true;
        }
        return false;
}   

int solve(vector<int> &stalls, int n, int k){
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int end = stalls[stalls.size()-1] - stalls[0];
    int ans = -1;
    while(start <= end){
        int mid = (start + end) >> 1;
        if(isPossibleSol(stalls, k, mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){         
    vector<int> v{1, 2, 4, 8, 9};
    int n = 5;
    int k = 3;
    cout << solve(v, n, k);
             
    return 0;
}