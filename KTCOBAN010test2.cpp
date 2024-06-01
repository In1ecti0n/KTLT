#include <bits/stdc++.h>
using namespace std;
const long long prime = 1000000007; //10^9 + 7, ham luu vv 1 gia tri
// tinh luy thua du
//su dung thuat toan modulo (dapan*a)%c = (dapan%c)*(a%c)%c
//thuat toab toi uu hon (tach 3 truong hop b chan, le, = 0)j 
//https://vnoi.info/wiki/translate/he/Number-Theory-3


//ham tinh binh phuong
long long binhphuong(long long n){
    return n*n;
}

long long test1(long long a,  long long b){
    long long dapan = 1;
    for (int i = 1; i <= b; i++){
        dapan *= a;
        dapan %= prime;
    }
    return dapan;
}

//ham tinh chia phan du
long long test(long long a, long long b){
    if (b == 0){
        return 1;
    }else{
        if (b % 2 == 0){
            return binhphuong(test1(a, b/2)) % prime;
        }else{
            return a * (binhphuong(test1(a, b/2)) % prime) % prime;

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



/*
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long power(long long base, long long exp)
{
    if (exp == 0)
        return 1;
    else if (exp % 2 == 0)
    {
        long long half = power(base, exp / 2);
        return (half * half) % mod;
    }
    else
    {
        return (base * (power(base, exp - 1))) % mod;
    }
}
int t;
long a, n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> a >> n;
        cout << power(a, n) << "\n";
    }
    return 0;
}
*/