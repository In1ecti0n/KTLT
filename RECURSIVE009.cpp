// Tìm số fibo tại vị trí thứ n;
#include <bits/stdc++.h>
using namespace std;
/*
int fibonacci(int n){  // Cách nhanh nhất
    if (n <= 1){
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}


int main(){
    int t; cin>>t;
    int n;
    while (t--){
        cin>>n;
        cout<<fibonacci(n)<<endl;
    }
}
*/


int fibonacci(int n, int sotruoc, int sosau) {    // Cách chậm hơn
    if (n <= 1){
        return sosau;
    }
    int temp = sosau;
    sosau += sotruoc;
    return fibonacci(n - 1, temp, sosau);
}

int main(){
    int t; cin>>t;
    int n;
    while(t--){
        cin>>n;
        cout<<fibonacci(n, 0, 1)<<endl;      // cho 2 số đầu là 0 và 1, tính bắt đầu thì số thứ 3 của dãy fibo 
    }

}