#include <bits/stdc++.h>
using namespace std;
// hàm tách các chữ số
int test1 (int n){
    int arr[100];
    int sum = 0;
    int dem = 0;
    while (n>0){
        arr[dem] = n % 10;
        dem++;
        n /= 10;
    }
    for (int i = 0; i < dem; i++){
        sum = sum + pow(arr[i], dem);
    }
    return sum;

}
int main(){
    ios_base::sync_with_stdio(false);
    int a; cin>>a;
    int mang[100];
    for (int i = 0; i < a; i++){
        cin>>mang[i];
    }
    for (int i = 0; i < a; i++){
        if (mang[i] == test1(mang[i])){
            cout<<1<<endl; 
        }else{
            cout<<0<<endl;
        }
    }
    return 0;
}
