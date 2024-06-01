#include <bits/stdc++.h>
using namespace std;

bool primenumber(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i ==0){
            return false; 
        }
    }
    return true;
}
 
int uocso (int n){
    int temp;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            if (primenumber(i)){
                temp = i;
            }
        }
    }
    cout<<temp;
    return 0;
}
int main(){
    int n, arr[100]; cin>>n;
    for (int i = 0; i < n; i++){
        cin>>arr[100];
    }
    for (int i = 0; i < n; i++){
        uocso(arr[i]);
        cout<<endl;
    }
    return 0;
}