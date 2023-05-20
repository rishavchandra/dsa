#include<bits/stdc++.h>
using namespace std;
             
int main(){
    char str[50];
    cin.getline(str, 50);
    int size = strlen(str);
    for(int i=0; i<size; i++){
        if(str[i] == ' '){
            str[i] = '@';
        }
    }    
    cout << str;     
             
    return 0;
}