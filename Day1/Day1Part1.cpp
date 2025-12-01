#include <bits/stdc++.h>
using namespace std;

int pos = 0;
int res = 0;
char side;
int howMuch;

int main(){
    string input = "R50";
    while(!input.empty()){
        side = input[0];
        howMuch = 0;
        for(int i = input.length()-1, j = 0; i >= 1; i--, j++){
            howMuch += (input[i]-'0')*pow(10,j);
        }
        if(side == 'R'){
            pos = (pos+howMuch)%100;
        }
        else{
            pos = pos-howMuch;
            while(pos < 0)
                pos += 100;
        }
        if(pos == 0){
            res++;
        }
        getline(cin,input);
    }
    cout << res;
}