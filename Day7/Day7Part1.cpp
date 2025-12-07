#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll res = 0;

vector<string> splits;
vector<bool> vis[200];

void beam(int x, int y){
    if(x >= splits.size() || y >= splits[0].size()){
        return;
    }
    if(vis[x][y] == true){
        return;
    }
    vis[x][y] = true;
    if(splits[x][y] == '^'){
        res++;
        beam(x+1,y-1);
        beam(x+1,y+1);
    }
    else{
        beam(x+1,y);
    }
}

int main(){
    string input;
    while(getline(cin,input)){
        splits.push_back(input);
        for(int i = 0; i < input.size(); i++){
            vis[splits.size()-1].push_back(false);
        }
    }
    for(int i = 0; i < splits[0].size(); i++){
        if(splits[0][i] == 'S'){
            beam(1,i);
            break;
        }
    }
    cout << res;
}