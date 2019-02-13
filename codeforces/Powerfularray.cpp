#include<bits/stdc++.h>
using namespace std;
#define int long long
int N,Q,arr[200002],block,sum,OC[1000002],out[200002];

struct _Query{
	int i,L,R;//i -> indice da query, L -> left, R -> Right
	/*
		o indece serve para retornar para a ordem original dos pedidos
	*/
};
typedef struct _Query Query;
void add(int p){//Função pra add na resposta do range (varia)
	sum+=(p*((OC[p]<<1)+1));
	OC[p]++;
}
void rem(int p){//Função pra remover na resposta do range (varia)
	OC[p]--;
	sum-=(p*((OC[p]<<1)+1));
}
bool cmp(Query a,Query b){//sqrt Decomposition
	if(a.L/block!=b.L/block)
		return a.L < b.L;
	if((a.L/block)&1)
		return a.R<b.R;
	return a.R>b.R;
}
void MoAlgorithm(Query A[],int Q){
	int left=0,right=-1;
	for(int i=0;i<Q;i++){
		Query &q=A[i];
		while(left<q.L) rem(arr[left++]);
		while(left>q.L) add(arr[--left]);
		while(right<q.R) add(arr[++right]);
		while(right>q.R) rem(arr[right--]);
		out[q.i]=sum;//Criar o vetor out[] evita um Q*logQ
	}
}
main(){
	scanf("%lld %lld",&N,&Q);
	for(int i=0;i<N;i++)
		scanf("%lld",&arr[i]);
	block=(int)sqrt(N);
	Query A[Q];
	for(int i=0;i<Q;i++){
		scanf("%lld %lld",&A[i].L,&A[i].R);
		A[i].L--,A[i].R--;
		A[i].i=i;
	}
	sort(A,A+Q,cmp);//ordena em blocos de sqrt(N)
	MoAlgorithm(A,Q);
	for(int i=0;i<Q;i++)
		printf("%lld\n",out[i]);
}
