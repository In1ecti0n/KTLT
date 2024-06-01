#include <bits/stdc++.h>
using namespace std;

int test (int n){
    int sum = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            sum += i;
        }
    }
    cout<<sum;
    return 0;
}
int main (){
    int n, arr[100];
    cin>>n;
    for (int i = 0; i < n; i ++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++){
        test(arr[i]);
        cout<<endl;
    }
    
    return 0;
}