#include <bits/stdc++.h>
using namespace std;

bool check (queue<int>test, int x){    // nếu có số trong queue thì true (dùng để lọc các số có trong cả queue one và queue two)
	while(!test.empty()){
		if (test.front() == x){
			return true;
		}
		test.pop();
	}
	return false;
}

bool test(queue<int> master,int x){     // nếu có số trong queue thì false (dùng để lọc các số lặp lại trong queue one)
	while(!master.empty()){
		if (master.front() == x){
			return false;
		}
		master.pop();
	}
	return true;
}

string findIntersection(queue<int> one, queue<int> two){
	string final;
	queue<int> temp;
	temp.push(one.front());
	queue<int> ketqua;
	while(!one.empty()){                  // bỏ số lặp trong queue one
		if (test(temp, one.front())){
			temp.push(one.front());
			one.pop();
		}else{
			one.pop();
		}
	}
	while(!temp.empty()){               // kiểm tra nếu có số trùng nhau ở 2 queue thì push vào ketqua
		if (check(two, temp.front())){
			ketqua.push(temp.front());
			temp.pop();
		}else{
			temp.pop();
		}
	}
	if (ketqua.empty()){                 // nếu ketqua trống đồng nghĩa ko có giao của 2 queue
		return final = "";
	}else{
		while(!ketqua.empty()){
			final = final + to_string(ketqua.front()) + ',';
			ketqua.pop();
		}
	}
	final.pop_back();    // bỏ dấu phẩy thừa
	return final;
}

int main(){
	int t; cin >> t;
	while (t--){
		queue<int> master1;
		queue<int>master2;
		string s1, s2;
		cin >>s1>>s2;
		string temp;
		istringstream ss(s1);
		istringstream ss2(s2);
		while(getline(ss, temp, ',')){
			master1.push(stoi(temp));
		}
		while(getline(ss2, temp, ',')){
			master2.push(stoi(temp));
		}
		cout<<findIntersection(master1, master2)<<endl;
	}
}