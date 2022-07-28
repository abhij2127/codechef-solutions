#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> arr(n);
		for(auto &a : arr){
			cin>>a;
		}
		long long int cons = 0;
		long long int sum = 0;
		int cntzero = 0;
		for(const auto a : arr){
			if(a==0){
				for(int i=cons;i>0;i--) sum+=i;
				cons = 0;
				cntzero = 0;
			}
			cons+=a;
		}
		if(cons!=0){
			for(int i=cons;i>0;i--) sum+=i;
		}
		cout<<sum<<"\n";
	}
	return 0;
}


