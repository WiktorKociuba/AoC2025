#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll input;
    vector<ll> inputs;
    cin >> input;
    do{
        inputs.push_back(input);
        cin >> input;
    }while(input!=19999999);
    ll n = inputs.size()/4;
    ll res = 0;
    for(ll i = 0; i < n; i++){
        char sym;
        ll locres = 0;
        cin >> sym;
        if(sym == '+'){
            locres += inputs[i]+inputs[i+n]+inputs[i+2*n]+inputs[i+3*n];
        }
        if(sym == '*'){
            locres += inputs[i]*inputs[i+n]*inputs[i+2*n]*inputs[i+3*n];
        }
        res += locres;
    }
    cout << res;
}