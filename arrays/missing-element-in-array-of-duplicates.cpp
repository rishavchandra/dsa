#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < size; i ++){
        int index = arr[i];
        if(arr[index - 1] > 0){
            arr[index - 1] *= -1;
        }
    }
    for(int i = 0; i < size; i ++){
        if(arr[i] > 0){
            cout << i + 1 << " ";
        }
    }

    return 0;
}