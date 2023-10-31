#include <bits/stdc++.h>
using namespace std;

long long factorial(long long n){
    if (n == 1) return 1;
    return n*factorial(n-1);
}

long long tuso(long long n){
    int temp1 = 2*n;
    return factorial(temp1);
}

long long mauso(long long n){
    int temp2 = n + 1;
    return factorial(temp2)*factorial(n);
}

int main(){
    int n, arr[100];
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++){
        cout<<tuso(arr[i])/mauso(arr[i])<<endl;
    }
    return 0;
}