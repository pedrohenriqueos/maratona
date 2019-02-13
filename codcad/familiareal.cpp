#include<bits/stdc++.h>
using namespace std;

vector<int> G[10002];
int cor[10002],dist[10002];
int distancia;
void bfs(int v){
	queue<int> q;
	q.push(v);
	cor[v]=1;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int w:G[u])
			if(!cor[w]){
				cor[w]=1;
				q.push(w);
				dist[w]=dist[u]+1;
				if(dist[w]>distancia)
					distancia = dist[w];
			}
	}
}

int main(){
	int N,M;
	cin >> N >> M;
	for(int i=1;i<=N;i++){
		int a;
		cin >> a;
		G[a].push_back(i);
		G[i].push_back(a);
	}
	bfs(0);
	int V[distancia+1],K[distancia+1];
	memset(V,0,sizeof(V));
	memset(K,0,sizeof(K));
	for(int i=1;i<=N;i++)
		V[dist[i]]++;
	int R[M],k;
	for(int m=0;m<M;m++){
		cin >> k;
		K[dist[k]]++;
	}
	for(int i=1;i<=distancia;i++)
		cout << fixed << setprecision(2) << (double)K[i]*(100.00/(double)V[i]) << ' ';
	cout << '\n';
}
