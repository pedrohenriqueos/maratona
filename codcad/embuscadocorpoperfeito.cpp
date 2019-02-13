#include<bits/stdc++.h>
using namespace std;

int tab[2002][2002],peso[2002],N,valor[2002];
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
	memset(tab,-1,sizeof(tab));
	int M;
	cin >> M >> N;
	for(int i=0;i<N;i++)
		scanf("%d %d",&peso[i],&valor[i]);
	int saida = knapsack(0,M);
	cout << saida << '\n';
}





