#include<bits/stdc++.h>
using namespace std;
             
int main(){
    string s;
    string sub;
    cin >> s >> sub;
    int pos = s.find(sub);
    while(pos != string::npos){
        s.erase(pos, sub.length());
        pos = s.find(sub);
    }
    cout << s;       
             
    return 0;
}