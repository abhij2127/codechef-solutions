#include<bits/stdc++.h>
using namespace std;
int main(){
	map<char, char> key;
	char start = 'a';
	char end = 'z';
	for(int i=0;i<26;i++){
	    key[start] = end;
	    start++;
	    end--;
	}
	
	map<char, char>::iterator p;
	p = key.begin();
	while(p!=key.end()){
		cout<<p->first<<" : "<<p->second<<endl;
		p++;
	}
	return 0;
}
