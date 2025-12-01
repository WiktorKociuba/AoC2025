#include <bits/stdc++.h>
using namespace std;

int pos = 50;
int res = 0;
char side;
int howMuch;
bool ifmin = false;
string input;

int main(){
    getline(cin,input);
    while(!input.empty()){
        side = input[0];
        howMuch = 0;
        ifmin = false;
        for(int i = input.length()-1, j = 0; i >= 1; i--, j++){
            howMuch += (input[i]-'0')*pow(10,j);
        }
        if(side == 'R'){
            while(howMuch != 0){
                pos++;
                howMuch--;
                if(pos >= 100){
                    pos-=100;
                }
                if(pos == 0){
                    res++;
                }
            }
        }
        else{
            while(howMuch != 0){
                pos--;
                howMuch--;
                if(pos < 0){
                    pos+=100;
                }
                if(pos == 0){
                    res++;
                }
            }
        }
        getline(cin,input);
    }
    cout << res;
}