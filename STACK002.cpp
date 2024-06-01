#include <bits/stdc++.h>
using namespace std;
/*Một chuỗi dấu ngoặc hợp lệ có thể là chuỗi trống"","(" + A + ")", hoặcA + B, trong đóAvàBlà các chuỗi dấu ngoặc hợp lệ, và+đại diện cho phép nối chuỗi.
Ví dụ"","()","(())()", và"(()(()))"đều là các chuỗi dấu ngoặc hợp lệ do có đầy đủ thẻ mở và thẻ đóng
Một chuỗi dấu ngoặc hợp lệ được gọi là nguyên thủy nếu nó không rỗng, và không tồn tại cách chia nó thànhs= A + B, vớiAvàBlà các chuỗi dấu ngoặc hợp lệ không rỗng.
Cho một chuỗi dấu ngoặc hợp lệs (1 <= s.length <= 10^5), hãy xem xét phân rã nguyên thủy của nó:s = P1+ P2 + ... + Pk, trong đóPilà các chuỗi dấu ngoặc hợp lệ nguyên thủy. Trả về chuỗi sau khi loại bỏ dấu ngoặc bên ngoài của mỗi chuỗi nguyên thủy trong phân rã nguyên thủy củas.*/
vector<char> temp;   // tạo một vector để lưu kí tự từ string s
void check(string s, stack<char>master){      // hàm kiểm tra từng phần tử trong s.   
    for (char c : s){
        if (c == '('){                        // Nếu là ( thì đẩy vào stack, đẩy vào vector;
            master.push(c);
            temp.push_back(c);
        }else{                                // nếu là ) thì pop khỏi stack phần tử cuối cùng, đẩy ) vào vector.
            master.pop();
            temp.push_back(c);
        }
        if (master.empty() && c == s[s.size() - 1]){     // Nếu stack trống thì đẩy dấu cộng vào vector (khi stack trống đồng nghĩa với việc kết thúc 1 phân rã nguyên thủy)
            temp.push_back('+');
        }
    }
}

void test(vector<char> temp){   // hàm tách dấu cộng và các dấu ngoặc gần dấu + khỏi vector.
    temp.pop_back();   // xóa dấu + thừa ở cuối
    temp.pop_back();   // xóa dấu ngoặc ở cuối
    temp.erase(temp.begin() + 0);   //  xóa dấu ngoặc ở đầu
    vector<char> last;    // vector chứa các phần tử kết quả.
    for (int i = 0; i < temp.size(); i++){
        if (temp[i + 1] == '+' || temp[i] == '+' || temp[i - 1] == '+'){   // nếu tại index, chính nó là dấu +; hoặc trước nó là dấu cộng (dấu ngoặc sát dấu +); hoặc sau nó là dấu + (dấu ngoặc sát dấu +) thì bỏ qua, ko thêm vào vector last
            continue;
        }else{
            last.push_back(temp[i]);
        }
    }
    for (int i = 0; i < last.size(); i++){
        cout<<last[i];
    }
}

int main(){
    int t; cin >>t;
    cin.ignore();
    while(t--){
        stack<char>master;
        string s;
        getline(cin, s);
        if (s == ""){  // chuỗi s nhập vào là trống
            cout<<"";
        }else{
            check(s, master);
            test(temp);
        }
        temp.clear();
        cout<<endl;
    }
}

