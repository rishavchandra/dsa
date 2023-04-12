#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 6, 7, 9, 3, 6};

    int max_num = INT_MIN;
    for(int i=0; i<7; i++){
        if(arr[i] > max_num) max_num = arr[i];
    }
    cout<<"Maximum number in the array is "<<max_num;

    return 0;
}