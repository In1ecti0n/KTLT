#include <bits/stdc++.h>
using namespace std;
//Bạn được cho một mảng số nguyên 'nums', có một cửa sổ trượt có kích thước 'k' đang di chuyển từ bên trái nhất của mảng đến bên phải nhất. Bạn chỉ có thể thấy được 'k' số trong cửa sổ. Mỗi lần cửa sổ trượt sang phải một vị trí.
//Trả về giá trị lớn nhất của cửa sổ trượt

/*ý tưởng là mỗi lần dịch cửa số, số bên trái ngoài cửa số sẽ bỏ đi; vì vậy với k số đầu tiên ứng vs cửa số kích thước k, sẽ đẩy lần lượt k số xuống cuối dãy; và đẩy k - 1 các số đó lên đầu dãy rồi xóa 1 số cuối dãy (số này tương ứng vs số ngoài cửa số bỏ đi khi dịch cửa sổ sang phải 1 đơn vị)*/
// [1,3,-1, -3, 5,3,6,7] k = 3
/*trượt 1 với [1,3,-1], max 3
trượt 2 với [3,-1,-3], max 3
trượt 3 với [-1,-3,5], max 5
trượt 4 với [-3,5,3], max 5
trượt 5 với [5,3,6], max 6
trượt 6 với [3,6,7], max 7
*/
int max(deque<int> master){           // hàm trả về giá trị lớn nhất trong deque (so sánh lần lượt lonnhat vs từng pop master, nếu thỏa mãn thì cập nhật lonnhat = số hiện tại đang xét trong deque rồi pop ra )
	int lonnhat = master.front();
	while(!master.empty()){
		if (lonnhat < master.front()){
			lonnhat = master.front();
			master.pop_front();
		}else{
			master.pop_front();
		}
	}
	return lonnhat;
}


string maxSlidingWindow(deque<int>& nums, int k) {      // hàm trả về các số lớn nhất theo khung cửa số độ dài k
	deque<int> ketqua;    // lưu kết quả
	while(!nums.empty()){     
		deque<int> test;    // queue 2 chiều để cho các số trong 1 khung cửa số 
		if ( k > nums.size()){    // kiểm soát điều kiện nếu độ dài khung cửa số lớn hơn deque hiện tại thì thoát 
			break;
		}
		for (int i = 0; i < k; i++){           // tách k chữ số có trong khung
			test.push_back(nums.front());      //chèn số phía trước vào test
			nums.push_back(nums.front());      // đẩy số phía trước về phía sau
			nums.pop_front();
		}
		for (int i = 0; i < k - 1; i++){       // đẩy số  phía sau lên phía trước
			nums.push_front(nums.back());
			nums.pop_back();
		}
		nums.pop_back();                      // xóa số không dùng đến nữa
		ketqua.push_back(max(test));          // return số lớn nhất trong deque test (hay chính là khung cửa số)
	}
	string s;
	while(!ketqua.empty()){
		s = s + to_string(ketqua.front()) + ',';
		ketqua.pop_front();
	}
	s.pop_back();
	return s;
}

int main(){
	int t; cin >> t;
	while(t--){
		int k;
		string s;
		cin >> s >> k;
		deque<int> nums;
		string temp;
		istringstream ss(s);
		while(getline(ss, temp, ',')){
			nums.push_back(stoi(temp));
		}
		cout<<maxSlidingWindow(nums, k)<<endl;
	}
}