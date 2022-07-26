#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int cnt1 = 0, cnt0 = 0;
		for(int i=0;i<n;i++){
			if(s[i]=='0') cnt0++;
			else cnt1++;	
		}
		if(cnt1<cnt0){
			for(int i=0;i<cnt0;i++){
				cout<<0;
			}
			cout<<endl;
		}
		else{
			for(int i=0;i<cnt1;i++){
				cout<<1;
			}
			cout<<endl;
		}
	}
	return 0;
}
