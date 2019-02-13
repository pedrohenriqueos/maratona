#include<bits/stdc++.h>
using namespace std;

int N,M,peso[52],valor[52],tab[52][1002];

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
	int cont=1;
	while(cin >> M >> N){
		if(N==0 and M==0) break;
		memset(tab,-1,sizeof(tab));
		for(int i=0;i<N;i++)
			scanf("%d %d",&peso[i],&valor[i]);
		int saida = knapsack(0,M);
		printf("Teste %d\n%d\n\n",cont++,saida);
	}
}
