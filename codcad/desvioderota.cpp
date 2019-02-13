#include <bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
#define is 1061109567
int N,M,C,K,G[252][252],dist[252],cor[252]; 

int Dijkstra(int v,int z){
	memset(dist,63,sizeof(dist));
	int a = v;dist[v]=0;
	while(a!=z){
		for(int i=0;i<N;i++)
			if(G[a][i]!=inf and dist[i]>dist[a]+G[a][i])
				dist[i]=dist[a]+G[a][i];
		cor[a]=1;
		int maxi=inf;
		for(int i=0;i<N;i++)
			if(!cor[i] and dist[i]<maxi)
				a=i,maxi=dist[i];	
		if(maxi==inf)
			return inf;
	}
		return dist[z];
}

int main(){
	while(scanf("%d %d %d %d",&N,&M,&C,&K)){
		if(N==0 and M==0 and C==0 and K==0)
			break;
		memset(G,63,sizeof(G)); 
		while(M--){
			int a,b,c;
			scanf("%d %d %d",&a,&b,&c);
			if(a>=C and b>=C)
				G[a][b]=G[b][a]=c;
			else if(a>=C and b<C)
				G[a][b]=c;
			else if(b>=C and a<C)
				G[b][a]=c;
			else if(a<C and b<C and abs(a-b)==1)
				G[a][b]=G[b][a]=c;
		}
		memset(cor,0,sizeof(cor));
		int saida = Dijkstra(K,C-1);
		printf("%d\n",saida);
	}
}
