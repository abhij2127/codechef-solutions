#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string nums;
        cin>>n;
        cin>>nums;
        int cnt = 0;
        int lptr = 0;
        int rptr = n-1;
        while(rptr>lptr){
            if(nums[lptr]!=nums[rptr]) cnt++;
            lptr++;
            rptr--;
        }
        int res = ceil((float)cnt/2);
        cout<<res<<endl;
    }
}
