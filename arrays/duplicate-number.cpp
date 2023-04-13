#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 3, 4};
    int size = 5;
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