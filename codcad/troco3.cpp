#include<bits/stdc++.h>
using namespace std;

int DP[1002],valor[1002],N,testados[10002],saida;

int troco(int x){
	//testados[x]=1;
	if(x==0) 
		return 1;
	if(x<0)
		return 0;
	if(DP[x]>=0)
		return DP[x];
	for(int i=0;i<N;i++)
		if(troco(x-valor[i]))
			return DP[x-valor[i]]=1;
	return DP[x]=0;
}

int main(){
	int M;
	scanf("%d %d",&N,&M);
	for(int i=0;i<N;i++)
		scanf("%d",&valor[i]);
	int teste=0;
	memset(DP,-1,sizeof(DP));
	for(int i=M-1;i>0;i--){
		if(troco(i)==0)
			teste++;
	}
	cout << teste << '\n';
}
