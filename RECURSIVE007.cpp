#include <bits/stdc++.h>
using namespace std;

void reverse_String(string &text, int start, int end) {  //hàm đảo ngược chuỗi( chuỗi x, index = đầu, index = sau)
    char c;
    if ( start >= end ){    // ví dụ ( 0, 1 , 2, 3) = {numd} (u = 1; m = 2) đệ quy tiếp theo là u = 2, m = 1 suy ra kết thúc hàm
        return;
    }
    c = text[start];       
    text[start] = text[end];
    text[end] = c;
    return reverse_String(text, start + 1, end - 1); //tăng dần đầu chuỗi, giảm dần cuối chuỗi.
}


int main(){
    int t; cin>>t;
    string c;
    while(t--){
        cin>>c;
        reverse_String(c, 0, c.size() - 1); // bắt đầu bằng (đầu chuỗi, cuối chuỗi)
        cout<<c<<endl;
    }
}
