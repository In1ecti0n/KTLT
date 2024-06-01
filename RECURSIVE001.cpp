//Cho một chuỗis. Viết chương trình tính tổng của các thành phần trong mảng sử dụng đệ quy (vd: s = 1,2,3,4,5)
#include <bits/stdc++.h>
using namespace std;
/*
// code này chỉ đúng khi trong chuỗi ko có số 2 chữ số trở lên

vector<int> x;
int arraySum(vector<int> vct, int size) {
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
        for (int i = 0; i < s.size(); i++){
            if (s[i] == ','){
                continue;
            }
            int a = s[i] - '0';
            x.push_back(a);
        }
        cout<<arraySum(x, x.size())<<endl;
    }
}

*/

vector<int> x;    // vector lưu các số tách ra từ chuỗi
long long arraySum(vector<int> vct, int size) {   // hàm đề quy tính tổng các phần tử có trong vector
    if (size == 0){    //size (kích cỡ hiện tại của vector)
        return 0;
    }
    return vct[size - 1] + arraySum(x, size - 1);
}


int main(){
    int t; cin>>t;
    string s;
    while (t--){
        cin>>s;
        string temp;   // string để lưu dữ liệu từ string s đã tách dấu phẩy
        istringstream ss(s);   //đọc luồng ss từ string s  // có cách viết khác stringstream ss xong tiếp lệnh ss << s (trích s vào ss);
        while (getline(ss, temp, ',')){   //vòng lặp đọc các phần tử của ss, gặp dấu , sẽ thục hiện lệnh tiếp; đọc đến khi nào hết phần tử trong ss;
            x.push_back(stoi(temp));   // thêm các phần từ từ temp vào vector (stoi: đổi từ kiểu char sang int)
        }
        cout<<arraySum(x, x.size())<<endl;
        x.clear();   //xóa các phần từ trong vector để thực hiện test sau
    }
}

/*  Cách 2: ko sử dụng thư viện sstream để dùng stringstream.
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
        int dodaixau = 0;  // chỉ số để tính độ dài 1 xâu con tách ra từ string s
        string temp;
        while ((dodaixau = s.find(',') != string::npos)){    // hàm find sẽ tìm kí tự ',' trong s rồi chỉ ra chỉ số trong xâu s ( ví dụ: Kha,ng thì dấu ',' sẽ là 3)
            temp = s.substr(0, dodaixau);  //hàm tách xâu con từ 0 đến chỉ số cần tìm (ví dụ trên: từ 0 đến 3 suy ra tách thành "Kha") 
            x.push_back(stoi(temp));
            s.erase(0, dodaixau + 1);    //xóa phần tách ra + dấu ',' khỏi string s
        }
        cout<<arraySum(x, x.size())<<endl;
    }
}
*/