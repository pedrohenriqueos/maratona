#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define int long long
main(){
	int N,K;
	while(scanf("%lld %lld",&N,&K)!=EOF){
		vector<int> A(N);
		int sum=0;
		for(auto &a:A) scanf("%lld",&a);
		sort(A.begin(),A.end());
		for(int i=N-K;i<N;i++){
			sum=(sum+A[i])%mod;
		}
		printf("%lld\n",sum%mod);
	}
}
