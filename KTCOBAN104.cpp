#include <bits/stdc++.h>
using namespace std;
int replace1(int n){
    string nhamso3 = to_string(n);   //ham chuyen int thanh string
    for (char &c : nhamso3){   //vong lap dua tren pham vi;  tham chieu c den tung phan tu trong string
        if (c == '5'){
            c = '3';
        }
    }
    return stoi(nhamso3); //ham chuyen string thanh int 
}

int replace2(int n){
    string nhamso5 = to_string(n);
    for (char &c : nhamso5){
        if (c == '3'){
            c = '5';
        }
    }
    return stoi(nhamso5);
}
int main(){
    int t;
    cin>>t;
    long long a, b;
    while (t--){
        cin>>a>>b;
        cout<<replace1(a) + replace1(b)<<" "<< replace2(a) + replace2(b)<<endl;
    }
    
}