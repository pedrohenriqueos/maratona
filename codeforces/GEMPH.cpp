#include<bits/stdc++.h>
using namespace std;

int32_t main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int N,K;
		scanf("%d %d",&N,&K);
		vector<int> X;
		for(int i=0;i<N;i++){
			vector<int> aux(3);
			for(auto &a:aux)
				scanf("%d",&a);
			sort(aux.begin(),aux.end());
			X.push_back(aux[0]),X.push_back(aux[1]);
		}
		sort(X.begin(),X.end());
		long long out=0;
		for(int i=0;i<K;i++)
			out+=X[i];
		printf("%lld\n",out);
	}
}
