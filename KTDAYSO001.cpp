#include <bits/stdc++.h>
using namespace std;

void test(int n, long long* p){
    if (n == 1){
        cout<<"YES"<<endl;
    }
    int dem = 0;
    long long congsai = p[1] - p[0];
    for (int i = 0; i < n - 1; i++){
        if (congsai != p[i+1]- p[i]){
            cout<<"NO"<<endl;
            dem++;
            break;
        }
    }
    if (dem == 0){
        cout<<"YES"<<endl;
    }
}


int main(){
    int n; cin>>n;
    long long arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    test(n, arr);
    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin>>n;
    long long a[n];
    for (long long i = 0; i < n; i++){
        cin>>a[i];
    }
    long long t = a[1] - a[0];
    for (long long i = 1; i <= n - 1; i++){
        if (t != a[i] - a[i - 1]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;

}
*/

/*
int t;
int n;
bool check(int n, vector<ll> &a)
{
    if (n == 1)
        return true;
    ll cong_sai = a[1] - a[0];
    for (int i = 2; i < n; ++i)
        if (a[i] - a[i - 1] != cong_sai)
            return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<ll> a(n + 1);
        for (long i = 0; i < n; ++i)
            cin >> a[i];
        if (check(n, a))
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}

*/