#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned t;
	cin >> t;
	while(t--){
	    long long unsigned n;
	    cin >> n;
	    //unsigned *arr = new unsigned[n];
	    long long int *arr = new long long int[n];
	    vector<long long int> doggy;
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        int k = arr[i]<0 ? -1*arr[i] : arr[i];
	        doggy.push_back(k);
	        
	    }
	    sort(arr, arr+n);
	    sort(doggy.begin(), doggy.end());
	   
	    
	    
	    
	    long long int mini, maxi;
	    mini = min(arr[0]*arr[n-1], doggy[0]*doggy[0]);
	    maxi = max(arr[n-1]*arr[n-1], arr[0]*arr[0]);
	    cout<<mini<<" "<<maxi<<"\n";
	}
	return 0;
}
