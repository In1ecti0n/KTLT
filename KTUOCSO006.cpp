//Hai số nguyên dương a và b được gọi là cặp số bạn bè nếu như tổng các ước số nhỏ hơn chính nó của số này đúng bằng số kia và ngược lại.
#include <bits/stdc++.h>
using namespace std;
long long sumuocso(long long x){
    long long count = 0;
    for (int i = 1; i <= sqrt(x); i++){
        if (x % i == 0){
            count += i;
            if (x / i != i){
            count = count + (x / i);
            }
        }
        
    }
    return count - x;
}
/*long long sumuocso(long long x){
    long long count = 0;
    for (int i = 1; i <= sqrt(x); i++){
        if (x % i == 0){
            if ( x / i == i){
                count += i;
            }else{
                count = count + i + (x / i);
            }
        }
    }
    return count - x;
}*/

int main(){
    int t; cin>>t;
    long long a, b;
    while(t--){
        cin>>a>>b;
        if (sumuocso(a) == b || sumuocso(b) == a){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}