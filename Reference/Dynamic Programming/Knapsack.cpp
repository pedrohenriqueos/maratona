int peso[MAXobj],valor[MAXobj],tab[MAXobj][MAXpeso];
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
