#include <bits/stdc++.h>
using namespace std;


bool checkprime(int n)   // hàm kiểm tra số nguyên tố 
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


int perfectprime(int n){  // hàm kiểm tra số và các chữ số của 1 số có phải số nguyên tố hay ko
    int count = 0;
    for (int i = 2; i <= n; i++){
        bool test = true;      // gắn cờ test = true;
        int temp = i;
        if (checkprime(temp) && test){
            while(temp > 0){
                if (!checkprime(temp % 10)){          // nếu có chữ số ko là số nguyên tố thì gắn test = false và thoát vòng while (vòng lặp tách các chữ số)
                    test = false;             
                    break;
                }
                temp /= 10;
            }
            if (test){    // nếu duyệt qua các chữ số mà true thì đếm++
                count++;
            }
        }
    }
    return count;
}


int main(){
    int t; cin>>t;
    int n;
    while(t--){
        cin>>n;
        cout<<perfectprime(n)<<endl;
    }
}
