#include <bits/stdc++.h>
using namespace std;

string test(string s, queue<char> master){
    string temp;
    for (char c : s){
        master.push(c);
    }
    while(!master.empty()){
        temp = master.front() + temp;
        master.pop();
    }
    return temp;
}


int main(){
    int t; cin >> t;
    while (t -- ){
        string s; 
        cin >> s;
        queue<char> master;
        cout<<test(s, master)<<endl;
    }
}