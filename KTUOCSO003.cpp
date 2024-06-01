#include <bits/stdc++.h>
using namespace std;

void test(int n){
	int sum = 1;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0){
			if(i!=sqrt(n))
				sum = sum + i + n/i;
			else
				sum=sum+i;
		}
	}
	if (sum == n && n != 1){
		cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }
}

int main (){
    int a, i, arr[100]; cin>>a;
    while (a--){
        cin>>arr[i];
		i++;
    }
	for (int c = 0; c < i; c++){
		test(arr[c]);
	}
    return 0;
}
