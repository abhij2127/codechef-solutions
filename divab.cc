#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a, b, n;
		cin>>a>>b>>n;
		if(a==b || a%b==0){
			cout<<-1<<"\n";
			continue;
		}
		while(1){
			if(n%a==0 && n%b!=0) break;
			else n++;
		}
		cout<<n<<"\n";
	}
	return 0;
}