#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <vector<int>> v{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int m = v.size();
    int n = v[0].size();
    vector <int> ans;
    int total_elements = m * n;
    int startRow = 0;
    int endCol = n - 1;
    int endRow = m - 1;
    int startCol = 0;
    int count = 0;
    while(count < total_elements){
        for(int i = startCol; i <= endCol; i ++){
            ans.push_back(v[startRow][i]);
            count ++;
        }
        startRow ++;
        for(int i = startRow; i <= endRow; i ++){
            ans.push_back(v[i][endCol]);
            count ++;
        }
        endCol --;
        for(int i = endCol; i >= startCol; i --){
            ans.push_back(v[endRow][i]);
            count ++;
        }
        endRow --;
        for(int i = endRow; i >= startRow; i --){
            ans.push_back(v[i][startCol]);
            count ++;
        }
        startCol ++;
    }
    for(auto i : ans){
        cout << i << " ";
    }

    return 0;
}