#include<bits/stdc++.h>
using namespace std;

string convert(string s, int numRows) {
    vector<string> zigzag(numRows);
    int i=0, row=0;
    bool direction=1;
    while(true){
        if(direction){
            while(row<numRows && i<s.size()){
                zigzag[row++].push_back(s[i++]);
            }
            row = numRows-2;
        }
        else{
            while(row>=0 && i<s.size()){
                zigzag[row--].push_back(s[i++]);
            }
        row = 1;
        }
        if(i>s.size()) break;
        direction = !direction;
    }
    string ans="";
    for(int i=0; i<zigzag.size(); i++){
        ans += zigzag[i];
    }
    return ans;
}             
int main(){
    cout << convert("PAYPALISHIRING", 3);         
             
    return 0;
}