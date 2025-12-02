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
            if(num.size() % 2 == 0){
                bool flag = true;
                for(int beg = 0, mid = num.size()/2; mid < num.size(); beg++, mid++){
                    if(num[beg] != num[mid]){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    res += in1;
                }
            }
        }
    }
    cout << res;
    return 0;
}