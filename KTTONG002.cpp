// đếm các số nguyên tố trong khoảng 1<=l<=r<=10^6
#include <bits/stdc++.h>
using namespace std;
/*bool isprime(int n)   // hàm kiểm tra số nguyên tố 
{
    if (n == 2 || n == 3)
        return true;
    if (n < 3 || n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int countprime(int l, int r){  // hàm đêm số nguyên tố l > 2 va chia hết cho 2 thì ++ thành số lẻ (các số nguyên tố đều là số lẻ)
    int count = 0;
    if (l % 2 == 0 && l >2){ 
        l++;
    }
    for (int i = l; i <= r; i++){
        if (isprime(i)){
            count++;
        }
    }
    return count;
}*/

/*const int MAX = 10000;            // sử dụng sàng eratones 
int prefix[MAX + 1];   // tạo mảng đếm số nguyên tố
void buildPrefix(){
	bool prime[MAX + 1];   // tạo mảng true false
	memset(prime, true, sizeof(prime));
	for (int p = 2; p * p <= MAX; p++) { 
		if (prime[p] == true) {                      // nếu p = true (bắt đầu từ 2)
			for (int i = p * 2; i <= MAX; i += p)    // bội của p thì đăt là false, ví dụ bội của 2 là 4,6,8,..  thành false; cuối cùng các số true là số nguyên tố
				prime[i] = false;
		}
	}
	prefix[0] = prefix[1] = 0;
	for (int p = 2; p <= MAX; p++) {
		prefix[p] = prefix[p - 1];     // ví dụ các số (0,1,2,3,4,5,6,7,8,9,10) = (0,0,1,2,2,3,3,4,4,4,4)
		if (prime[p])   //chỉ số đếm của số sau = số trước, nếu số sau là số nguyên tố thì +1, như kiểu đếm tay các số nguyên tố 2,3,5 là 1,2,3.
			prefix[p]++;
	}
}
int query(int L, int R){
	return prefix[R] - prefix[L - 1];
}*/


int countprime(int l, int r){
    int count = 0;
    vector<bool> check(r + 1, true);
    check[0] = check[1] = false;
    for (int i = 2; i * i <= r; i++){
        if(check[i]){
            for (int j = i * i; j <= r; j += i){
                check[j] = false;
            }
        }
    }
    for (int i = l; i <= r; i++){
        if (check[i]){
            count++;
        }
    }
    return count;
}
int main(){
    int t; cin>>t;
    int l, r;
    while(t--){
        cin>>t>>r;
        cout<<countprime(l, r)<<endl;
    }
}