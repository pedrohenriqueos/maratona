#include<bits/stdc++.h>
using namespace std;

int N,tab[1002][1002],valor[1002];

int troco(int idx,int v){
	if(idx==N or v<0)
		return tab[idx][v]=0x3f3f3f3f;
	if(!v)
		return tab[idx][v]=1;
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
	memset(tab,-1,sizeof(tab));
	int M;
	cin >> N >> M;
	for(int i=0;i<N;i++)
		cin >> valor[i];
	int saida = troco(0,M);
	cout << ((saida!=1061109567)?"S\n":"N\n"); 
}
