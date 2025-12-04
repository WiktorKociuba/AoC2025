#include <bits/stdc++.h>
using namespace std;

const int maxi = 138;
vector<char> tmap[maxi+2];
int movesx[8] = {1,-1,1,1,-1,-1,0,0};
int movesy[8] = {0,0,-1,1,-1,1,-1,1};

int main(){
    for(int i = 0; i < maxi+2; i++){
        for(int j = 0; j < maxi+2; j++){
            if(i==0||i==maxi+1||j==0||j==maxi+1){
                tmap[i].push_back('.');
                continue;
            }
            char temp;
            cin >> temp;
            tmap[i].push_back(temp);
        }
    }
    int res = 0;
    int curres = 0;
    do{
        curres = 0;
        for(int i = 0; i < maxi+2; i++){
            for(int j = 0; j < maxi+2; j++){
                if(tmap[i][j] == '@'){
                    int tcount = 0;
                    for(int k = 0; k < 8; k++){
                        if(tmap[i+movesx[k]][j+movesy[k]] == '@'||tmap[i+movesx[k]][j+movesy[k]] == 'X'){
                            tcount++;
                        }
                    }
                    if(tcount < 4){
                        res++;
                        curres++;
                        tmap[i][j] = 'X';
                    }
                }
            }
        }
        for(int i = 0; i < maxi+2; i++){
            for(int j = 0; j < maxi+2; j++){
                if(tmap[i][j] == 'X'){
                    tmap[i][j] = '.';
                }
            }
        }
    }while(curres != 0);
    cout << res;
}