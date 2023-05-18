#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr{1, 4, 2, 2, 6, 7, 6};
    int size = arr.size();
    unordered_map <int, int> hash;
    for(int i = 0; i < size; i ++){
        hash[arr[i]] ++;
    }
    for(int i = 0; i < size; i ++){
        if(hash[arr[i]] > 1){
            cout << arr[i];
            break;
        }
    }

    return 0;
}