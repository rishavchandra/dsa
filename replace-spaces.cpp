#include<bits/stdc++.h>
using namespace std;
             
int main(){
    char str[50];
    cin.getline(str, 50);
    int size = strlen(str);
    int i=0, j=size-1;
    for(int i=0; i<size; i++){
        if(str[i] == ' '){
            str[i] = '@';
        }
    }    
    cout << str;     
             
    return 0;
}