#include <bits/stdc++.h>
using namespace std;
string check(string ss){
    stack<char> s;
    for(int i=0;i<ss.length();i++){
        if(ss[i]!='*') s.push(ss[i]);
        else s.pop();
    }
    string result="";
    stack<char> kq;
    while(!s.empty()){
        kq.push(s.top());
        s.pop();
    }
    while(!kq.empty()){
        result+=kq.top();
        kq.pop();
    }
    return result;
}
int main() {
    int s; cin>>s;
    while(s--){
        string ss; cin>>ss;
        cout<<check(ss)<<endl;
    }
}