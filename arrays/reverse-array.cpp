#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 5, 12, 68, 98, 33, 4, 16};
    int size = 8;
    int start = 0, end = size - 1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }

    for(auto i : arr){
        cout << i << " ";
    }

    return 0;
}