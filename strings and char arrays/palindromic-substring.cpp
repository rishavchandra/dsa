#include<bits/stdc++.h>
using namespace std;

int expandAroundIndex(string s, int i, int j){
        int count = 0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count = 0;
        for(int i=0; i<s.length(); i++){
            int odds = expandAroundIndex(s, i, i);
            count += odds;
            int evens = expandAroundIndex(s, i, i+1);
            count += evens;
        }
        return count;
    }             
int main(){
    string s = "aaa";
    cout << countSubstrings(s);
             
    return 0;
}