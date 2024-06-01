#include <bits/stdc++.h>
using namespace std;

int arr[10];
void test(int n){
    string x = to_string(n); //đổi số thành chuỗi
    for (char c : x){ // duyệt các chữ số trong 1 số
        int v = c - '0';  //chuyển char thành int
        arr[v]++;   //ví dụ: số 1 tại vị trí arr[i]++;
    }
}

int main(){
    int t; cin>>t;
    int a, b;
    while (t--){
        cin>>a>>b;
        int maxx = max(a, b);
        int minn = min(a, b);
        for (int i = minn; i <= maxx; i++){
            test(i);
        }
        for (int i = 0; i < 10; i++){
            cout<<arr[i]<<" ";
            arr[i] = 0;
        }
        cout<<endl;
    }
}


/* Cach 2:
void test(int a, int b){   // hàm đếm số n trong dãy (a, b) có bao nhiêu lần xuất hiện ( số 1 trong dãy có bao lần xuất hiện)
	for (int so = 0; so < 10; so++){  //tạo dãy đếm chữ số 0, 1,...
		int dem = 0;
		for (int i = a; i <= b; i++){   
			int num = i; 
			while(num>0){
				if (num % 10 == so){     //ví dụ: 123 % 10 == 3 thì đếm++
					dem++;
				}
				num /= 10;
			}
		}
		cout<<dem<<" ";
	}

}

int main(){
    int t; cin>>t;
    int a, b;
    while (t--){
        cin>>a>>b;
        int maxx = max(a, b);
        int minn = min(a, b);
        test(minn, maxx);
		cout<<endl;
    }
}
*/



/* BAI CUA PHAMSYQUY
int t;
int num_1, num_2;
void number()
{
    cin >> num_1 >> num_2;
    int maxx = max(num_1, num_2);
    int minx = min(num_1, num_2);
    num_1 = minx;
    num_2 = maxx;
    int nb[100];
    int r;
    memset(nb, 0, sizeof(nb));
    for (int i = num_1; i <= num_2; i++)
    {
        if (i < 10)
        {
            nb[i]++;
        }
        else
        {
            int quick_number = i;
            while (quick_number != 0)
            {
                r = quick_number % 10;
                // cout << r << " ";
                nb[r]++;
                quick_number /= 10;
            }
        }
    }
    for (int j = 0; j <= 9; j++)
        cout << nb[j] << " ";
    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {

        number();
    }
    return 0;
} 
*/