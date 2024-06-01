#include <bits/stdc++.h>
using namespace std;

string test(queue<string>& master, int k){
    string x;    // string để in kí tự chứa dấu ','
    stack<string> temp;        // chứa các kí tự cần đảo
    queue<string> slave;       // chứa các kí tự đã đảo và kí tự không đảo còn lại trong queue master
    for (int i = 0; i < k; i++){        // tách k string ban đầu để đưa vào stack;
        temp.push(master.front());
        master.pop();
    }
    while(!temp.empty()){          // đảo stack, push vào slave
        slave.push(temp.top());
        temp.pop();
    }
    while(!master.empty()){        // push string còn lại trong master vào  slave
        slave.push(master.front());
        master.pop();
    }
    while(!slave.empty()){             // nối các string trong slave vào strings kèm dấu phẩy
        x = x + slave.front() + ',';
        slave.pop();
    }
    x.pop_back();     // xóa dấu ',' thừa ở cuối string s
    return x;
}

int main(){
    int t; cin >> t;
    while(t--){
        queue<string> master;
        int k;
        string s, temp;
        cin>>s;
        cin>>k;
        istringstream ss(s);
        while(getline(ss, temp, ',' )){     // tách từng string giữa vào kí tự phân tách ',' rồi push vào queue;
            master.push(temp);
        }
        cout<<test(master, k);
        cout<<endl;
    }
}