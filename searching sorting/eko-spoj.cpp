#include<bits/stdc++.h>
using namespace std;

bool isPossibleSol(vector<long long int> trees, long long int m, long long int mid){
    long long int woodCollected = 0;
    for(int i=0; i<trees.size(); i++){
        if(trees[i] > mid){
            woodCollected += trees[i] - mid;
        }
    }
    return woodCollected >= m;
}

long long int maxSawBladeHeight(vector<long long int> trees, long long int m){
    long long int start = 0, end, ans = -1;
    end = *max_element(trees.begin(), trees.end());
    while(start <= end){
        long long int mid = (start + end) >> 1;
        if(isPossibleSol(trees, m, mid)){
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
    vector<long long int> trees{20, 15, 10, 17};
    long long int m = 7;
    cout << maxSawBladeHeight(trees, m);
             
    return 0;
}