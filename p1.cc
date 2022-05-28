#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
	while(t){
	    int a, b, c;
	    cin>>a>>b>>c;
	    bool flag = false;
	    int mx = max(a,b);
	    mx = max(mx,c);
        cout<<"MaX : "<<mx<<endl;
	    if(mx>a+b || mx>b+c || mx>a+c){
	        flag = true;
	    }
	    if(flag) cout<<"YES\n";
	    else cout<<"NO\n";
	    t--;
	}
	return 0;
}
