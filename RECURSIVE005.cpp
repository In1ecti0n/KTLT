#include <bits/stdc++.h>
using namespace std;

double myPow(double x, int n) { // hàm lũy thừa x^n với n là số nguyên, x khác 0 hoặc x và n không đồng thời bằng 0;
    if (n == 0){     
        return 1;
    }
    if (n > 0){
        if ( n % 2 != 0 && x < 0){           //(-x)^n lẻ thì kết quả âm;
            return -x * myPow(x, n - 1);
        }else{
            return x * myPow(x, n - 1);
        }
    }
    if (n < 0){       //n < 0 thì kêt quả có dạng 1/(x^n)
        if ( x < 0 && n % 2 != 0){            //(-x)^n lẻ thì kết quả âm;
            return -1/x * myPow(x, n + 1);     
        }else{
            return 1/x * myPow(x, n + 1);
        }
    }
    return 1;        // return để hàm trả về 1 cái gì đó, nếu ko, vẫn chạy được nhưng có lỗi do trình biên dịch không chắc hàm đệ quy có chạy hết và trả về 1 cái j đó hay ko.
}


int main(){
    int t; cin>>t;
    double x;
    int n;
    while(t--){
        cin>>x>>n;
        cout<<myPow(x, n)<<endl;
    }
}