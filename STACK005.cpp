#include <bits/stdc++.h>
using namespace std;

int test(string s, stack<char> master){
    int dem = 0;
    for (char c : s){
        if (!master.empty()){
            if (c == ' A' && master.top() == 'B'){
                master.pop();
            }else if (c == 'B' && master.top() == 'A'){
                master.pop();
            }else if (c == 'C' && master.top() == 'D'){
                master.pop();
            }else if (c == 'D' && master.top() == 'C'){
                master.pop();
            }else{
                master.push(c);
            }
        }else{
            master.push(c);
        }
    }
    while (!master.empty()){
        master.pop();
        dem++;
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