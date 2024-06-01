#include <bits/stdc++.h>
using namespace std;
const long long prime = 1000000007; //10^9 + 7, ham luu vv 1 gia tri

//su dung thuat toan modulo (dapan*a)%c = (dapan%c)*(a%c)%c
void test(long long a, long long b){
    long long dapan = 1;
    for (int i = 1; i <= b; i++){
        dapan *= a;
        dapan %= prime;
    }
    cout<<dapan<<endl;
}

//ham chinh 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin>>n;
    long long a, b;
    while (n--){
        cin>>a>>b;
        test(a, b);
    }
    return 0;
}


/*
#include<iostream>
#include<cmath>
const long long MOD = 1000000007;
using namespace std;
long long powMod(long long base, long long exponent, long long mod) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent /= 2;
    }
    return result;
}
int main(){
        int a, n;
        a = 5; n=7;
        long long result = powMod(a,n,MOD);
        cout << result << endl;
    
    return 0;
}
*/