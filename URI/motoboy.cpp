#include<bits/stdc++.h>
using namespace std;
int N,M,peso[22],valor[22],tab[22][32];

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
	while(scanf("%d",&N)){
		if(N==0)
			break;
		memset(tab,-1,sizeof(tab));
		scanf("%d",&M);
		for(int i=0;i<N;i++){
			scanf("%d %d",&valor[i],&peso[i]);
			//tab[i][0]=0;
		}
		int saida = knapsack(0,M);
		cout << saida << " min.\n";
	}
	
}
