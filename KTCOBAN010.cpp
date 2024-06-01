#include <bits/stdc++.h>
using namespace std;
const long long prime = 1000000007; //10^9 + 7, ham luu vv 1 gia tri

//su dung thuat toan modulo (dapan*a)%c = (dapan%c)*(a%c)%c
//thuat toab toi uu hon (tach 3 truong hop b chan, le, = 0)j 
//https://vnoi.info/wiki/translate/he/Number-Theory-3


//ham tinh binh phuong
long long dequy(long long n){
    return n*n;
}

//ham tinh chia phan du
long long test(long long a, long long b){
    if (b == 0){
        return 1;
    }else{
        if (b % 2 == 0){
            return dequy(test(a, b/2)) % prime;
        }else{
            return a * (dequy(test(a, b/2)) % prime) % prime;

        }
    }
}


//ham chinh 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin>>n;
    long long a, b;
    while (n--){
        cin>>a>>b;
        cout<<test(a, b)<<endl;
    }
    return 0;
}