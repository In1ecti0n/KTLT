#include <bits/stdc++.h>
using namespace std;
// đúng 8/10 test (vd test aadadaad bị sai)
/*
int test(string s, queue<char> sex){
    for (char c : s){
        if (sex.empty()){
            sex.push(c);
        }else{
            if (sex.front() == c){
                sex.pop();
            }else{
                sex.push(c);
            }
        }
    }
    queue<char> temp;    // tạo 1 queue để duyệt lần 2 queue ban đầu, tách queue ban đầu và thêm vào queue temp.
    while(!sex.empty()){
        if (temp.empty()){
            temp.push(sex.front());
            sex.pop();
        }else{
            if (sex.front() == temp.front()){
                temp.pop();
                sex.pop();
            }else{
                temp.push(sex.front());
                sex.pop();
            }
        }

    }
    if (!temp.empty()){
        char x = temp.front();
        return s.find_first_of(x);
    }else{
        return -1;
    }
}
*/

int test(string s){
    int arr[26];
    for (int i = 0; i < 26; i++){
        arr[i] =0;
    }
    for (int i = 0; i < s.size(); i++){
        arr[s[i] - 'a']++;         // a = 97 suy ra a - a  = 0 index ứng vs a; b - a = 1 index ứng với b;
    }
    for (int i = 0; i < s.size(); i++){
        if (arr[s[i] - 'a'] == 1){
            return i;
        }
    }
    return -1;
}



int main(){
    int t; cin >> t;
    while(t -- ){
        string s;
        cin >>s;
        queue<char> sex;
        cout<<test(s)<<endl;
    }
}