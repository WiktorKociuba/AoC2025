#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<pair<ll,ll>> ranges;

int main(){
    ll res = 0;
    for(int i = 0; i < 192; i++){
        ll temp1, temp2;
        cin >> temp1 >> temp2;
        ranges.push_back({temp1,temp2});
    }
    for(int i = 0; i < 192; i++){
        for(int j = 0; j < 192; j++){
            if(i == j){
                continue;
            }
            if(ranges[i].first >= ranges[j].first && ranges[i].first <= ranges[j].second){
                ranges[i].first = ranges[j].second+1;
            }
            if(ranges[i].second >= ranges[j].first && ranges[i].second <= ranges[j].second){
                ranges[i].second = ranges[j].first-1;
            }
        }
    }
    sort(ranges.begin(),ranges.end());
    for(int i = 0; i < 192; i++){
        ll temp = ranges[i].second-ranges[i].first+1;
        if(temp > 0){ // != ranges[i].second > ranges[i].first
            res += temp;
        }
    }
    cout << res;
}