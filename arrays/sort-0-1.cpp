#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 0, 1, 1, 1, 0, 0, 1};
    int size = 8;
    int start = 0;
    int end = size - 1;
    int i = 0;

    while(i != end){
        if(arr[i] == 0){
            swap(arr[i], arr[start]);
            start ++;
            i ++;
        }
        else{
            swap(arr[end], arr[i]);
            end --;
        }
    }

    for(auto i : arr){
        cout << arr[i] << " ";
    }

    return 0;
}