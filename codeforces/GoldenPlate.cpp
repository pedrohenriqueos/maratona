#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	int N,M,K,out=0;
	cin >> N >> M >> K;
	for(int i=0;i<K;i++){
		out+= 2*N + 2*M -4;
		N-=4;
		M-=4;
	}
	cout << out << '\n';
}
