#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    int arr[size];
    cin >> size;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int ans = -1;
    for(int i = 0; i < size; i ++){
        int index = abs(arr[i]);
        if(arr[index] < 0){
            ans = index;
            break;
        }
        arr[index] *= -1;
    }
    cout << ans;

    return 0;
}