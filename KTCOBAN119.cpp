#include <bits/stdc++.h>
using namespace std;
int t;
int n, k;
bool check_number(int n, int k)
{
    int u;
    int dem = 0;
    if (n == 0)
        dem = 1;
    else
    {
        while (n != 0)
        {
            u = n % 2;
            if (u == 0)
                dem++;
            n /= 2;
        }
        if (dem == k)
            return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        int dem = 0;
        cin >> n >> k;
        for (int i = 0; i <= n; ++i)
            if (check_number(i, k))
                dem++;
        cout << dem << "\n";
    }
    return 0;
}