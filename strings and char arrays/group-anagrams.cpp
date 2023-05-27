#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        for(auto str: strs){
            string s = str;
            sort(s.begin(), s.end());
            mp[s].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto i=mp.begin(); i!=mp.end(); i++){
            ans.push_back(i->second);
        }
        return ans;
    }             
int main(){
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};      
             
    return 0;
}