#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        bool aw, bw;
        aw = bw = false;
        int ac, bc;
        ac = bc = 0;
        int i=1;
        while(2){
            if(i%2==0){
                bc+=i;
            }
            else{
                ac+=i;
            }
            if(ac>a){
                cout<<"Bob"<<endl;
                break;
            }
            if(bc>b){
                cout<<"Limak"<<endl;
                break;
            }
            i++;
        }


    }
    return 0;
}
