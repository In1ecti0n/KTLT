#include <bits/stdc++.h>
using namespace std;
// Cho một chuỗisbao gồm các ký tự chữ cái tiếng Anh, bao gồm cả chữ thường và chữ in hoa.
//Một chuỗi tốt là một chuỗi mà không có hai ký tự liền kềs[i]vàs[i + 1]thỏa mãn điều kiện sau:0 <= i <= s.length - 2
//s[i]là một chữ cái viết thường vàs[i + 1]là chữ cái cùng loại nhưng in hoa hoặc ngược lại.
//Để biến chuỗi trở nên tốt, bạn có thể chọn hai ký tự liền kề khiến chuỗi trở nên không tốt và loại bỏ chúng. Bạn có thể tiếp tục làm điều này cho đến khi chuỗi trở nên tốt. Trả về chuỗi sau khi biến nó trở nên tốt. Câu trả lời được đảm bảo là duy nhất dưới các ràng buộc đã cho.
//Lưu ý rằng một chuỗi rỗng cũng được coi là tốt.


// đúng hết testcase nhưng chưa tính đến trường hợp có chữ hoa ở đầu string s.
string test(string s, stack<char>master){
    string temp;
    if (s == ""){
        return s;
    }
    for (char c : s){
        if (c >= 'A' && c <= 'Z'){    // nếu là chữ hoa thì pop rồi xét đến kí tự tiếp theo trong s
            master.pop();
            continue;
        }
        master.push(c);   // chữ thường thì push
    }
    while(!master.empty()){      // hàm chèn phần tử trong stack vào string temp
        temp = master.top() + temp;      // cộng vào phía trước string temp
        master.pop();
    }
    return temp;
}


int main(){
    int t; cin >> t;
    cin.ignore();
    while (t --){
        stack<char>master;
        string s;
        getline(cin, s);
        cout<<test(s, master)<<endl;
    }
}