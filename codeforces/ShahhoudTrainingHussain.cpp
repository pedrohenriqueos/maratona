#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		long long K,P,N;
		scanf("%lld %lld %lld",&K,&P,&N);
		printf("%lld\n",max((K-P)*N,0LL));
	}

}
