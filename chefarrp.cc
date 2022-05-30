#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int>nums;
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            nums.push_back(p);
        }
        int cnt = 0;

        for(int i=0;i<n;i++){
            long long int product = 1;
            long long int sum = 0;
            for(int j=i;j<n;j++){
                product*=nums[j];
                sum+=nums[j];
                if(product==sum){
                    cnt++;
                }
            }

        }
        cout<<cnt<<endl;

    }
    return 0;
}
