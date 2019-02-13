#include<bits/stdc++.h>
using namespace std;
int N,M,peso[1001],valor[1001],tab[1001][1001];
	
int knapsack(int obj, int aguenta){
	if(tab[obj][aguenta]>=0) 
		return tab[obj][aguenta];
	if(obj==N or !aguenta) 
		return tab[obj][aguenta]=0;
	int nao_coloca=knapsack(obj+1, aguenta);
	if(peso[obj]<=aguenta){
		int coloca=valor[obj]+knapsack(obj+1, aguenta-peso[obj]);
		return tab[obj][aguenta]=max(coloca, nao_coloca);
	}
	return tab[obj][aguenta]=nao_coloca;
}

int main(){
	int T,cont=1;
	cin >> T;
	while(T--){
		scanf("%d",&N);
		scanf("%d",&M);
		memset(tab,-1,sizeof(tab));
		for(int i=0;i<N;i++)
			scanf("%d %d",&valor[i],&peso[i]);
			
		int saida = knapsack(0,M);
		printf("Galho %d:\nNumero total de enfeites: %d\n\n",cont++,saida);
	}
}
