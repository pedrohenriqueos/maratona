#include<bits/stdc++.h>
using namespace std;

#define int long long
int N,Q,A[200002],S[200010];
int32_t main(){
	scanf("%lld %lld",&N,&Q);
	for(int i=1;i<=N;i++)
		scanf("%lld",&A[i]);
	sort(A+1,A+N+1);
	while(Q--){
		int a,b;
		scanf("%lld %lld",&a,&b);
		S[a]++;
		S[b+1]--;
	}
	for(int i=2;i<=(N+1);i++)
		S[i]+=S[i-1];
	sort(S+1,S+N+1);
	int out=0;
	for(int i=1;i<=N;i++)
		out+=(S[i]*A[i]);
	printf("%lld\n",out);
}
