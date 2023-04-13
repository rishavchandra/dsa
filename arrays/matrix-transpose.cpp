#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int ans[3][3];
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            ans[i][j] = arr[j][i];
        }
    }
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}