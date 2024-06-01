#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll power(ll base, ll exp){
    ll result = 1;
    while (exp > 0){
        if (exp % 2 == 1)
        {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}

bool isArmstrong(ll n)
{
    ll originalNumber = n;
    ll sum = 0;
    int numDigits = log10(n) + 1;

    while (n > 0)
    {
        int digit = n % 10;
        sum += power(digit, numDigits);
        n /= 10;
    }

    return sum == originalNumber;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        if (isArmstrong(n))
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }

    return 0;
}