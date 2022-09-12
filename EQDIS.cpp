#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned t;
	cin>> t;
	while(t--){
	    unordered_map<unsigned, int> hmap;
	    unsigned n;
	    cin>>n;
	    vector<unsigned> arr(n);
	    for(auto &a : arr){
	        cin>>a;
	        hmap[a]++;
	    }
	    
	    
	    unsigned res = hmap.size();
	    if(n == res && res&1) cout<<"NO\n";
	    else cout<<"YES\n";
	}
	return 0;
}
