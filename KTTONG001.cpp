#include <bits/stdc++.h>
using namespace std;
// Tinh tong cac so le trong khoang (l, r);
int main(){
    int t; cin>>t;
    long long l, r;
    while(t--){
        cin>>l>>r;
        if (l % 2 == 0){  //nếu l chẵn thì l++ cho l thành lẻ
            l++;
        }
        if (r % 2 == 0){  //r chăn thì cho r thành lẻ
            r--;
        }
        int sosohang = (r - l)/2 + 1;
        cout<<((r + l)*sosohang)/2<<endl;
    }
}