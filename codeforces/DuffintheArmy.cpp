#include<bits/stdc++.h>

using namespace std;
#define MAXN 100010
#define inf 0x3f3f3f3f
int ancestral[18][MAXN],nivel[MAXN],N,M,Q;
vector<int> G[MAXN],table[18][MAXN],P[MAXN];

void dfs(int v){
	for(int u:G[v])
		if(nivel[u]==-1){
			nivel[u]=nivel[v]+1;
			table[0][u]=P[v];
			ancestral[0][u]=v;
			dfs(u);
		}

}
pair<int,vector<int> > LCA(int u,int v){
	if(nivel[u]<nivel[v]) swap(u,v);
	vector<int> m,aux;
	int s1=v,s2=u;
	for(int i=17;i>=0;i--)
		if(nivel[u]-(1<<i) >= nivel[v]){
			aux.resize((m.size()>10?10:m.size())+((table[i][u].size()>10)?10:table[i][u].size()));
			merge(m.begin(),((m.size()>10)?m.begin()+10:m.end()),table[i][u].begin(),((table[i][u].size()>10)?table[i][u].begin()+10:table[i][u].end()),aux.begin());
			m=aux;
			u=ancestral[i][u];
		}
	if(u==v){
		if(s1==u){
			aux.resize(((m.size()>10)?10:m.size())+((P[s2].size()>10)?10:P[s2].size()));
			merge(m.begin(),((m.size()>10)?m.begin()+10:m.end()),P[s2].begin(),((P[s2].size()>10)?P[s2].begin()+10:P[s2].end()),aux.begin());
			m=aux;
		}else{
			aux.resize(((m.size()>10)?10:m.size())+((P[s1].size()>10)?10:P[s1].size()));
			merge(m.begin(),((m.size()>10)?m.begin()+10:m.end()),P[s1].begin(),((P[s1].size()>10)?P[s1].begin()+10:P[s1].end()),aux.begin());
			m=aux;
		}
		return {v,m};

	}
	aux.resize(((m.size()>10)?10:m.size())+((P[s1].size()>10)?10:P[s1].size()));
	merge(m.begin(),((m.size()>10)?m.begin()+10:m.end()),P[s1].begin(),((P[s1].size()>10)?P[s1].begin()+10:P[s1].end()),aux.begin());
	m=aux;
	aux.resize(((m.size()>10)?10:m.size())+((P[s2].size()>10)?10:P[s2].size()));
	merge(m.begin(),((m.size()>10)?m.begin()+10:m.end()),P[s2].begin(),((P[s2].size()>10)?P[s2].begin()+10:P[s2].end()),aux.begin());
	m=aux;
	if(m.size()>10)
		m.resize(10);
	for(int i=17;i>=0;i--)
		if(ancestral[i][u]!=-1 and ancestral[i][u]!=ancestral[i][v]){
			aux.resize(((m.size()>10)?10:m.size())+((table[i][u].size()>10)?10:table[i][u].size()));
			merge(m.begin(),((m.size()>10)?m.begin()+10:m.end()),table[i][u].begin(),((table[i][u].size()>10)?table[i][u].begin()+10:table[i][u].end()),aux.begin());
			m=aux;
			aux.resize(((m.size()>10)?10:m.size())+((table[i][v].size()>10)?10:table[i][v].size()));
			merge(m.begin(),((m.size()>10)?m.begin()+10:m.end()),table[i][v].begin(),((table[i][v].size()>10)?table[i][v].begin()+10:table[i][v].end()),aux.begin());
			m=aux;
			if(m.size()>10)
				m.resize(10);
			u=ancestral[i][u],v=ancestral[i][v];
		}
	aux.resize(((m.size()>10)?10:m.size())+((table[0][v].size()>10)?10:table[0][v].size()));
	merge(m.begin(),((m.size()>10)?m.begin()+10:m.end()),table[0][v].begin(),((table[0][v].size()>10)?table[0][v].begin()+10:table[0][v].end()),aux.begin());
	m=aux;
	if(m.size()>10)
		m.resize(10);
	return {ancestral[0][u],m}; 
}

int main(){
	memset(ancestral,-1,sizeof ancestral);
	memset(nivel,-1,sizeof nivel);
	scanf("%d %d %d",&N,&M,&Q);
	for(int n=1;n<N;n++){
		int a,b;
		scanf("%d %d",&a,&b);
		G[a].push_back(b);
		G[b].push_back(a);
	}
	for(int m=1;m<=M;m++){
		int c;
		scanf("%d",&c);
		P[c].push_back(m);
	}
	for(int n=1;n<=N;n++)
		sort(P[n].begin(),P[n].end());
	dfs(1);
	for(int i = 1; i<18; ++i)
  		for(int j=1; j<=N; ++j)
			if(ancestral[i-1][j]!=-1){
				ancestral[i][j] = ancestral[i-1][ancestral[i-1][j]];
				table[i][j].assign(table[i-1][ancestral[i-1][j]].size()+table[i-1][j].size(),0);
				merge(table[i-1][ancestral[i-1][j]].begin(),((table[i-1][ancestral[i-1][j]].size()>10)?table[i-1][ancestral[i-1][j]].begin()+10:table[i-1][ancestral[i-1][j]].end()),table[i-1][j].begin(),((table[i-1][j].size()>10)?table[i-1][j].begin()+10:table[i-1][j].end()),table[i][j].begin());
				if(table[i][j].size()>10)
					table[i][j].resize(10);
			}
	while(Q--){
		int u,v,l;
		scanf("%d %d %d",&u,&v,&l);
		pair<int,vector<int> > k=LCA(u,v);
		int x=k.second.size();
		printf("%d",min(l,x));
		for(int i=0;i<min(l,x);i++)
			printf(" %d",k.second[i]);
		printf("\n");
	}
}
