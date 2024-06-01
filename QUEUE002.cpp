#include <bits/stdc++.h>
using namespace std;

bool search(const queue<char>& q, char target) {
    queue<char> tempQueue = q; 

    while (!tempQueue.empty()) {
        if (tempQueue.front() == target) {
            return true;
        }
        tempQueue.pop();
    }

    return false;
}

int main() {
    int s;
    cin >> s;

    while (s--) {
        string a, b;
        cin >> a >> b;
        queue<char> stu;
        queue<char> sw;

        for (int i = 0; i < a.length(); i += 2) {
            stu.push(a[i]);
            sw.push(b[i]);
        }
        while (search(stu, sw.front())) {
            if (stu.front() != sw.front()) {
                stu.push(stu.front());
                stu.pop();
            } else {
                stu.pop();
                sw.pop();
            }
        }
        cout << stu.size() << endl;
    }
    
    return 0;
}