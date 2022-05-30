#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d, e;
        cin>>a>>b>>c>>d>>e;
        if(a+b+c > d+e){
            cout<<"NO\n";
            continue;
        }
        int bagsum = a+b+c;
        if(a<=e && bagsum-a<=d){
            cout<<"YES\n";
            continue;
        }
        else if(b<=e && bagsum-b<=d){
            cout<<"YES\n";
            continue;
        }
        else if(c<=e && bagsum-c<=d){
            cout<<"YES\n";
            continue;
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
