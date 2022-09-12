#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned t;
	cin>>t;
	while(t--){
	    unsigned n;
	    cin>>n;
	   vector<int> v(n);
	   unsigned s(0), e(n-1);
	   
	    unsigned cnt = n;
	    while(s < e){
	        v[s++] = cnt--;
	        v[e--] = cnt--;
	    }
	    if(n&1) v[s] = cnt;
	    for(auto x : v){
	        cout<<x<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
