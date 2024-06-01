#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false) cin.tie(0);
/*
int n;
vector<int> last;
vector<int> picked;
vector<vector<int>> dapan;

void check(vector<int> &a,vector<int> &b, vector<vector<int>> &c){
    if (a.empty()){
        c.push_back(b);
    }else{
        for (int i = 0; i < a.size(); i++){
            int temp = a[i];
            b.push_back(a[i]);
            a.erase(a.begin() + i);
            check(a, b, c);
            a.insert(a.begin() + i, temp);
            b.pop_back();
        } 
    }

}

vector<vector<int>> test(int a){
    for (int i = 1; i <= a; i++){
        last.push_back(i);
    }
    check(last, picked, dapan);
    return dapan;
}




int main(){
    cin>>n;
    while(n--){
        int a; cin>>a;
        vector<vector<int>> k = test(a);
        for (int i = 0; i < k.size(); i++){
            for (int j = 0; j < k[i].size(); j++){
                cout<<k[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
*/




vector<int> hoanvi;
vector<int> c;

void print(vector<int>& hoanvi){
    for (int i = 0; i < hoanvi.size(); i++){
        cout<<hoanvi[i]<<" ";
    }
    cout<<endl;
}

void test(int k, int a){
    for (int i = 1; i <= a; i++){
        if (c[i]){
            hoanvi.insert(hoanvi.begin() + k, i);
            if (k == a){
                print(hoanvi);
            }else{
                c[i] = false;
                test(k + 1, a);
                c[i] = true;
            }

        }
    }

}

int main(){
    int n; cin>>n;
    int a;
    while (n--){  
        cin>>a;
        for(int i = 0; i < a; i++){
            c[i] = true;
        }
        test(0, a);
    }
    return 0;
}
