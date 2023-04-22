#include<bits/stdc++.h>
using namespace std;
             
int main(){
    int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    int target = 11;
    int rows = 5;
    int cols = 4;
    int s = 0;
    int e = rows * cols  - 1;
    int mid = s + (e - s) / 2;
    bool flag = false;
    while(s <= e){
        int rowIndex = mid / cols;
        int colIndex = mid % cols;
        if(arr[rowIndex][colIndex] == target){
            flag = true;
        }
        else if(arr[rowIndex][colIndex] < target){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    if(flag == true){
        cout << "found";
    }
    else{
        cout << "not found";
    }
             
    return 0;
}