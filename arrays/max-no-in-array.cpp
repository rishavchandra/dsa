#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    int arr[size];
    cin >> size;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int max_num = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i] > max_num) max_num = arr[i];
    }
    cout<<"Maximum number in the array is "<<max_num;

    return 0;
}