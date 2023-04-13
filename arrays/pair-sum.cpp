#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int sum = 6;

    for(int i = 0; i < size; i ++){
        for(int j = i + 1; j < size; j ++){
            if(arr[i] + arr[j] == sum){
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }

    return 0;
}