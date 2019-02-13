#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
int N,M,G[102][102],dist[102],cor[102],maxc;

int Dijkstra(int v,int z){
	memset(dist,63,sizeof(dist));
	int a = v;dist[v]=0;
	while(a!=z){
		for(int i=1;i<=N;i++)
			if(G[a][i]!=inf and dist[i]>dist[a]+G[a][i]){
				dist[i]=dist[a]+G[a][i];
				if(G[a][i]>maxc)
					maxc=G[a][i];
		}
		cor[a]=1;
		int maxi=inf;
		for(int i=1;i<=N;i++)
			if(!cor[i] and dist[i]<maxi)
				a=i,maxi=dist[i];	
		if(maxi==inf)
			return inf;
	}
		return dist[z];
}

int main(){
	int caso=1;
	while(scanf("%d %d",&N,&M)){
		if(N==0 and M==0)
			break;
		memset(G,63,sizeof(G));
		while(M--){
			int a,b,c;
			scanf("%d %d %d",&a,&b,&c);
			G[a][b]=G[b][a]=c;
		}
		int K;
		scanf("%d",&K);
		printf("Instancia %d\n",caso++);
		while(K--){
			maxc=0;
			memset(cor,0,sizeof(cor));
			int a,b;
			scanf("%d %d",&a,&b);
			int saida=Dijkstra(a,b);
			printf("%d\n",maxc);
		}
		printf("\n");
	}
}
