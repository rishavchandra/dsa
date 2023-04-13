#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 6, 7, 9, 3, 6};
    int size = 7;
    int maxProfit = 0;
    int buy = arr[0];
    for(int i = 1; i < size; i ++){
        if(buy > arr[i]){
            buy = arr[i];
        }
        int profit = arr[i] - buy;
        if(profit > maxProfit){
            maxProfit = profit;
        }
    }
    cout << maxProfit;

    return 0;
}