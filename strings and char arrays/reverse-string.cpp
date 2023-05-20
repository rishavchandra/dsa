#include<bits/stdc++.h>
using namespace std;
             
int main(){
    char str[25];
    cin >> str;
    int size = strlen(str);
    int i=0, j=size-1;
    while(i<j){
        swap(str[i], str[j]);
        i++;
        j--;
    }
    cout << str;
             
    return 0;
}