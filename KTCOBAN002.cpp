#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);
/*
bool test(long long n){//ham ktra so chinh phuong
    if (n == 0){
        return true;
    }
    float x = sqrt(n);
    long long a = x;
    if (x - a == 0){
        return true;
    }else{
        return false;
    }
}
*/
long long luythua(long long a, long long b){
    if (b == 0){
        return 1;
    }
    if (b % 2 == 0){
        return luythua(a, b/2) * luythua(a, b/2);
    }
    return a * luythua(a, b - 1);
}
bool test(long long n){ // ham ktra so chinh phuong
    long long x = sqrt(n);
    return (x*x == n);
}
bool check(long long n, int k){//ktra tung chu so
    int arr[20];
    for (int i = 0; i < k; i++){
        arr[i] = n % 10;
        n /= 10;
    }
    for (int i = 0; i < k; i++){
        if (test(arr[i]) == false){
            return false;
        }
    }
    return true;
}
int main(){
    fast;
    int n; cin>>n;
    while (n--){
        int k;
        cin>>k;
        int dem = 0;
        long long q = luythua(10, k);
        long long w = luythua(10, k - 1);
        for (long long i = w; i< q; i++){
            if (test(i) && check(i, k)){
                cout<<i<<endl;
                dem++;
                break;
            }
        }
        if (dem == 0){
            cout<<-1<<endl;
        }   
    }
    return 0;
}