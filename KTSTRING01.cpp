#include <bits/stdc++.h>
using namespace std;

int test(string s1, string s2){
    if (s1 == "" || s2 == ""){
        return -2;
    }
    if (s2.find(s1) != string::npos){
        return s2.find(s1);
    }else{
        return -1;
    }
}
int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string str, s1, s2;
        getline(cin, str);
        for (int i = str.find_first_of("\"") + 1; i < str.find(",") - 1; i++){
            s1 += str[i];
        }
        string temp = str.substr(str.find(","));
        for (int i = temp.find_first_of("\"") + 1; i < temp.size() - 1; i++){
            s2 += temp[i];
        }
        int x = test(s1, s2);
        if (x == -2){
            cout<<0<<endl;
        }else{
            if (x == -1){
                cout<<-1<<endl;
            }else{
                cout<<x<<endl;
            }
        }
    }
}

/*void test(string s1, string s2){
    if (s1 == "" || s2 == ""){
        cout<<0<<endl;
        return;
    }
    if (s2.find(s1) != string::npos){
        cout<<s2.find(s1)<<endl;
    }else{
        cout<<-1<<endl;
    }
}
int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string str, s1, s2;
        getline(cin, str);
        for (int i = str.find_first_of("\"") + 1; i < str.find(",") - 1; i++){
            s1 += str[i];
        }
        string temp = str.substr(str.find(","));
        for (int i = temp.find_first_of("\"") + 1; i < temp.size() - 1; i++){
            s2 += temp[i];
        }
        test(s1, s2);
    }
}
*/