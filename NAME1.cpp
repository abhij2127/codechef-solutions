#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned t;
	cin>>t;
	while(t--){
	    vector<int> hmap(26, 0);
	    string a, b;
	    cin>>a>>b;
	    unsigned n;
	    cin>>n;
	    vector<string> names(n);
	    for(auto &name : names){
	        cin>>name;
	    }
	    for(const auto ch : a){
	        hmap[ch - 'a']++;
	    }
	    for(const auto ch : b){
	        hmap[ch -'a']++;
	    }
	    bool flag = true;
	    for(const auto name : names){
	        for(const auto ch : name){
    	        hmap[ch - 'a']--;
    	        if(hmap[ch - 'a'] < 0){
    	            flag = false;
    	            break;
    	        }
	        }
	    }
	    if(flag) cout<<"YES\n";
	    else cout<<"NO\n";
	    
	}
	return 0;
}
