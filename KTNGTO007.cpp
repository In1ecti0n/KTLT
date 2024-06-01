#include <bits/stdc++.h>
using namespace std;
bool is_Prime(long n)
{
    if (n < 2)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
int t;
long l, r;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        for (long i = r; i >= l; i--)
        {
            if (is_Prime(i))
            {
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}