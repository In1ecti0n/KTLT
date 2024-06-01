#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    string s;
    while (n--){
        cin>>s;
        int dem = 0;
        for (int i = 0; i < s.size(); i++){
            if(s[i] == '-'){
                continue;
            }
            dem++;
        }
        cout<<dem<<endl;
    }
}