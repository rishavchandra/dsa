#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr{1, 2, 3, 4, 7};
    int size = arr.size();
    int sum;
    cin >> sum;

    for(int i = 0; i < size; i ++){
        for(int j = i + 1; j < size; j ++){
            if(arr[i] + arr[j] == sum){
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }

    return 0;
}