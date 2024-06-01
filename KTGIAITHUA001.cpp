#include <bits/stdc++.h>
using namespace std;

void factorial(int n){
    int arr[500000], i, j, m = 1;
    long long r = 0, q;
    arr[0] = 1;
    for (int i = 2; i <= n; i++){
        for (j = 0; j < m; j++){
            q = r;
            r = (arr[j]*i+r)/10;
            arr[j]=(arr[j]*i+q)%10;
        }
        while (r > 0){
            arr[m] = r % 10;
            m++;
            r /=10;
        }       
    }
    for (i = m -1; i >= 0; i--){
        cout<<arr[i];
    }
}

int main() {
    int n, arr[100];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++){
        factorial(arr[i]);
        cout<<endl;
    }
    return 0;
} 