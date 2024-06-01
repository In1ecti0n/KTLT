#include <bits/stdc++.h>
using namespace std;
int t;
int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {

        cin >> n;
        int f[1001];
        f[0] = 0;
        f[1] = 1;
        bool check = false;
        map<int, bool> mymap;
        mymap[0] = true;
        mymap[1] = true;
        for (int i = 2; i <= 1001; i++)
        {
            f[i] = f[i - 1] + f[i - 2];
            mymap[f[i]] = true;
        }
        for (int i = 0; i <= n / 2; i++)
            if (mymap[i] && mymap[n - i])
            {
                check = true;
                cout << i << " " << n - i << "\n";
                break;
            }
        if (check == false)
            cout << -1 << "\n";
    }
    return 0;
}