#include <bits/stdc++.h>
using namespace std;
/*
int tohop(int n, int k){ //ham tinh to hop chap k cua n
    if (k == 0 || k == n){
        return 1;
    }
    if (k == 1){
        return n;
    }
    return tohop(n - 1, k) + tohop(n - 1, k - 1); //cthuc pascal
}

int main(){
    cin.tie(0);
    int n; cin>>n;
    int a, b, c;
    while(n--){
        cin>>a>>b>>c;
        cout<<tohop(a, b) % c <<endl;
    }
    return 0;
}
*/

/* n || k >> thì ko dùng được
long long giaithua(long long n){
    if (n == 1) return 1;
    return n * giaithua(n - 1);
}

long long tohop(long long n, long long k){
    if (k == 0 || k == n) return 1;
    return giaithua(n) / (giaithua(k) * giaithua(n - k));
}

int main(){
    int n; cin>>n;
    int a, b, c;
    while (n--){
        cin>>a>>b>>c;
        cout<<tohop(a, b) % c<<endl;
    }
    return 0;
}
*/

int test(int n){

}

int main(){
    int n; cin>>n;
    int a, b, c;
    while (n--){
        cin>>a>>b>>c;

    }
    return 0;
}