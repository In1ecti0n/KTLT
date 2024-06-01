#include <bits/stdc++.h>
using namespace std;

string test(string s){   // dùng string s làm stack (string có push_back và pop_back)
    string temp;
    if (s == ""){
        return s;
    }
    for (char c : s){
        if (c == '#'){
            if (temp.empty()){
                continue;
            }else{
                temp.pop_back();
            }
        }else{
            temp.push_back(c);
        }
    }
    return temp;
}   



int main(){
    int t; 
    cin >> t;
    cin.ignore();
    while(t--){
        string s, t;
        cin>>s>>t;
        if (test(s) == test(t)){
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
    }
}