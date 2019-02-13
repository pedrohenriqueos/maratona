#include<bits/stdc++.h>
using namespace std;

#define int long long
int N,M;
main(){
	scanf("%lld",&N);
	vector<int> A(N+1),S1(N+1);
	S1[0]=0;
	for(int i=1;i<=N;i++) scanf("%lld",&A[i]),S1[i]=S1[i-1]+A[i];
	scanf("%lld",&M);
	vector<int> B(M+1),S2(M+1);
	S2[0]=0;
	for(int i=1;i<=M;i++) scanf("%lld",&B[i]),S2[i]=S2[i-1]+B[i];
	if(S1[N]!=S2[M])
		return !printf("-1\n");
	int parc1=A[1],parc2=B[1],out=0;
	for(int i=2,j=2;i<=N or j<=M;){
		if(parc1==parc2){
			out++;
			parc1=A[i++];
			parc2=B[j++];
		}else if(parc1>parc2){
			parc2+=B[j++];
		}else
			parc1+=A[i++];
	}
	printf("%lld\n",out+1);
}
