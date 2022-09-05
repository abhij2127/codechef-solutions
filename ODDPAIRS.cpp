#include <iostream>
using namespace std;

long long unsigned solve(long long unsigned n){
    if(n == 1 || n == 0) return 0;
    long long unsigned res;
    if(n%2==0){
        long long unsigned num_of_even = n/2;
        long long unsigned num_of_odd = n/2;
        res = 2*num_of_odd*num_of_even;
        
    }
    else{
        long long unsigned num_of_even = n/2;
        long long unsigned num_of_odd = (n/2) + 1;
        res = 2*num_of_odd*num_of_even;
    }
    
    return res;
    
}
int main() {
    int t;
    cin>>t;
    while(t--){
        long long unsigned n;
        cin>>n;
        long long unsigned res = solve(n);
        cout<<res<<"\n";
    }
	return 0;
}
