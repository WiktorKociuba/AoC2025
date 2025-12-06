#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string input;
    vector<string> inputs;
    for(int i = 0; i < 5; i++){
        getline(cin, input);
        inputs.push_back(input);
    }
    char sym = ' ';
    ll res = 0;
    vector<ll> numbs;
    for(int i = 0; i < inputs[0].size(); i++){
        string temp = "";
        temp += inputs[0][i];
        temp += inputs[1][i]; 
        temp += inputs[2][i];
        temp += inputs[3][i];
        if(inputs[4][i] != ' '){
            sym = inputs[4][i];
        }
        if(temp != "    "){
            ll num = 0;
            for(int i = temp.size()-1, j = 0; i >= 0; i--, j++){
                if(temp[i] == ' '){
                    j--;
                    continue;
                }
                ll dig = (temp[i]-'0');
                num += dig*pow(10,j);
            }
            numbs.push_back(num);
        }
        else{
            if(sym == '*'){
                ll locres =1;
                for(int i = 0; i < numbs.size(); i++){
                    locres *= numbs[i];
                }
                res += locres;
            }
            if(sym == '+'){
                ll locres = 0;
                for(int i = 0; i < numbs.size(); i++){
                    locres += numbs[i];
                }
                res += locres;
            }
            numbs.clear();
        }
    }
    cout << res;
}