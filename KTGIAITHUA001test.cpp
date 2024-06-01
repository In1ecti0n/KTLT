// Giai thừa số lớn
#include <bits/stdc++.h>
using namespace std;

/*
void nhan(int arr[], int &sopt, int &i)
{
	long long nho =0;
	for(int k=0; k<sopt; k++)
	{
		nho = arr[k]*i + nho;
		arr[k] = nho%10000;
		nho /= 10000;
	}
	while(nho>0)
	{
		arr[sopt++] = nho % 10000;
		nho /= 10000;
	}
}
void giaithua(int n)
{
	int arr[50000];
	arr[0] = 1;
	int sopt = 1;
	for(int i=1;i<=n; i++)
	{
		nhan(arr,sopt,i);
	}
	for(int i=sopt-1; i>=0; i--)
	{
		if(i<sopt-1 && 10000 > 10000 && arr[i] <10000) cout << 0;
		if(i<sopt-1 && 10000 > 1000 && arr[i] <1000) cout << 0;
		if(i<sopt-1 && 10000 > 100 && arr[i] <100) cout << 0;
		if(i<sopt-1 && 10000 > 10 && arr[i] <10) cout << 0;
		cout << arr[i];
	}
	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int k;
		cin >> k;
		giaithua(k);
	}
	return 0;
}*/

/*
// Hàm để nhân một vector chứa số lớn với một số nguyên
void multiply(vector<int>& number, int x) {
    int carry = 0;  // Biến nhớ khi nhân
    for (int i = 0; i < number.size(); i++) {
        int product = number[i] * x + carry;
        number[i] = product % 10;  // Lưu lại chữ số cuối cùng
        carry = product / 10;      // Lưu lại phần nhớ
    }

    // Xử lý phần nhớ còn lại
    while (carry) {
        number.push_back(carry % 10);
        carry /= 10;
    }
}

// Hàm để tính giai thừa
vector<int> factorial(int n) {
    vector<int> result;
    result.push_back(1);  // Giai thừa của 0 là 1

    for (int x = 2; x <= n; x++) {
        multiply(result, x);
    }

    return result;
}

// Hàm để in kết quả
void print(const vector<int>& number) {
    for (int i = number.size() - 1; i >= 0; i--) {
        cout << number[i];
    }
    cout << endl;
}

int main() {
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        vector<int> result = factorial(n);
        print(result);
    }
}
*/

void giaithua(long long n){    // ham tạo mảng để lưu trữ số giai thừa, nhân từng số trong mảng với i (i = 1 tới n), rồi lưu phần dư vào mảng từ chỉ số 0, phần /10 sẽ nhớ sang lần nhân tiếp theo
    if (n == 0 || n == 1){
        cout<<1;
        return;
    }
    long long arr[100000];
    arr[0] = 1;
    long long kichthuoc = 1;
    long long phandu = 0;
    for (long long i = 2; i <= n; i++){
        for (long long j = 0; j < kichthuoc; j++){         // nếu muốn sử dụng arr[j] với arr[j + 1] thì phải lồng thêm 1 vòng for (k = j + 1; k <= kichthuoc; k++)
            long long ghivao = (arr[j] * i) + phandu;
            arr[j] = ghivao % 10;
            phandu = ghivao / 10;
        }
        while (phandu > 0){
            arr[kichthuoc] = phandu % 10;
            kichthuoc++;
            phandu /= 10;
        }
    }
    for (long long i = kichthuoc - 1; i >= 0; i--){
        cout<<arr[i];
    }
}


int main(){
    int t; cin>>t;
    long long n;
    while(t--){
        cin>>n;
        giaithua(n);  
        cout<<endl;
    }
}