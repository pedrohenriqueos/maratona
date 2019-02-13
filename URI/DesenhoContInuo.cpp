//Falta apenas o teste de quando existe 2 vertices de grau impar e ja é possivel percorrer todas as arestas, sem acrécimo
#include<bits/stdc++.h>
using namespace std;
#define MAXN 20
#define inf 100000
int N,T,custo[MAXN][MAXN],pai[MAXN],num_aresta,grau[MAXN];
double dist[MAXN],memo[MAXN][MAXN],sum;
vector<int> edges;
vector< pair<double,int> > G[MAXN];

int find(int x){
	return (pai[x]==-1)?x:pai[x]=find(pai[x]);
}
void join(int a,int b){
	a=find(a),b=find(b);
	pai[a]=b;
}
int dijkstra(int v,int z){//dijkstra com memorize para evitar calculos desnecessários.
	if(memo[v][z]!=-1) return memo[v][z];
	memset(dist,63,sizeof(dist));
	dist[v]=0;
	priority_queue< pair<double,int> > pq;
	pq.push(make_pair(0,v));
	while(!pq.empty()){
		int u = pq.top().second;
		double d = -pq.top().first;
		pq.pop();
		memo[v][u]=memo[u][v]=d;
		if(memo[u][z]!=-1) return memo[v][z]=memo[z][v]=memo[v][u]+memo[u][z];
		if(d>dist[u]) continue;
		if(u==z) return memo[v][z]=memo[z][v]=d;
		for(pair<double,int> j:G[u]){
			int w=j.second;
			double _d=j.first;
			if(dist[w]>d+_d){
				dist[w]=d+_d;
				pq.push(make_pair(-dist[w],w));
			}
		}
	}
	return memo[v][z]=memo[z][v]=0x3f3f3f3f;
}
int main(){
	cin >> T;
	while(T--){
		int num_map=0;
		map< pair<int,int>,int > Map;
		pair< map< pair<int,int>,int >::iterator,bool > r;
		memset(pai,-1,sizeof pai);
		memset(memo,-1,sizeof memo);
		memset(grau,0,sizeof grau);
		cin >> N;
		while(N--){
			string str1,str2;
			cin >> str1 >> str2;
			int i1=(int)(str1[0]-'A');
			int j1=(int)(str1[1]-'1');
			int i2=(int)(str2[0]-'A');
			int j2=(int)(str2[1]-'1');
			r=Map.insert({{i1,j1},num_map});
			if(r.second) num_map++;
			r=Map.insert({{i2,j2},num_map});
			if(r.second) num_map++;
			double dist=sqrt((i1-i2)*(i1-i2)+(j1-j2)*(j1-j2));
			sum+=dist;
			G[Map[{i1,j1}]].push_back({dist,Map[{i2,j2}]});
			grau[Map[{i1,j1}]]++;
			G[Map[{i2,j2}]].push_back({dist,Map[{i1,j1}]});
			grau[Map[{i2,j2}]]++;
		}
		for(int i=0;i<N;i++)
			if(grau[i]&1)
				edges.push_back(i);
		double parc=0x3f3f3f3f3f3f3f3f;
		do{
			double aux=0;
			for(int i=1;i<edges.size();i+=2)
				aux+=dijkstra(edges[i],edges[i-1]);
			parc=min(parc,aux);
		}while(next_permutation(edges.begin(),edges.end()));
		cout << fixed << setprecision(2) << sum+parc << '\n';
		if(T!=0)
			for(int i=0;i<num_map;i++)
				G[i].clear();
	}
}
