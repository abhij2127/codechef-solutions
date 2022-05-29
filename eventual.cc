#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	map<char, int> hmap;
	while(t--){
	    hmap.clear();
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(auto c : s){
	        hmap[c]++;
	    }
	    map<char, int>::iterator p = hmap.begin();
	    bool flag = true;
	    while(p!=hmap.end()){
	        int num = p->second;
	        if(num%2!=0){
	            flag = false;
	            break;
	        }
            p++;
	    }
	    if(flag){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}



	return 0;
}
