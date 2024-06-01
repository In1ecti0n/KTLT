#include <bits/stdc++.h>
using namespace std;
/*
#define ll long long
#define MAX 100001
int a[MAX];
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s==""){
     	    cout<<"0\n";
	    }
	    else{
            memset(a,0,sizeof(a));    // cho mảng a toàn số 0, tách dần s, ví dụ tách s được 2 thì vị trí 2 trong mảng a = 1, tách được 4 thì vị trí 4 mảng a được 1 suy ra được 0101(tương ứng vị trí 0,1,2,3) suy ra số 0 và số 2 ko có trong xâu s; 
            string tmp="";
            for(char c:s){
     	        if(c==','){
     		        a[stoi(tmp)]++; 
     		        tmp="";
		        }
		        else{
		 	        tmp+=c;
		        }
	        }
	        a[stoi(tmp)]++;
	        for(int i=0;i<MAX;i++){
	 	        if(a[i]==0){
	 		        cout<<i<<"\n";
	 		        break;
		        }
	        }        
        }
	}
}
*/
/*vector<int>x;
int findSmallestMissing(vector<int> nums, int lowIndex, int highIndex) {
    if (lowIndex > highIndex){
        return highIndex + 1;
    }
    int a = lowIndex;
    int b = highIndex;
    if (x[a] != a){
        return a;
    }
    int midIndex = (a + b) /2;
    if (x[midIndex]==midIndex){
        return findSmallestMissing(x, midIndex + 1, highIndex);
    }
    return findSmallestMissing(x, a + 1, midIndex);

}
*/
/*
int findSmallestMissing(vector<int> nums, int lowIndex, int highIndex) {
    if (lowIndex > highIndex){
        return highIndex + 1;
    }
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] == lowIndex){
            return findSmallestMissing(nums, lowIndex + 1, highIndex);
        }
    }
    return lowIndex;
}
*/
/*
int findSmallestMissing(vector<int>nums){
    int small = 0; 
    for (int i = 0; i < nums.size(); i++){
        if (nums[i]== small){
            small++;
        }
    }
    return small;
}
*/



vector<int>x;
long long findSmallestMissing(vector<int> nums, long long lowIndex, long long highIndex) {
    long long a = lowIndex;
    long long b = highIndex;
    if (x[a] != a){
        return a;
    }
    return findSmallestMissing(x, a + 1, b);

}


int main(){
    int t; 
    cin>>t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        if (s == ""){
            cout<<'0'<<endl;
        }else{
            string temp;
            istringstream ss(s);
            while(getline(ss, temp, ',')){
                x.push_back(stoi(temp));
            }
            cout<<findSmallestMissing(x, 0, x[x.size() - 1])<<endl;
            x.clear();
        }
    }
}


