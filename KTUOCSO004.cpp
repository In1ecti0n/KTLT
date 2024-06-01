#include <bits/stdc++.h>
using namespace std;
//ktra so nguyen to
bool prime(int n){
    if (n <= 1){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    } 
    return true;
}

// uoc nguyen to 
int uocsoprime(int n){
    int tich = 1;
    for (int i = 1; i <= n; i++){
        if (n % i == 0 && prime(i)){
            tich *= i;
        }
    }
    return tich;
}
//ktra tich uoc nguyen to co be hon n hay k
int main(){
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++){
        if (uocsoprime(arr[i]) < arr[i]){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}


/*
#include <bits/stdc++.h>

using namespace std;

void result(long long n)
{
    int dem = 0;
    long long m = n;
    long long tich = 1;
    while (n % 2 == 0)
    {
        n /= 2;
        dem++;
    }
    if (dem > 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (dem == 1)
    {
        tich = 2;
    }
    int count;
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        count = 0;
        while (n % i == 0)
        {
            n /= i;
            count++;
        }
        if (count > 1)
        {
            cout << "YES" << endl;
            return;
        }
        if (count == 1)
        {
            tich *= i;
        }
    }
    if (n > 1)
        tich *= n;
    if (tich >= m)
    {
        cout << "NO";
    }
    else
        cout << "YES";
    cout << "\n";
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
        long long n;
        cin >> n;
        result(n);
    }
    return 0;
}
*/
