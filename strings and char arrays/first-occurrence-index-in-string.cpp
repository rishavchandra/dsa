#include<bits/stdc++.h>
using namespace std;
             
int main(){
    string haystack;
    string needle;
    cin >> haystack;
    cin >> needle;
    int index = haystack.find(needle);
    if(index != string::npos){
        cout << index;
    }    
    else{
        cout << -1;
    }
             
    return 0;
}