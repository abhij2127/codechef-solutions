#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x, y, z;
		cin>>x>>y>>z;
		bool flag = false;
		if(y>=x && x==z) flag = true;
		else if(x>=y && y==z) flag = true;
		else if(z>=y && y==x) flag = true;
		else flag = false;
		if(flag) cout<<"YES\n";
		else cout<<"NO\n";
		
	}
	return 0;
		
}
