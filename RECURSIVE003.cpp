#include <bits/stdc++.h>
using namespace std;
// kiểm tra xem số s có phải là số mũ của 4 hay không (4^x = s)

bool isPowerOfFour(double n) {
    if (n == 0){
        return false;
    }
    if ( n == 1){
        return true;
    }
    return isPowerOfFour(n / 4);
}


int main(){
    int t; cin>>t;
    double n;
    while(t--){
        cin>>n;
        if (isPowerOfFour(n)){
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
    }
}