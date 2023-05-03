#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1, s2;
        vector<int> v1, v2;
        vector<vector<int> > ans;
        for(int i=0; i<nums1.size(); i++){
            bool same = false;
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    same = true;
                    break;
                }
            }
            if(same == false) s1.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            bool same = false;
            for(int j=0; j<nums1.size(); j++){
                if(nums2[i] == nums1[j]){
                    same = true;
                    break;
                }
            }
            if(same == false) s2.insert(nums2[i]);
        }
        v1 = {s1.begin(), s1.end()};
        v2 = {s2.begin(), s2.end()}; 
        ans.push_back(v1);
        ans.push_back(v2);
        return ans;
    }

int main(){
    vector<int> v1{1, 2, 3};
    vector<int> v2{2, 4, 6};
    vector<vector<int>> ans = findDifference(v1, v2);
    for(int i=0; i<ans.size(); i++){
        cout << "[";
        for(auto j:ans[i]){
            cout << j << " ";
        }
        cout << "]";
    }
             
    return 0;
}