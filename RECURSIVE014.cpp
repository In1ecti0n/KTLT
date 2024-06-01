#include <bits/stdc++.h>
using namespace std;

/*
int minimumSteps(int n, int test[]){
    if(n==1){
        return 0;
    }
    if(test[n]!=-1){
        return test[n];
    }
    int tmp = minimumSteps(n-1, test);
    if(n%2==0){
        tmp = min(tmp, minimumSteps(n/2, test));
    }
    if(n%3==0){
        tmp = min(tmp, minimumSteps(n/3, test));
    }
    test[n] = 1 + tmp;
    return test[n];
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int test[n + 1];
        for (int i = 0;  i <= n; i++){
            test[i] = -1;
        }
        cout<<minimumSteps(n, test)<<endl;
    }
}
*/



int dem = -1;
int giatridau;
int minimumSteps(int n) {
    if (n == 1){
        return dem;
    }
    int tmp = n - 1;
    if ( giatridau / 3 == tmp){
        dem = 0;
        return minimumSteps(giatridau / 3);
    }
    
    dem++;
    return minimumSteps(tmp);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int giatridau;
        cin>>giatridau;
        cout<<minimumSteps(giatridau)<<endl;
    }
}