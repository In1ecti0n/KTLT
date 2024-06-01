#include <bits/stdc++.h>
using namespace std;

bool primenumber(int n){
    int dem = 0;
    if ( n < 2){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            dem++;
        }
    }
    if (dem == 0){
        return true;
    }else{
        return false;
    }
}

int main (){
    int n, temp;
    long long arr[10000];
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 1; j < arr[i]; j++){
            if (arr[i] % j == 0){
                if (primenumber(j)){
                    temp = j;
                }
            }
        }
        cout<<temp<<endl;
    }
    return 0;
}
