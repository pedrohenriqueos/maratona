#include<bits/stdc++.h>
using namespace std;

#define int long long
int32_t main(){
	int T,K,P,N;
	cin >> T;
	while(T--){
		cin >> K >> P >> N;
		cout << max((K-P)*N,0LL) << '\n';
	}

}
