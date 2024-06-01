#include <bits/stdc++.h>
using namespace std;
//can bang 2 string
/*
void canbang(string x, string y){
    while (x.size() < y.size())
        x = '0' + x;
    while (y.size() < x.size())
        y = '0' + y;
    
}
string test(string x, string y){
    canbang(x, y);
    string dapan;
    int temp= 0; 
    for (int i = x.size() - 1; i >= 0; i--){
        int d = x[i] + y[i] + temp;
        temp = d /10;
        dapan[i] = d % 10;
    }
    return dapan;
}

int main(){
    int n; cin>>n;
    string x, y;
    while (n--){
        cin>>x>>y;
        cout<<test(x, y);
    }
}
Cho hai số nguyên không âm a và b có số chữ số không quá 100. Hãy tính tổng hai số.
*/

// cân bằng 2 string cho cùng = số chữ số
void canbang(string &x, string &y){// truyền tham chiếu, thay đổi giá trị của string x, y
    char z = '0';
    while (x.size() < y.size()){
        x = z + x;
    }
    while (y.size() < x.size()){
        y = z + y;
    }
}
//tính tổng
string test(string x, string y){
    canbang(x, y);
    string dapan;
    int temp= 0; 
    for (int i = x.size() - 1; i >= 0; --i){
        int d = (x[i] - '0') + (y[i] - '0') + temp;
        
        temp = d / 10;
        dapan = char(d % 10 + '0') + dapan;
    }
    
    if (temp)
        dapan = '1' + dapan;
        
    return dapan;
}

int main(){
    int n; cin>>n;
    string x, y;
    while (n--){
        cin>>x>>y;
        cout<<test(x, y)<<endl;
    }
}