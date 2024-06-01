#include <bits/stdc++.h>
using namespace std;
// Bạn được cho một chuỗi ngoặc đơns. Trong một bước di chuyển, bạn có thể chèn một dấu ngoặc tại bất kỳ vị trí nào trong chuỗi. Hãy trả về số lần chèn tối thiểu cần thiết để biếnsthành một chuỗi hợp lệ
int test(string s, stack<char> master){
    if (s == ""){   // chuỗi trống thì vốn đã hợp lệ nên số bước thêm ngoặc để hợp lệ = 0;
        return 0;
    }
    int dem = 0;    // đếm số lần thêm ngoặc
    for (char c : s){     
        if (c == '('){     // chỉ thêm ( vào stack nên chắc chắn ko có ). Trường hợp stack trống hoặc rỗng đều thêm ( vào stack
            master.push(c);
            dem++;          // tăng biến đếm tương ứng vs 1 ngoặc đóng giả định để đóng ngoặc mở. 
        }else{
            if (master.empty()){     // nếu stack trống nghĩa là chắc chắn phải thêm 1 ngoặc mở
                dem++;
            }else{
                master.pop();      // nếu có ngoặc đóng thật tương ứng với ngoặc mở trước nó thì pop ngoặc mở
                dem--;             // trừ ngoặc đóng giả định
            }
        }
    }
    return dem;
}



int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >>s;
        stack<char> master;
        cout<<test(s, master)<<endl;   
    }
}