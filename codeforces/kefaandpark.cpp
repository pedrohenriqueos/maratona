//1ª nivel C do codeforces xD
#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
int N,M,saida,A[100002],dist[100002],cor[100002];
vector<int> G[100002];

void bfs(int v){
	queue<int> q;
	q.push(v);
	cor[v]=1;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int w:G[u]){
			if(!cor[w]){
				cor[w]=1;
				if(A[w])
					dist[w]=dist[u]+1;
				else
					dist[w]=0;
				if(dist[w]<=M)
					q.push(w);
			}
		}
	}
}

void dfs(int v){
	cor[v]=1;
	if(dist[v]>M)
		return ;
	if(G[v].size()==1 and dist[v]<=M and v!=1){
		saida++;
	}
	for(int u:G[v]){
		if(!cor[u]){
			dfs(u);
		}
	}
}
int main(){
	int a,b;
	cin >> N >> M;
	for(int i=0;i<N;i++)
		cin >> A[i+1];
	N--;
	while(N--){
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	if(A[1])
		dist[1]=1;
	bfs(1);
	memset(cor,0,sizeof(cor));
	dfs(1);
	cout << saida << '\n';
}
