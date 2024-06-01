#include <bits/stdc++.h>
using namespace std;

long long mod  = 1e9 + 7;
int countGoodNumbers(long long n) {     // hàm tính tổng các số tốt (dùng xác suất); giả sử chuỗi số có 4 chữ số là abcd; a ở vị trí 0 (chẵn) nhận 5 trường hợp (0,2,4,6,8),  b ở vị trí 1(lẻ) nhận 4 trường hợp (2,3,5,7) từ đó ta có 5*4*5*4 = 400;
    long long sum = 1;
    for (int i = 0; i < n; i++){
        if (i % 2 == 0){
            sum *= 5;
        }else{
            sum *= 4;
        }
        sum %= mod;
    }
    return sum;
}

int main (){
    int t; cin>>t;
    long long n;
    while(t--){
        cin>>n;
        if (n == -1){
            cin>>n;
        }
        cout<<countGoodNumbers(n)<<endl;
    }
}