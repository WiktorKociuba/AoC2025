#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    getline(cin,input);
    int res = 0;
    while(input != ""){
        int max1 = -1, max2 = -1, ind1 = 0, ind2 = 0;
        for(int i = 0; i < input.size()-1; i++){
            if(input[i]-'0' > max1){
                max1 = input[i]-'0';
                ind1 = i;
            }
        }
        for(int i = ind1+1; i < input.size(); i++){
            if(input[i]-'0' > max2){
                max2 = input[i]-'0';
                ind2 = i;
            }
        }
        res += max1*10 + max2;
        getline(cin,input);
    }
    cout << res;
}