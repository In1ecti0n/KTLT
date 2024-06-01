#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    if (n <= 1){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int uocsoprime(int n){
    int dem = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0 && prime(i)){
            dem++;
        }
    }
    return dem;
}
int main(){
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++){
        cout<<uocsoprime(arr[i])<<endl;
    }
    return 0;
}
