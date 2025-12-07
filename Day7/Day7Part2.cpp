#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<string> splits;
vector<ll> vis[200];

void beam(int x, int y, int i, int j){
    if(x == splits.size()-1 || y == splits[0].size()-1){
        vis[x][y] += vis[i][j];
        return;
    }
    if(splits[x][y] == '^'){
        vis[x][y]+=vis[i][j];
        return;
    }
    else{
        beam(x+1,y,i,j);
    }
}

int main(){
    string input;
    while(getline(cin,input)){
        splits.push_back(input);
        for(int i = 0; i < input.size(); i++){
            vis[splits.size()-1].push_back(0);
        }
    }
    for(int j = 0; j < splits.size(); j++)
        for(int i = 0; i < splits[0].size(); i++){
            if(splits[j][i] == 'S'){
                vis[j][i] = 1;
                beam(j,i,j,i);
            }
            if(splits[j][i] == '^'){
                beam(j+1,i-1,j,i);
                beam(j+1,i+1,j,i);
            }
        }
    ll sum = 0;
    for(int j = 0; j < splits[splits.size()-1].size();j++){
        sum+=vis[splits.size()-1][j];
    }

    cout << sum;
}