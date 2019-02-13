#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int N;
int main(){
	while(scanf("%d",&N)!=EOF){
		vector<ll> A(N+1),Pre(N+1),Aux(N+1);
		int Or[(int)1e5+2];
		memset(Or,0,sizeof Or);
		for(int x=1;x<=N;x++)
			scanf("%lld",&A[x]),Or[A[x]]++;
		Pre[0]=Aux[0]=A[0]=0;
		int au=1;
		ll atual=1;
		for(int x=(int)1e5;x>=0;x--)
			while(Or[x]){
				A[au]=x;
				Pre[au]=Pre[au-1]+A[au];
				Aux[au]=Aux[au-1]+min(atual++,A[au]);
				au++;
				Or[x]--;
			}
		if(Pre[N]&1){
			printf("impossivel\n");
			continue;
		}
		bool flag=false;
		for(int k=1;k<=N;k++){
			if(Pre[k]>(k*(k-1LL)+(Aux[N]-Aux[k]))){
				flag=true;
				printf("impossivel\n");
				break;
			}
		}
		if(!flag) printf("possivel\n");
	}
}
