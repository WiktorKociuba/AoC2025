#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string input;
    getline(cin,input);
    ll res = 0;
    while(input != ""){
        ll bat[13] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
        ll indx[13] = {-1,0,0,0,0,0,0,0,0,0,0,0,0};
        for(ll j = 11, ind = 1; j >= 0; j--, ind++){
            for(ll i = indx[ind-1]+1; i < input.size()-j; i++){
                if(input[i]-'0' > bat[ind]){
                    bat[ind] = input[i]-'0';
                    indx[ind] = i;
                }
            }
        }
        ll num = 0;
        for(ll i = 12, powto = 0; i > 0; i--, powto++){
            num += bat[i]*pow(10,powto);
        }
        res += num;
        getline(cin,input);
    }
    cout << res;
}