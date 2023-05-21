#include<bits/stdc++.h>
using namespace std;
             
int main(){
    char str[25];
    bool flag = true;
    cin >> str;
    int size = strlen(str);
    int i=0, j=size-1;
    while(i < j){
        if(str[i] == str[j]){
            i++;
            j--;
        }
        else{
            flag = false;
            break;
        }
    }
    if(flag == true){
        cout << "palindrome";
    }
    else{
        cout << "not a palindrome";
    }

    return 0;
}