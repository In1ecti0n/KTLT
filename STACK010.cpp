#include <iostream>
using namespace std;
int main() {
    int s; cin>>s;
    while(s--){
        long long k; cin>>k;
        long long n=k%4;
        int arr[10];
        arr[0]=0;
        arr[1]=1;
        arr[2]=2;
        arr[3]=6;
        if(k<4) cout<<arr[n]<<endl;
        else{
            
        long long kq=k*(k-1)/(k-2)+(k-3);
            for(int i=k-4;i>k%4;i-=4){
                long long a=i,b=i-1,c=i-2,d=i-3;
                long long q=a*b/c-d;
                kq-=q;
            }
            cout<<kq-arr[n]<<endl;
        }
        
    }
    return 0;
}