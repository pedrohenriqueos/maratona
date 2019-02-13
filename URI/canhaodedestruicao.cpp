#include<bits/stdc++.h>
using namespace std;

int N,peso[52],valor[52],tab[52][102];
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
	int T;
	cin >> T;
	while(T--){
		memset(tab,-1,sizeof(tab));
		scanf("%d",&N);
		for(int i=0;i<N;i++)
			scanf("%d %d",&valor[i],&peso[i]);
		int A,B;
		scanf("%d %d",&A,&B);
		int saida = knapsack(0,A);
		if(saida>=B)
			printf("Missao completada com sucesso\n");
		else
			printf("Falha na missao\n");
	}
}
