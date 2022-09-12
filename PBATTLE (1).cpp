#include <bits/stdc++.h>
using namespace std;

int main() {
	uint16_t t;
	cin>>t;
	while(t--){
	    unsigned n;
	    cin>>n;
	    vector<unsigned> a(n);
	    vector<unsigned> b(n);
	    for(auto &e : a){
	        cin>>e;
	    }
	    for(auto &e : b){
	        cin>>e;
	    }
	    vector<vector<unsigned>> power;
	    for(int i=0; i<n; i++){
	        vector<unsigned> tempVec;
	        tempVec.push_back(a[i]);
	        tempVec.push_back(b[i]);
	        power.push_back(tempVec);
	    }
	    
	    
	    sort(power.begin(), power.end(), [](vector<unsigned> x, vector<unsigned> y){
	        return x[0] < y[0];
	    });
	    long long unsigned ans = 0;
	    unsigned mx = 0;
	    for(int i=n-1; i>=0; i--){
	        if(power[i][1] > mx) ans+=1;
	        mx = max(mx, power[i][1]);
	    }
	    cout<<ans<<"\n";
	    
	}
	return 0;
}
