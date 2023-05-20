#include<bits/stdc++.h>
using namespace std;
             
int main(){
    char str[25];
    cin >> str;
    int size = strlen(str);
    for(int i=0; i<size; i++){
        str[i] = str[i] - 'a' + 'A';
    }         
    cout << str;
             
    return 0;
}