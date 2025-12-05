#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<pair<ll,ll>> ranges;

int main(){
    for(int i = 0; i < 192; i++){
        ll temp1, temp2;
        cin >> temp1 >> temp2;
        ranges.push_back({temp1,temp2});
    }
    ll id;
    cin >> id;
    ll res = 0;
    while(id!= 23){
        for(int i = 0; i < ranges.size(); i++){
            if(id >= ranges[i].first && id <= ranges[i].second){
                res++;
                break;
            }
        }
        cin >> id;
    }
    cout << res;
}