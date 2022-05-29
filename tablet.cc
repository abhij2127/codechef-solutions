#include<bits/stdc++.h>
using namespace std;

long int area(int h, int w){
    return h*w;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, b;
        cin>>n>>b;
        vector<int> heights;
        vector<int> widths;
        vector<int> prices;
        for(int i=0;i<n;i++){
            int w, h, p;
            cin>>w>>h>>p;
            heights.push_back(h);
            widths.push_back(w);
            prices.push_back(p);
        }

        long int max_ar = INT_MIN;
        for(int i=0;i<n;i++){
            int price = prices[i];
            int width = widths[i];
            int height = heights[i];
            if(price<=b){
                long int tab_area = area(height, width);
                if(tab_area>max_ar) max_ar = tab_area;
            }
        }
        if(max_ar==INT_MIN){
            cout<<"no tablet"<<endl;
        }
        else{
            cout<<max_ar<<endl;
        }
    }
}
