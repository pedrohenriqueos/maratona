#include<bits/stdc++.h>
using namespace std;
#define int long long
main(){
	int N,K,L,out=0;
	scanf("%lld %lld %lld",&N,&K,&L);
	vector<int> A(N*K);
	for(auto &a:A)
		scanf("%lld",&a);
	sort(A.begin(),A.end());
	if((A[N-1]-A[0])>L)
		return !printf("0\n");
	vector<int> S;
	out+=A[0];
	S.push_back(0);
	int quant=N-1;
	for(int i=K;i<(N*K);i+=K){
		if((A[i]-A[0])>L){
			int aux=i-1;
			while(true){
				while((A[aux]-A[0])>L){
					aux--;
				}
				while(aux==S[S.size()-1]){
					aux--;
					S.pop_back();
				}
				out+=A[aux];
				quant--;
				aux--;
				if(!quant) break;

			}
		}
		if(!quant) break;
		S.push_back(i);
		out+=A[i];
		quant--;
	}
	printf("%lld\n",out);
}
