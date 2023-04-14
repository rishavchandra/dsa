#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100};
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int size = 6;
    int size2 = 5;
    int size3 = 8;
    vector <int> ans;
    set <int> st;
    int i, j, k;
    i = j = k = 0;
    while(i < size && j < size2 && k < size3){
        if(arr[i] == arr2[j] == arr3[k]){
            st.insert(arr[i]);
            i ++;
            j ++;
            k ++;
        }
        else if(arr[i] < arr2[j]){
            i ++;
        }
        else if(arr2[j] < arr3[k]){
            j ++;
        }
        else{
            k ++;
        }
    }
    for(auto i : st){
        ans.push_back(i);
    }
    for(auto i : ans){
        cout << i << " ";
    }

    return 0;
}