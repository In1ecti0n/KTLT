#include <bits/stdc++.h>
using namespace std;
/*
bool test(long long n){//ham ktra so chinh phuong
    if (n == 0){
        return true;
    }
    float x = sqrt(n);
    long long a = x;
    if (x - a == 0){
        return true;
    }else{
        return false;
    }
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    long long a, b;
    
    while(n--){
        cin>>a>>b;
        long long count = 0;
        for (long long i = a; i <= b; i++){
            if (test(i)){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
*/

/*
bool test(long long n){
    if (n == 0){
        return true;
    }
    long long x = sqrt(n);
    return (x*x == n);
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    long long a, b;
    
    while(n--){
        cin>>a>>b;
        long long count = 0;
        for (long long i = a; i <= b; i++){
            if ( i % 10 == 2 || i%10 == 3 || i%10 == 7 || i%10==8){
                continue;
            }
            if (test(i)){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
*/

bool test(long long n){   // hàm kiểm tra số chính phương
    long long x = sqrt(n);
    return (x*x == n);
}
void result(long long a, long long b){   // hàm in ra số chính phương trong khoảng (a, b)
    int count = 0, a1;
    int b1 = sqrt(b);
    if(test(a))
    {
        a1 = sqrt(a);
    }else{
        a1 = sqrt(a) + 1;
    }
    for(int i = a1; i <= b1; i ++){
            count ++;
    }
    cout << count << endl;
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    long long a, b;
    while(n--){
        cin>>a>>b;
        result(a, b);
    }
}




