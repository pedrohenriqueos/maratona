#include<bits/stdc++.h>
using namespace std;

int tab[30][1000002],valor[30],N;
int troco(int idx,int v){//solução recursiva TLE
	if(idx==N or v<0)
		return tab[idx][v]=0x3f3f3f3f;
	if(!v)
		return tab[idx][v]=0;
	if(tab[idx][v]>=0)
		return tab[idx][v];
	int nao_escolhe = troco(idx+1,v);
	if(valor[idx]<=v){
		int escolhe = 1+troco(idx,v-valor[idx]);
		return tab[idx][v] = min(escolhe,nao_escolhe);
	}
	return tab[idx][v]=nao_escolhe;
}

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		memset(tab,-1,sizeof(tab));
		int M;
		scanf("%d %d",&N,&M);
		for(int i=0;i<N;i++)
			scanf("%d",&valor[i]);
		int saida = troco(0,M);
		printf("%d\n",saida);
	}
}
