#include <bits/stdc++.h>
using namespace std;
// ham tinh luy thua số lớn
/*
int power(int x, int n){
    if (n == 0){
        return 1;
    }
    return x * power(x, n - 1);
}

*/

long long nhan(long long n){
    return n*n;
}

long long luythua(long long n, long long k){
    if (k == 0) return 1;
    else{
        if ( k % 2 == 0){
            return nhan(luythua(n, k /2));  //(a^b/2)*(a^b/2)
        }else{
            return n * (nhan(luythua(n , k / 2))); //a*(a^b/2)*(a^b/2)
        }
        
    }
}