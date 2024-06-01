#include <bits/stdc++.h>
using namespace std;
// sai vì mot so testcase xóa dựa theo index thì sau khi xóa kích thước s thay đổi làm index tiếp theo bị sai
int test(string s, string t){
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '#'){
            s.erase(s.begin() + i);
            s.erase(s.begin() + (i - 1));
        }
    }
    for (int j = 0; j < t.size(); j++){
        if (t[j] == '#'){
            t.erase(t.begin() + j);
            t.erase(t.begin() + (j - 1));
        }
    }
    if ( t == s){
        return 1;
    }else{
        return 0;
    }
}


int main(){
    int n; cin>>n;
    string s, t;
    while(n--){
        cin>>s>>t;
        cout<<test(s, t)<<endl;
    }
    return 0;
    
}