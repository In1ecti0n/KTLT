#include <bits/stdc++.h>
using namespace std;
// tìm hợp của 2 string s1 s2.
// trường hợp đb queue 1 = [0,0,0]; queue 2 = [0,0]
bool test(queue<int> master,int x){      // kiểm tra xem số x có trong hàng đợi kết quả (queue<int>ketqua) hay không. Nếu có thì false, ko thì true.
	while(!master.empty()){
		if (master.front() == x){
			return false;
		}
		master.pop();
	}
	return true;
}
string findUnion(queue<int> master1, queue<int> master2){      // hàm hợp của 2 string
	queue<int> ketqua;                                         // hàng đợi lưu kết quả
	ketqua.push(master1.front());                              // push 1 phần tử đầu tiên từ hàng đợi 1 vào ketqua để tiện so sánh
	while(!master1.empty()){                               
		if (test(ketqua, master1.front())){                    // nếu phần tử đầu của hàng đợi ko có trong ketqua thì push vào ketqua, nếu không thì chỉ pop ra hàng đợi 1 (trường hợp hàng đợi 1 toán các số giống nhau )
			ketqua.push(master1.front());
			master1.pop();
		}else{
			master1.pop();
		}
	}
	while(!master2.empty()){                                    // tương  tự, so sánh các phần tử cuả hàng đợi 2 với các phần tử trong ketqua
		if (test(ketqua, master2.front())){
			ketqua.push(master2.front());
			master2.pop();
		}else{
			master2.pop();
		}
	}
	string final;                                              // string để in ra
	while(!ketqua.empty()){                                     // add từng phần tử trong hàng đợi vào string
		final = final + to_string(ketqua.front()) + ',';  
		ketqua.pop();
	}
	final.pop_back();    // pop dấu phẩy thừa
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
		cout<<findUnion(master1, master2)<<endl;
	}
}