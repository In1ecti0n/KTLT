#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc;cin>>tc;
	while(tc--){
		string s;cin>>s;
		int k;cin>>k;
		stack<char> st;
		st.push(s[0]);
		if(k>s.size()){
			cout<<"0"<<endl;
			continue;
		}
		for(int i=1;i<s.size();i++){
			if(s[i]<st.top()){
				while(!st.empty()&&s[i]<st.top()){
					if(k>0){
						st.pop();
						k--;
					}
					else{
						break;
					}
				}
				st.push(s[i]);
			}
			else{
				st.push(s[i]);
			}
		}
		while(!st.empty()&&k!=0){
			st.pop();
			k--;
		}
		string res = "";
		while(!st.empty()){
			res = string(1,st.top()) + res;
			st.pop();
		}
		size_t pos = res.find_first_not_of('0');
		if(pos!=string::npos){
			res = res.substr(pos);
			cout<<res<<endl;
		}
		else{
			cout<<"0"<<endl;
		}
	}
	return 0;
}