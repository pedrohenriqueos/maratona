#include<bits/stdc++.h>
using namespace std;

// Boruvka algorithm

const int MAXN = 200001;

int pai[MAXN],sz[MAXN];
vector<array<int,3>> edge;
int find(int x){
	return ((pai[x]==x)?x:pai[x] = find(pai[x]));
}
void join(int a,int b){
	a = find(a),b = find(b);
	if(a==b) return ;
	if(sz[a]>sz[b])
		pai[b] = a,sz[a]+=sz[b];
	else
		pai[a] = b,sz[b]+=sz[a];
}

int32_t main(){
	int n,m;
	vector<int> aux;
	scanf("%d %d",&n,&m);
	edge = vector<array<int,3>>(m);
	for(int i=0;i<m;i++)
		scanf("%d %d %d",&edge[i][0],&edge[i][1],&edge[i][2]);
	for(int i=0;i<n;i++)
		pai[i] = i,sz[i] = 1;
	int mst=0;
	bool fl = true;
	while(fl){
		fl = false;
		aux = vector<int>(n,-1);
		for(int i=0;i<m;i++){
			int u = find(edge[i][0]),v=find(edge[i][1]);
			if(u==v) continue;
			if(aux[u]==-1)
				aux[u] = i;
			else if(edge[aux[u]][2]>edge[i][2])
				aux[u] = i;
			if(aux[v]==-1)
				aux[v] = i;
			else if(edge[aux[v]][2]>edge[i][2])
				aux[v] = i;
		}
		for(int i = 0;i<n;i++){
			if(aux[i]==-1) continue;
			int u = find(edge[aux[i]][0]),v = find(edge[aux[i]][1]);
			if(u==v) continue;
			join(u,v);
			mst+=edge[aux[i]][2];
			fl = true;
		}
	}
	printf("%d\n",mst);
}

