#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int N,K;
		scanf("%d %d",&N,&K);
		long long out=0;
		vector<long long> S;
		for(int i=0;i<N;i++){
			vector<long long> aux(3);
			for(auto &a:aux)
				scanf("%lld",&a);
			sort(aux.begin(),aux.end());
			S.push_back(aux[0]);
			S.push_back(aux[1]);
		}
		sort(S.begin(),S.end());
		for(int i=0;i<K;i++)
			out+=S[i];
		printf("%lld\n",out);
	}

}
