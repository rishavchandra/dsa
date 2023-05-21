#include<bits/stdc++.h>
using namespace std;
             
int main(){
    vector<string> timePoints{"23:59","00:00"};
    vector<int> minutes;
        int minDiff = INT_MAX;
        for(int i=0; i<timePoints.size(); i++){
            string curr = timePoints[i];
            int hrs = stoi(curr.substr(0, 2));
            int mins = stoi(curr.substr(3, 2));
            minutes.push_back(hrs*60 + mins);
        }
        sort(minutes.begin(), minutes.end());
        for(int i=0; i<minutes.size()-1; i++){
            if((minutes[i+1] - minutes[i]) < minDiff){
                minDiff = minutes[i+1] - minutes[i];
            }
        }
        int lastDiff1 = minutes[0]+1440 - minutes[minutes.size()-1];
        int lastDiff2 = minutes[minutes.size()-1] - minutes[0];
        int lastDiff = min(lastDiff, lastDiff2);
        if(lastDiff < minDiff) minDiff = lastDiff;  
        cout << minDiff;      
             
    return 0;
}