#include <bits/stdc++.h>
using namespace std;

void test(int n){
    if (n > 9){
        cout<<"123456790";
        test(n-9);
        cout<<"0987654321";
    }else{
        if (n == 1){
            return;
        }
        for (int i = 1; i <= n; i++){
            cout<<i;
        }
        for (int i = n - 1; i >1; i--){
            cout<<i;
        }
        return;
    }

}

void test2(int n){
    if (n == 1){
        cout<<"1";
    }else{
        for (int i = 1; i <= n; i++){
            cout<<i;

        }
        for (int i = n - 1; i >0; i--){
            cout<<i;
        }
    }
}



int main (){
    int t; cin>>t;
    int n;
    while (t--){
        
        cin>>n;
        if (n > 9){
            test(n);
        }else{
            test2(n);      
        }
        cout<<endl;
    }
}