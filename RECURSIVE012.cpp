#include<bits/stdc++.h>
using namespace std;

string s;
bool isPalindrome(string str, int low, int high) {
    char c;
    if (low >= high){
        return s == str;
    }
    c = str[low];       
    str[low] = str[high];
    str[high] = c;
    return isPalindrome(str, low + 1, high - 1);
}


int main(){
    int n; cin>>n;
    while(n--){
        cin>>s;
        if (isPalindrome(s, 0, s.size() - 1)){
            cout<<'1'<<endl;
        }else{
            cout<<'0'<<endl;
        }
        s.erase();
    }
}