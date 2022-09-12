#include <iostream>
using namespace std;

int main() {
	unsigned t;
	cin>>t;
	while(t--){
	    unsigned n;
	    cin>>n;
	    unsigned ans = 0;
	   
	    for(unsigned i=1 ; i<=n; i+=2 ){
	        unsigned res = (n-i+1)*(n-i+1);
	        ans+=res;
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
