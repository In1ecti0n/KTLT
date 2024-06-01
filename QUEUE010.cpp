#include <bits/stdc++.h>
using namespace std;

int test(queue<int> master){
	queue<int> temp;   // Tạo một queue để push chỉ 1 số từ master vào temp.
	while(!master.empty()){
		if (temp.empty()){
			temp.push(master.front());
			master.pop();
		}else{
			if (master.front() < temp.front()){       // nếu số a đầu tiền trong master đang xét bé hơn số b trong queue thif push a, pop b;
				temp.push(master.front());
				temp.pop();
			}
			master.pop();     // pop số đã xét xong
		}
	}
	return temp.front();
}

int main(){
	int t; cin >> t;
	while (t--){
		queue<int> master;
		string s;
		cin >>s;
		string temp;
		istringstream ss(s);
		while(getline(ss, temp, ',')){
			master.push(stoi(temp));
		}
		cout<<test(master)<<endl;
	}
}