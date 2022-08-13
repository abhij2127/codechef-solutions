#include <bits/stdc++.h>
using namespace std;
unordered_map<int, int> hmap;
int main() {
	
	int t;
	cin>>t;
	while(t--){
	    hmap.clear();
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for(auto &x : a){
	        cin>>x;
	        hmap[x]++;
	    }
	    int maxcnt = -1;
	    int prevmax = 0;
	    for(auto [num, count] : hmap){
	        if(count == maxcnt){
	            maxcnt = -1;
	        }
	        else if(count>prevmax) {
	            maxcnt = count;
	            prevmax = maxcnt;
	        }
	    }
	    if(maxcnt==-1) cout<<"NO\n";
	    else cout<<"YES\n";
	}
	return 0;
}
