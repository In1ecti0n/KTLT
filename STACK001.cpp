
#include <bits/stdc++.h>
using namespace std;
//Cho một chuỗischỉ chứa các ký tự'(',')','{','}','['và']', hãy xác định xem chuỗi đầu vào có phải là ngoặc hợp lệ không
int test(string s, stack<char> ster){
    if (s.size() % 2 != 0){     // kiểm tra nếu chuỗi s không chia hết cho 2 (nghĩa là chuỗi s sẽ lẻ 1 dấu ngoặc, chuỗi sẽ không hơpk lệ)
            return 0;
    }
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
            ster.push(s[i]);
        }else{
            if (ster.empty()){   // nếu stack trống mà có kí tự đóng ngoặc thì sai vì không có kí tự mở ngoặc để đóng
                return 0;
            }else{
                if (s[i] == ')' && ster.top() != '('){         // đóng ngoặc khác loại kí tự 
                    return 0;
                }else if (s[i] == ']' && ster.top() != '['){
                    return 0;
                }else if (s[i] == '}' && ster.top() != '{'){
                    return 0;
                }else{
                    ster.pop();   // đóng ngoặc cùng loại kí tự thì pop
                }
            }

        }
    }
    return ster.empty();     // nếu trường hợp ((() thì sau khi pop, vẫn còn (( và stack ko trống, chuõi ko được đóng hết nên ko hợp lệ
}
/*int test(string s, stack<char> ster){
    if (s.size() % 2 != 0){    
            return 0;
    }
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
            ster.push(s[i]);
        }else{
            if (ster.empty()){   
                return 0;
            }else{
                if (s[i] == ')' && ster.top() == '('){         
                    ster.pop();
                }else if (s[i] == ']' && ster.top() == '['){
                    ster.pop();
                }else if (s[i] == '}' && ster.top() == '{'){
                    ster.pop();
                }else{
                    return 0;   
                }
            }

        }
    }
    return ster.empty();    
}*/
/*
int test(string s, stack<char> master){
    if (s.size() % 2 != 0){
            return 0;
    }
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
            master.push(s[i]);
        }else if (s[i] == ')'){
            if (master.empty() || master.top() != '('){
                return 0;
            }else{
                master.pop();
            }
        }else if (s[i] == '}') {
            if (master.empty() || master.top() != '{'){
                return 0;
            }else{
                master.pop();
            }
        }else if (s[i] == ']' ){
            if (master.empty() || master.top() != '['){
                return 0;
            }else{
                master.pop();
            }
        }
        
    }
    return master.empty();
    
}
*/
int main (){
    int t; cin >> t;
    while(t --){
        stack<char> master;
        string s;
        cin >> s;
        cout<<test(s, master)<<endl;
    }
}


/* Cach 2 ko dung ham
int main(){
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        if (s.size() % 2 != 0){
            cout<<0<<endl;
            continue;
        }
        stack<char> master;
        bool flag = true;    // đặt cờ để xét trường hợp khi break vòng lặp
        for (int i = 0; i < s.size(); i++){
            if (master.empty()){    // trường hợp stack trống
                if (s[i] == ')' || s[i] == ']' || s[i] == '}'){
                    flag = false;
                    break;
                }
                master.push(s[i]);
            }else{                  // stack không trống
                if (s[i] == '(' || s[i] == '[' || s[i] == '{'){     // mở ngoặc 
                    master.push(s[i]);
                }else{                                              // đón ngoặc
                    if (s[i] == ')' && master.top() == '('){
                        master.pop();
                    }else if (s[i] == ']' && master.top() == '['){
                        master.pop();
                    }else if (s[i] == '}' && master.top() == '{'){
                        master.pop();
                    }else{                                          // nếu ko có dấu đóng ngoặc trùng mở ngoặc cùng loại thì chuỗi ko hợp lệ, in 0, break vòng lặp for (ko xét tiếp chuỗi hiện tại nữa)
                        flag = false;
                        break;
                    }
                }
            }

        }
        if (master.empty() && flag){    // nếu ko có cờ, thì trường hợp stack trống, dấu ngoặc đóng như trên thì sẽ break, stack vẫn empty, kết quả ra 1 (sai); thêm flag để đánh giấu dù stack trống nhưng kí tự đầu lại là đóng ngoặc
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
    }
}
*/