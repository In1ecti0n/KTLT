#include <bits/stdc++.h>
using namespace std;

bool prime(int n){  // hàm kiểm tra số nguyên tố
    if (n < 2){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int sumOfPrimes(int start, int end) { //hàm cộng số nguyên tố
    if (start > end){
        return 0;
    }else {
        if (prime(start)){
            return start + sumOfPrimes(start + 1, end);    // nếu n đầu là số nguyên tố thì trả về n đầu + tong( n đầu + 1, n cuối);
        }else{
            return 0 + sumOfPrimes(start + 1, end); // n ko phải là số nguyên tố thì trả về 0 + tong(n dau + 1, n cuối);
        }
    }
}

int main(){
    int t; cin>>t;
    int a, b;
    while(t--){
        cin>>a>>b;
        cout<<sumOfPrimes(a, b)<<endl;
    }
}