#include <bits/stdc++.h>
using namespace std;

/*
long long countOnes(long long n) {
    if (n <= 0) {
        return 0;
    }
    string num = to_string(n);
    int digit = num[0] - '0';
    int power = pow(10, num.size() - 1);
    if (digit == 1) {
        return n - power + 1 + countOnes(power - 1) + countOnes(n - power);
    } else {
        return digit * countOnes(power - 1) + power + countOnes(n - digit * power);
    }
}

int main(){
    int t; cin>>t;
    long long n;
    while(t--){
        cin>>n;
        cout<<countOnes(n)<<endl;
    }
}
*/

/*
long long countOnes(long long n) {
    long long count = 0, factor = 1;
    long long lowerNum = 0, currNum = 0, higherNum = 0;
    while(n / factor != 0) {
        lowerNum = n - (n / factor) * factor;
        currNum = (n / factor) % 10;
        higherNum = n / (factor * 10);
        
        if (currNum == 0) {
            count += higherNum * factor;
        } else if (currNum == 1) {
            count += higherNum * factor + lowerNum + 1;
        } else {
            count += (higherNum + 1) * factor;
        }
        
        factor *= 10;
    }
    return count;
}
*/

/*
int countDigitOne(int n)
{
    int ones = 0;

    // Mỗi vòng lặp xử lý một vị trí của số
    for (long long m = 1; m <= n; m *= 10)
    {
        // Số lượng nhóm chữ số 1 tại vị trí m
        int groupCount = (n / m + 8) / 10;

        // Số lượng chữ số 1 tại vị trí m
        int positionCount = (n / m % 10 == 1) ? n % m + 1 : 0;

        // Cộng dồn vào tổng số lượng chữ số 1
        ones += groupCount * m + positionCount;
    }

    return ones;
}
*/

long long countDigitOne(long long n, long long dem) {
    if ( n <= 0){
        return dem;
    }
    long long temp = n;
    string s = to_string(n);
    for (char i : s){
        if (i == '1'){
            dem++;
        }
    }
    return countDigitOne(temp - 1, dem);
}


int main(){
    int t; cin>>t;
    long long n;
    while(t--){
        cin>>n;
        cout<<countDigitOne(n, 0)<<endl;
    }
}