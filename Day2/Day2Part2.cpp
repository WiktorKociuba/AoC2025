#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll res = 0;
    ll in1 = 0, in2 = 1;
    while(in1 != 69 && in2 != 69 && in1 != in2){
        cin >> in1 >> in2;
        for(;in1<=in2;in1++){
            string num = to_string(in1);
                bool flag = true;
                for(int i = 1; i <= num.size()/2;i++){ 
                    flag = true;
                    string pat = "";
                    for(int h = 0; h < i; h++){
                        pat.push_back(num[h]);
                    }
                    for(int beg = i, len = i; beg < num.size(); beg+=i){
                        if(pat != num.substr(beg,len)){
                            flag = false;
                            break;
                        }
                    }
                    if(flag){
                        res += in1;
                        break;
                    }
                }
        }
    }
    cout << res;
    return 0;
}