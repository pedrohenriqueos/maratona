#include<bits/stdc++.h>
using namespace std;
#define int long long
//LCA
int nivel[100002],ancestral[100002][11],table[100002][11],N,Q;
vector< pair<int,int> > MST[100002];
void dfs(int v){
	for(pair<int,int> u:MST[v])
		if(nivel[u.second]==-1){
			ancestral[u.second][0]=v;
			table[u.second][0]=u.first;
			nivel[u.second]=nivel[v]+1;
			dfs(u.second);
		}
}
pair<int,int> LCA(int u,int v){
	if(nivel[u]<nivel[v]) swap(u,v);
	int m=0;
	for(int i=10;i>=0;i--)
		if((nivel[u]-(1<<i)) >= nivel[v]){
			m+=table[u][i];
			u=ancestral[u][i];
		}
	if(u==v) return {v,m};
	for(int i=10;i>=0;i--)
		if(ancestral[u][i]!=-1 and ancestral[u][i]!=ancestral[v][i]){
			m+=table[u][i];m+=table[v][i];
			u=ancestral[u][i],v=ancestral[v][i];
		}
	return {ancestral[u][0],m+table[u][0]+table[v][0]}; 
}
main(){
	while(scanf("%lld",&N)!=EOF){
		if(!N) break;
		memset(nivel,-1,sizeof nivel);
		memset(ancestral,-1,sizeof ancestral);
		for(int i=0;i<N;i++)
			MST[i].clear();
		for(int i=1;i<N;i++){
			int a,b;
			scanf("%lld %lld",&a,&b);
			MST[a].push_back({b,i});
			MST[i].push_back({b,a});
		}
		nivel[0]=0;
		dfs(0);//grafo 1-idexado
		for(int i = 1; i<11; ++i)
	  		for(int j=0; j<N; ++j)
				if(ancestral[j][i-1]!=-1){
					ancestral[j][i] = ancestral[ancestral[j][i-1]][i-1];
					table[j][i]=table[ancestral[j][i-1]][i-1]+table[j][i-1];
				}
		scanf("%lld",&Q);
		for(int q=0;q<Q;q++){
			int a,b;
			scanf("%lld %lld",&a,&b);
			//Querry -> elemento propagado na sparse table "table",k.second
			pair<int,int> k=LCA(a,b);
			if(q!=0) printf(" ");
			printf("%lld",k.second);
		}
		printf("\n");
	}
}//dist entre dois pontos com LCA nivel[a]+nivel[b]-2*nivel[lca], N-sz[aux1]-sz[aux2]


