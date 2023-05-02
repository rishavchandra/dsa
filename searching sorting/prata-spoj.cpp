#include<bits/stdc++.h>
using namespace std;

bool isPossibleSol(vector<int> ranks, int n, int mid){
    int currP = 0;
    for(int i=0; i<ranks.size(); i++){
        int r = ranks[i];
        int j = 1;
        int timeTaken = 0;
        while(true){
            if(timeTaken + j*r <= mid){
                currP++;
                timeTaken += j*r;
                j++;
            }
            else break;
        }
        if(currP >= n) return true;
    }
    return false;
}

int minTimeToCompleteOrder(vector<int> ranks, int n){
    int start = 0;
    int highestRank = *max_element(ranks.begin(), ranks.end());
    int end = highestRank * n*((n+1))/2;
    int ans = -1;
    while(start <= end){
        int mid = (start + end) >> 1;
        if(isPossibleSol(ranks, n, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        return ans;
    }
}

int main(){
    vector<int> ranks{1, 2, 3, 4};
    int n = 10;
    cout << minTimeToCompleteOrder(ranks, n);
             
    return 0;
}