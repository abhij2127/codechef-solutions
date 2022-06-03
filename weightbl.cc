#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int w1, w2, x1, x2, m;
        cin>>w1>>w2>>x1>>x2>>m;
        int dif = w2 - w1;
        float rate = (float)dif/m;
        int res = 0;
        if(rate<=x2 && rate>=x1) res = 1;
        cout<<res<<endl;
    }
	return 0;
}
