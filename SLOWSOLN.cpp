#include <bits/stdc++.h>
using namespace std;
#define llu long long unsigned
int main() {
	int t;
	cin>>t;
	int p = t;
	while(t--){
	   uint64_t max_n, max_t, sum_n;
	   cin>>max_t>>max_n>>sum_n;
	   int start = 0;
	   
	   llu ctr = 0;
	   llu ctr2 = 0;
	   while(ctr2+max_n<=sum_n && ctr<max_t){
	       start++;
	       ctr++;
	       ctr2 += max_n;
	   }
	   
	   llu rem = 0;
	   if(ctr<max_t){
	   		rem = sum_n - ctr2;
	   }
	  
	   
	   llu res = 0;
	   for(int i=0; i<start; i++){
	       res+= pow(max_n, 2);
	   }
	   res+= pow(rem, 2);
	   cout<<res<<"\n";
	   
	}
	return 0;
}
