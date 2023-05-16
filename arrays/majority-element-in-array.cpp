#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 7, 9, 9, 9, 4, 7, 4, 9, 9, 9, 9};
    int size = sizeof(arr)/sizeof(int);
    int maxCount = 0;
    int index = INT_MIN;
    for(int i = 0; i < size; i ++){
        int count = 0;
        for(int j = 0; j < size; j ++){
            if(arr[i] == arr[j]){
                count ++;
            }
            if(count > maxCount){
                maxCount = count;
                index = i;
            }
        }
    }
    if(maxCount > size/2){
            cout << arr[index];
        }
        else{
            cout << "Majority element not found";
        }

    return 0;
}