#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
	int arr[n+1];
	arr[0] = 0;
	for(int i=0;i<n;i++){
		if(a[i]==0){
			if(arr[i]==0)arr[i+1]=0;
			else arr[i+1]= 1;
		}
		else{
			if(arr[i] == 0) arr[i+1]=1;
			else arr[i+1] = 0;
		}	
	}
	if(arr[n]==arr[0]) cout<<"y"<<endl;
	else cout<<"n"<<endl;

    }
    return 0;
}
