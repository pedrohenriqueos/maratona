#include<bits/stdc++.h>
using namespace std;
#define MAXN 1000010
//#define int long long
vector<int> G[MAXN];
int N,M,d[MAXN],low[MAXN],cor[MAXN],nivel[MAXN],tempo;
int table[MAXN][20],anc[MAXN][20];
void dfst(int u,int p){
	cor[u]=1;
	d[u]=low[u]=tempo++;
	for(int &v:G[u])
		if(!cor[v]){
			anc[v][0]=u;
			nivel[v]=nivel[u]+1;
			dfst(v,u);
			low[u]=min(low[u],low[v]);
			if(low[v]>d[u])
				table[v][0]=1;
		}else if(v!=p)
			low[u]=min(low[u],d[v]);
}

pair<int,int> LCA(int u,int v){
	if(nivel[u]<nivel[v]) swap(u,v);
	int m=0;
	for(int i=19;i>=0;i--)
		if(nivel[u]-(1<<i) >= nivel[v]){
			m+=table[u][i];
			u=anc[u][i];
		}
	if(u==v) return {v,m};
	for(int i=19;i>=0;i--)
		if(anc[u][i]!=-1 and anc[u][i]!=anc[v][i]){
			m+=(table[u][i]+table[v][i]);
			u=anc[u][i],v=anc[v][i];
		}
	return {anc[u][0],m+table[u][0]+table[v][0]}; 
}
int main(){
	memset(anc,-1,sizeof anc);
	memset(nivel,-1,sizeof nivel);
	scanf("%d %d",&N,&M);
	while(M--){
		int a,b;
		scanf("%d %d",&a,&b);
		G[a].push_back(b);
		G[b].push_back(a);
	}
	nivel[1]=0;
	dfst(1,0);
	for(int i = 1; i<20; ++i)
  		for(int j=1; j<=N; ++j)
			if(anc[j][i-1]!=-1){
				anc[j][i] = anc[anc[j][i-1]][i-1];
				table[j][i]=table[anc[j][i-1]][i-1]+table[j][i-1];
			}
	int Q;
	scanf("%d",&Q);
	for(int i=0;i<Q;i++){
		int u,v;
		scanf("%d %d",&u,&v);
		pair<int,int> k=LCA(u,v);
		printf("%d\n",k.second);
	}
}
