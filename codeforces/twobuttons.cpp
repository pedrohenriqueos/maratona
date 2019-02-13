#include<bits/stdc++.h>
using namespace std;
vector<int> G[20002];
int N,M,cor[20002],dist[20002];
bool acho;
void bfs(int v){
	queue<int> q;
	q.push(v);
	cor[v]=1;
	while(!q.empty()){
		int u=q.front();
		if(u==M)
			break;
		q.pop();
		if(u-1>=0)
		G[u].push_back(u-1);
		if(u*2<=10000)
		G[u].push_back(u*2);
		for(int w:G[u])
			if(!cor[w]){
				q.push(w);
				cor[w]=1;
				dist[w]=dist[u]+1;
			}
	}
}
int main(){
	acho=false;
	memset(dist,63,sizeof(dist));
	cin >> N >> M;
	dist[N]=0;
	bfs(N);
	cout << dist[M] << '\n';
}
