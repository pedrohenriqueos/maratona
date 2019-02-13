#include<bits/stdc++.h>
using namespace std;

int N,M,cor[22],dist[22];
vector<int> G[22];

void dfs(int v){
	cor[v]=1;
	for(int u:G[v])
		if(!cor[u]){
			dist[u]=dist[v]+1;
			for(int i=0;i<dist[u];i++)
				printf("  ");
			printf("%d-%d pathR(G,%d)\n",v,u,u);	
			dfs(u);
		}
}

int main(){
	int T,a,b,c=1;
	cin >> T;
	while(T--){
		for(int i=0;i<22;i++)
			G[i].clear();
		memset(dist,0,sizeof(dist));
		memset(cor,0,sizeof(cor));
		scanf("%d %d",&N,&M);
		while(M--){
			scanf("%d %d",&a,&b);
			G[a].push_back(b);
			//G[b].push_back(a);
		}
		printf("Caso %d:\n",c++);
		for(int i=0;i<=N;i++)
			if(!cor[i]){
				dfs(i);
				//printf("\n");
			}
	}
}
