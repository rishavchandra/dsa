#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 2, 2, 3, 4, 9, 9};
    int size = 8;
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int target;
    cin >> target;
    bool found = false;
    while(start <= end){
        if(arr[mid] == target){
            found = true;
            cout << "Element found";
            break;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    if(found == false){
        cout << "Element not found";
    }

    return 0;
}