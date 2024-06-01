#include <bits/stdc++.h>
using namespace std;

int dem = 0;
int logarit(int n){
    if (n == 1){
        return dem;
    }else{
        dem++;
        return logarit(n / 2);
    }
}

int dem1 = 0;
int test(int q = 2, int w ){
    if (w == 0) return 1;
    
    
}


int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, a; cin>>n;
    while (n--){
        cin>>a;

    }
    return 0;
}