#include <bits/stdc++.h>
using namespace std;
/*
vector<int> x;
long long arraySum(vector<int> vct, int size) {
    if (size == 0){
        return 0;
    }
    return vct[size - 1] + arraySum(x, size - 1);
}


int main(){
    int t; cin>>t;
    string s;
    while (t--){
        cin>>s;
        string temp;
        stringstream ss;
        ss << s;
        while (getline(ss, temp, ',')){
            x.push_back(stoi(temp));
        }
        cout<<arraySum(x, x.size())<<endl;
        x.clear();
    }
}

*/


vector<int> x;
long long arraySum(vector<int> vct, int size) {
    if (size == 0){
        return 0;
    }
    return vct[size - 1] + arraySum(x, size - 1);
}

int main(){
    int t;
    cin >>t;
    string s;
    while(t--){
        cin>>s;
        int dodaixau = 0;
        string temp;
        while ((dodaixau = s.find(',') != string::npos)){
            temp = s.substr(0, dodaixau);
            x.push_back(stoi(temp));
            s.erase(0, dodaixau + 1);
        }
        cout<<arraySum(x, x.size())<<endl;
    }
}