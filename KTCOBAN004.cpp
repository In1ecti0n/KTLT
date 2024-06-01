#include <bits/stdc++.h>
using namespace std;
/*
vector<int> a;
bool test(int n, int k){
    a.assign(k, 0);
    for (int i = 0; i < k; i++){
        int z = n % 10;
        a.push_back(z);
        n /= 10;
    }
    for (int i = )
}
*/
/*
chú thích: do thời gian yêu cầu dưới 1s 
tính đc các trường hợp, i = 1, 2 thì dem = 9; 3, 4 thì dem = 90; 5, 6 thì dem = 900,....
long long sdx(int n)
{
	return (9 * pow(10, (n - 1) / 2)); // (n - 1)/2 là kiểu int nên lấy số trước dấu phẩy.
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		cout << sdx(n) << endl;
	}
	return 0;
}
*/

bool test(long long n){ //kiểm tra số đối xứng.
    string b = to_string(n);
    long long g = b.size();
    for (long long i = 0; i < g/2; i++){
        if (b[i] != b[g - 1 - i]){
            return false;
        }
    }
    return true;
} 

int main (){
    int t;
    int k;
    cin>>t;
    while (t--){
        long long tong = 0;
        cin>>k;
        if ( k == 1 || k == 2){
            cout<<"9"<<endl;
        }else{
            long long a = pow(10, k - 1);
            long long b = pow(10, k);
            for (long long i = a; i < b; i++){
                if (test(i)){
                    tong ++;
                }
            }
            cout<<tong<<endl;
        }
    }
    return 0;
}


