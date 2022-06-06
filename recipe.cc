#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
	if(x==0){
		return y;
	}
	return gcd(y%x, x);
}



int main() {
	int t;
	cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ingidrients;
		int result;
		bool flag = true;
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            if(i==0) result = p;
			if(result==1) flag = false;
			else if(flag) result = gcd(p, result);
			ingidrients.push_back(p);
        }
		for(auto x : ingidrients){
			cout<<x/result<<" ";
		}
		cout<<endl;
    }
}
