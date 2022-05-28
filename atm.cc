#include <iostream>
using namespace std;


int GCD(int a, int b){
    if(a == 0){
        return b;
    }
    if(b == 0){
        return a;
    }
    
    if(a == b){
        return a;
    }
    
    if(a>b){
        return GCD(a-b, b);
    }
    
    return GCD(a, b-a);
}
int main() {
	int t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int gcd = GCD(a, b);
	    int lcm = (a*b)/gcd;
	    cout<<gcd<<" "<<lcm<<endl;
	}
	return 0;
}




