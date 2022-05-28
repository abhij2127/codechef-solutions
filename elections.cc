#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(t--){
        int xa, xb, xc;
        cin>>xa>>xb>>xc;
        bool nota = true;
        char majiority;
        if(xa>50){
            majiority = 'A';
            nota = false;
        }
        if(xb>50){
            majiority = 'B';
            nota = false;
        }
        if(xc>50){
            majiority = 'C';
            nota = false;
        }
        if(nota){
            cout<<"NOTA"<<endl;
        }
        else{
            cout<<majiority<<endl;
        }
    }
    return 0;
}
