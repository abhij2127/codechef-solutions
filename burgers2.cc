#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x, y, n, r;
	    cin>>x>>y>>n>>r;
	    if(r<n*x){
	        cout<<-1<<endl;
	        continue;
	    }
	    else if(r>=n*y){
	        cout<<0<<" "<<n<<endl;
	        continue;
	    }
	    else{
	        int b = (r-(n*x))/(y-x);
    	    int a = n-b;
    	    cout<<a<<" "<<b<<endl; 
	    }
	    
	    
	}
	return 0;
}

