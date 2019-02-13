#include<bits/stdc++.h>

using namespace std;

int main(){
	int N;
	long long X;
	cin >> N;
	while(N--){
		cin >> X;
		long long V=0;
		int v=0,x=0;
		for(long long i=0;(1LL<<i)<=X;i++){
			if(X&(1LL<<i)){
				continue;
			}else
				V|=(1LL<<i);
		}
		V|=(1LL<<(int)(log2(X)));
		for(int i=0;(1LL<<i)<=max(X,V);i++){
			if(X&(1LL<<i)) x++;
			if(V&(1LL<<i)) v++;
		}
		if(x<v){
			cout << X << '\n';
		}else if(x==v){
			cout << min(X,V) << '\n';
		}else
			cout << V << '\n';
	}

}
